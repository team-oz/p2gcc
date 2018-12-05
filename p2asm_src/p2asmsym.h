/*
 *
 * Copyright (c) 2018 by Dave Hein
 *
 * MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */
char *p2asmsym[] = {
"00000000  2 ror",
"00200000  2 rol",
"00400000  2 shr",
"00600000  2 shl",
"00800000  2 rcr",
"00a00000  2 rcl",
"00c00000  2 sar",
"00e00000  2 sal",
"01000000  2 add",
"01200000  2 addx",
"01400000  2 adds",
"01600000  2 addsx",
"01800000  2 sub",
"01a00000  2 subx",
"01c00000  2 subs",
"01e00000  2 subsx",
"02000000  2 cmp",
"02200000  2 cmpx",
"02400000  2 cmps",
"02600000  2 cmpsx",
"02800000  2 cmpr",
"02a00000  2 cmpm",
"02c00000  2 subr",
"02e00000  2 cmpsub",
"03000000  2 fge",
"03200000  2 fle",
"03400000  2 fges",
"03600000  2 fles",
"03800000  2 sumc",
"03a00000  2 sumnc",
"03c00000  2 sumz",
"03e00000  2 sumnz",
"04000000 42 testb",
"04200000 42 testbn",
"04000000 43 bitl",
"04200000 43 bith",
"04400000 43 bitc",
"04600000 43 bitnc",
"04800000 43 bitz",
"04a00000 43 bitnz",
"04c00000 43 bitrnd",
"04e00000 43 bitnot",
"05000000  2 and",
"05200000  2 andn",
"05400000  2 or",
"05600000  2 xor",
"05800000  2 muxc",
"05a00000  2 muxnc",
"05c00000  2 muxz",
"05e00000  2 muxnz",
"06000000  2 mov",
"06200000 40 not",
"06400000 40 abs",
"06600000 40 neg",
"06800000 40 negc",
"06a00000 40 negnc",
"06c00000 40 negz",
"06e00000 40 negnz",
"07000000  2 incmod",
"07200000  2 decmod",
"07400000  2 zerox",
"07600000  2 signx",
"07800000 40 encod",
"07a00000 40 ones",
"07c00000 40 test",
"07e00000  2 testn",
"08000000 29 setnib",
"08400000 31 getnib",
"08800000 31 rolnib",
"08c00000 29 setbyte",
"08e00000 31 getbyte",
"09000000 31 rolbyte",
"09200000 29 setword",
"09300000 31 getword",
"09400000 31 rolword",
"09500000 28 altsn",
"09580000 28 altgn",
"09600000 28 altsb",
"09680000 28 altgb",
"09700000 28 altsw",
"09780000 28 altgw",
"09800000 28 altr",
"09880000 28 altd",
"09900000 28 alts",
"09980000 28 altb",
"09a00000 28 alti",
"09a80000  2 setr",
"09b00000  2 setd",
"09b80000  2 sets",
"09c00000 40 decod",
"09c80000 40 bmask",
"09d00000  2 crcbit",
"09d80000  2 crcnib",
"09e00000 40 muxnits",
"09e80000 40 muxnibs",
"09f00000 40 muxq",
"09f80000 40 movbyts",
"0a000000  2 mul",
"0a100000  2 muls",
"0a200000  2 sca",
"0a300000  2 scas",
"0a400000  2 addpix",
"0a480000  2 mulpix",
"0a500000  2 blnpix",
"0a580000  2 mixpix",
"0a600000  2 addct1",
"0a680000  2 addct2",
"0a700000  2 addct3",
"0a780000 32 wmlong",
"0a800000  2 rqpin",
"0a880000  2 rdpin",
"0aa00000  2 rdlut",
"0ac00000 32 rdbyte",
"0ae00000 32 rdword",
"0b000000 32 rdlong",
"0e000000 34 calld",
"0b200000 33 calld",
"0b400000 36 callpa",
"0b500000 36 callpb",
"0b600000 33 djz",
"0b680000 33 djnz",
"0b700000 33 djf",
"0b780000 33 djnf",
"0b800000 33 ijz",
"0b880000 33 ijnz",
"0b900000 33 tjz",
"0b980000 33 tjnz",
"0ba00000 33 tjf",
"0ba80000 33 tjnf",
"0bb00000 33 tjs",
"0bb80000 33 tjns",
"0bc00000 33 tjv",
"0bc80000 38 jint",
"0bc80200 38 jct1",
"0bc80400 38 jct2",
"0bc80600 38 jct3",
"0bc80800 38 jse1",
"0bc80a00 38 jse2",
"0bc80c00 38 jse3",
"0bc80e00 38 jse4",
"0bc81000 38 jpat",
"0bc81200 38 jfbw",
"0bc81400 38 jxmt",
"0bc81600 38 jxfi",
"0bc81800 38 jxro",
"0bc81a00 38 jxrl",
"0bc81c00 38 jatn",
"0bc81e00 38 jqmt",
"0bc82000 38 jnint",
"0bc82200 38 jnct1",
"0bc82400 38 jnct2",
"0bc82600 38 jnct3",
"0bc82800 38 jnse1",
"0bc82a00 38 jnse2",
"0bc82c00 38 jnse3",
"0bc82e00 38 jnse4",
"0bc83000 38 jnpat",
"0bc83200 38 jnfbw",
"0bc83400 38 jnxmt",
"0bc83600 38 jnxfi",
"0bc83800 38 jnxro",
"0bc83a00 38 jnxrl",
"0bc83c00 38 jnatn",
"0bc83e00 38 jnqmt",
"0bf00000 23 setpat",
"0c000000 23 wrpin",
"0c080200 30 akpin",
"0c100000 23 wxpin",
"0c200000 23 wypin",
"0c300000 23 wrlut",
"0c400000 35 wrbyte",
"0c500000 35 wrword",
"0c600000 35 wrlong",
"0c700000 23 rdfast",
"0c800000 23 wrfast",
"0c900000 23 fblock",
"0ca00000 23 xinit",
"0cb00000 23 xzero",
"0cc00000 23 xcont",
"0cd00000 41 rep",
"0ce00000 23 coginit",
"0d000000 23 qmul",
"0d100000 23 qdiv",
"0d200000 23 qfrac",
"0d300000 23 qsqrt",
"0d400000 23 qrotate",
"0d500000 23 qvector",
"0d600000 27 hubset",
"0d600001 27 cogid",
"0d600003 27 cogstop",
"0d600004  1 locknew",
"0d600005 27 lockret",
"0d600006 27 locktry",
"0d600007 27 lockrel",
"0d60000e 27 qlog",
"0d60000f 27 qexp",
"0d600010  1 rfbyte",
"0d600011  1 rfword",
"0d600012  1 rflong",
"0d600013 46 rfvar",
"0d600014 46 rfvars",
"0d600015 27 wfbyte",
"0d600016 27 wfword",
"0d600017 27 wflong",
"0d600018  1 getqx",
"0d600019  1 getqy",
"0d60001a  1 getct",
"0d60001b  3 getrnd",
"0d60001c 27 setdacs",
"0d60001d 27 setxfrq",
"0d60001e  1 getxacc",
"0d60001f 27 waitx",
"0d600020 27 setse1",
"0d600021 27 setse2",
"0d600022 27 setse3",
"0d600023 27 setse4",
"0d600024 44 pollint",
"0d600224 44 pollct1",
"0d600424 44 pollct2",
"0d600624 44 pollct3",
"0d600824 44 pollse1",
"0d600a24 44 pollse2",
"0d600c24 44 pollse3",
"0d600e24 44 pollse4",
"0d601024 44 pollpat",
"0d601224 44 pollfbw",
"0d601424 44 pollxmt",
"0d601624 44 pollxfi",
"0d601824 44 pollxro",
"0d601a24 44 pollxrl",
"0d601c24 44 pollatn",
"0d601e24 44 pollqmt",
"0d602024 44 waitint",
"0d602224 44 waitct1",
"0d602424 44 waitct2",
"0d602624 44 waitct3",
"0d602824 44 waitse1",
"0d602a24 44 waitse2",
"0d602c24 44 waitse3",
"0d602e24 44 waitse4",
"0d603024 44 waitpat",
"0d603224 44 waitfbw",
"0d603424 44 waitxmt",
"0d603624 44 waitxfi",
"0d603824 44 waitxro",
"0d603a24 44 waitxrl",
"0d603c24 44 waitatn",
"0d604024  0 allowi",
"0d604224  0 stalli",
"0d604424  0 trgint1",
"0d604624  0 trgint2",
"0d604824  0 trgint3",
"0d604a24  0 nixint1",
"0d604c24  0 nixint2",
"0d604e24  0 nixint3",
"0d600025 27 setint1",
"0d600026 27 setint2",
"0d600027 27 setint3",
"0d600028 27 setq",
"0d600029 27 setq2",
"0d60002a 27 push",
"0d60002b  1 pop",
"0d800000 37 jmp",
"0d60002c  1 jmp",
"0da00000 37 call",
"0d60002d  1 call",
"0d64002d  0 ret",
"0dc00000 37 calla",
"0d60002e  1 calla",
"0d64002e  0 reta",
"0de00000 37 callb",
"0d60002f  1 callb",
"0d64002f  0 retb",
"0d600030 27 jmprel",
"0d600031 27 skip",
"0d600032 27 skipf",
"0d600033 27 execf",
"0d600034  1 getptr",
"0d600035  1 getbrk",
"0d600035 27 cogbrk",
"0d600036 27 brk",
"0d600037 27 setluts",
"0d600038 27 setcy",
"0d600039 27 setci",
"0d60003a 27 setcq",
"0d60003b 27 setcfrq",
"0d60003c 27 setcmod",
"0d60003d 27 setpiv",
"0d60003e 27 setpix",
"0d60003f 27 cogatn",
"0d600040 48 testp",
"0d600041 48 testpn",
"0d600040 45 dirl",
"0d600041 45 dirh",
"0d600042 45 dirc",
"0d600043 45 dirnc",
"0d600044 45 dirz",
"0d600045 45 dirnz",
"0d600046 45 dirrnd",
"0d600047 45 dirnot",
"0d600048 27 outl",
"0d600049 27 outh",
"0d60004a 27 outc",
"0d60004b 27 outnc",
"0d60004c 27 outz",
"0d60004d 27 outnz",
"0d60004e 27 outrnd",
"0d60004f 27 outnot",
"0d600050 27 fltl",
"0d600051 27 flth",
"0d600052 27 fltc",
"0d600053 27 fltnc",
"0d600054 27 fltz",
"0d600055 27 fltnz",
"0d600056 27 fltrnd",
"0d600057 27 fltnot",
"0d600058 27 drvl",
"0d600059 27 drvh",
"0d60005a 27 drvc",
"0d60005b 27 drvnc",
"0d60005c 27 drvz",
"0d60005d 27 drvnz",
"0d60005e 27 drvrnd",
"0d60005f 27 drvnot",
"0e800000 34 loc",
"0f000000 26 augs",
"0f800000 26 augd",
"00000000  0 nop",
"0b3bffff  0 reti0",
"0b3bfff5  0 reti1",
"0b3bfff3  0 reti2",
"0b3bfff1  0 reti3",
"0b3bfdff  0 resi0",
"0b3be9f5  0 resi1",
"0b3be5f3  0 resi2",
"0b3be1f1  0 resi3",
"0c640161 27 pusha",
"0c6401e1 27 pushb",
"0b04015f  1 popa",
"0b0401df  1 popb",
"0d600060  1 splitb",
"0d600061  1 mergeb",
"0d600062  1 splitw",
"0d600063  1 mergew",
"0d600064  1 seussf",
"0d600065  1 seussr",
"0d600066  1 rgbsqz",
"0d600067  1 rgbexp",
"0d600068  1 xoro32",
"0d600069  1 rev",
"0d60006a 46 rczr",
"0d60006b 46 rczl",
"0d60006c  1 wrc",
"0d60006d  1 wrnc",
"0d60006e  1 wrz",
"0d60006f  1 wrnz",
"0d64006f 47 modcz",
"0d64006f 49 modc",
"0d64006f 50 modz",
"0cac0000  0 xstop",
"0d640037  0 lutsoff",
"0d640237  0 lutson",
"00000000 16 _ret_",
"10000000 16 if_nz_and_nc",
"10000000 16 if_nc_and_nz",
"10000000 16 if_a",
"10000000 16 if_gt",
"20000000 16 if_z_and_nc",
"20000000 16 if_nc_and_z",
"30000000 16 if_nc",
"30000000 16 if_ae",
"30000000 16 if_ge",
"40000000 16 if_nz_and_c",
"40000000 16 if_c_and_nz",
"50000000 16 if_nz",
"50000000 16 if_ne",
"60000000 16 if_z_ne_c",
"60000000 16 if_c_ne_z",
"70000000 16 if_nz_or_nc",
"70000000 16 if_nc_or_nz",
"80000000 16 if_z_and_c",
"80000000 16 if_c_and_z",
"90000000 16 if_z_eq_c",
"90000000 16 if_c_eq_z",
"a0000000 16 if_z",
"a0000000 16 if_e",
"b0000000 16 if_z_or_nc",
"b0000000 16 if_nc_or_z",
"c0000000 16 if_c",
"c0000000 16 if_b",
"c0000000 16 if_lt",
"d0000000 16 if_nz_or_c",
"d0000000 16 if_c_or_nz",
"e0000000 16 if_z_or_c",
"e0000000 16 if_c_or_z",
"e0000000 16 if_be",
"e0000000 16 if_le",
"f0000000 16 if_always",
"00080000 18 wz",
"00100000 18 wc",
"00180000 18 wcz",
"00080001 19 andz",
"00100001 19 andc",
"00080002 19 orz",
"00100002 19 orc",
"00080003 19 xorz",
"00100003 19 xorc",
"0 59 _clr",
"1 59 _nc_and_nz",
"1 59 _nz_and_nc",
"1 59 _gt",
"2 59 _nc_and_z",
"2 59 _z_and_nc",
"3 59 _nc",
"3 59 _ge",
"4 59 _c_and_nz",
"4 59 _nz_and_c",
"5 59 _nz",
"5 59 _ne",
"6 59 _c_ne_z",
"6 59 _z_ne_c",
"7 59 _nc_or_nz",
"7 59 _nz_or_nc",
"8 59 _c_and_z",
"8 59 _z_and_c",
"9 59 _c_eq_z",
"9 59 _z_eq_c",
"a 59 _z",
"a 59 _e",
"b 59 _nc_or_z",
"b 59 _z_or_nc",
"c 59 _c",
"c 59 _lt",
"d 59 _c_or_nz",
"d 59 _nz_or_c",
"e 59 _c_or_z",
"e 59 _z_or_c",
"e 59 _le",
"f 59 _set",
"00040000 17 #",
"00040000 17 ##",
"00040000  0 ++",
"00040000  0 --",
"00000000 17 ,",
"00000000 17 @",
"00000000 17 \\",
"ffffffff 17 true",
"00000000 17 false",
"2a 17 xtal1",
"32 17 xtal2",
"3a 17 xtal3",
"41 17 pll1x",
"42 17 pll2x",
"43 17 pll4x",
"44 17 pll8x",
"45 17 pll16x",
"1f0 17 ijmp3",
"1f1 17 iret3",
"1f2 17 ijmp2",
"1f3 17 iret2",
"1f4 17 ijmp1",
"1f5 17 iret1",
"1f6 17 pa",
"1f7 17 pb",
"1f8 17 ptra",
"1f9 17 ptrb",
"1fa 17 dira",
"1fb 17 dirb",
"1fc 17 outa",
"1fd 17 outb",
"1fe 17 ina",
"1ff 17 inb",
"0  6 org",
"0  7 res",
"0  8 orgf",
"0  5 long",
"0  4 byte",
"0 15 word",
"0 21 fit",
"0 13 file",
"0 14 orgh",
"0 52 alignl",
"0 53 alignw",
"0 55 .global",
"0 56 .section",
"0 57 .text",
"0 58 .data",
"0 61 .set",
"0 62 .local",
"0 63 .comm",
"0 64 .equ",
"0 65 .weak",
"0 67 .balign",
0 };
