int  pflush(void);
int  pclose(void);
int  popen(char *s, char mode);
int  pread(char *ubuf, int count);
int  pgetc(void);
int  pwrite(char *ubuf, int count);
int  pputs(char *b);
int  pputc(int c);
int  seek(int pos);
int  popendir(void);
int  pchdir(char *path);
int  pmkdir(char *fname);
void pstat(int *filestat);
int  mount_explicit(int DO, int CLK, int DI, int CS);
void unmount(void);
int  loadhandle(int *handle);
void loadhandle0(void);
int  nextfile(char *fbuf);
int  tell(void);
int  get_filesize(void);
