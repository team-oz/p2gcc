int main(void)
{
    char fbuf[13];
    int c;
    int dummy;
    char inbuf[80];
    char *mode;
    char *name;
    char *tokens[10];
    int num, err, i;

    mount_explicit(0, 1, 2, 3);

    printf("FSRWTEST\n");
    Help();
    while (1)
    {
        puts("\n> ");
        gets(inbuf);
        num = Tokenize(inbuf, tokens);
        if (!num) continue;

        if (!strcmp(tokens[0], "type"))
        {
            if (num != 2)
            {
                printf("usage: type file\n");
                continue;
            }
            if (OpenFile(tokens[1], 'r')) continue;
            while ((c = pgetc()) >= 0) putchar(c);
            CloseFile();
        }
        else if (!strcmp(tokens[0], "write"))
        {
            if (num != 2)
            {
                printf("usage: write file\n");
                continue;
            }
            if (OpenFile(tokens[1], 'w')) continue;
            while ((c = getchar()) >= 0)
            {
                if (c == 27) break;
                err = pputc(c);
                if (err < 0)
                {
                    printf("Writing returned %d\n", err);
                    break;
                }
            }
            CloseFile();
        }
        else if (!strcmp(tokens[0], "append"))
        {
            if (num != 2)
            {
                printf("usage: write file\n");
                continue;
            }
            if (OpenFile(tokens[1], 'a')) continue;
            while ((c = getchar()) >= 0)
            {
                if (c == 27) break;
                err = pputc(c);
                if (err < 0)
                {
                    printf("Writing returned %d\n", err);
                    break;
                }
            }
            CloseFile();
        }
        else if (!strcmp(tokens[0], "delete"))
        {
            if (num != 2)
            {
                printf("usage: delete file\n");
                continue;
            }
            if (OpenFile(tokens[1], 'd')) continue;
        }
        else if (!strcmp(tokens[0], "list"))
        {
            popendir();
            i = 0;
            while (nextfile(fbuf) == 0)
            {
                i++;
                printf("%s", fbuf);
                num = strlen(fbuf);
                while (num++ < 14) putchar(' ');
                if (!(i%5)) printf("\n");
            }
            printf("\n");
            CloseFile();
        }
        else if (!strcmp(tokens[0], "help"))
            Help();
        else
        {
            printf("Invalid command\n");
            printf("Commands are type, write, append, list, delete and help\n");
        }
    }
}

void Help(void)
{
    printf("Commands\n");
    printf("  list        - List the files in the directory\n");
    printf("  type file   - Type the contents of a file\n");
    printf("  write file  - Create a file and write text to it\n");
    printf("  append file - Append text to a file\n");
    printf("  delete file - Delete a file\n");
    printf("  help        - Print this help information\n");
}

int OpenFile(char *fname, int mode)
{
    int err;
    err = popen(fname, mode);
    if (err) printf("File open failed with error code %d\n", err);
    return err;
}

void CloseFile(void)
{
    int err;
    err = pclose();
    if (err < 0) printf("Error closing:  %d\n", err);
}

int Tokenize(char *ptr, char **tokens)
{
    int num;
    char *ptr1;

    num = 0;
    while (*ptr)
    {
        ptr = SkipChar(ptr, ' ');
        if (*ptr == 0) break;
        ptr1 = FindChar(ptr, ' ');
        if (*ptr1) *ptr1++ = 0;
        tokens[num++] = ptr;
        ptr = ptr1;
    }

    return num;
}

char *SkipChar(char *ptr, int val)
{
    while (*ptr)
    {
        if (*ptr != val) break;
        ptr++;
    }
    return ptr;
}

char *FindChar(char *ptr, int val)
{
    while (*ptr)
    {
        if (*ptr == val) break;
        ptr++;
    }
    return ptr;
}
