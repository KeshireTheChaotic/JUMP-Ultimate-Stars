01ffb270  stmdb sp!,{lr}
01ffb274  ldr r4,[r0,#-0x8]
01ffb278  ldr r9,[r0,#0x0]
01ffb27c  add r4,r4,r9
01ffb280  ldrb r9,[r4,#-0xf1]
01ffb284  ldrb r10,[r4,#0xff]
01ffb288  add r9,r9,r10
01ffb28c  add r9,r9,#0x1
01ffb290  mov r5,r9, lsr #0x1
01ffb294  bl 0x01ff9450
01ffb298  add r6,r5,r6, lsl #0x1
01ffb29c  strb r6,[r4,#0x10f]
01ffb2a0  ldrb r7,[r4,#0xff]
01ffb2a4  add r7,r7,r6
01ffb2a8  mov r7,r7, asr #0x1
01ffb2ac  strb r7,[r4,#0x107]
01ffb2b0  ldrb r8,[r4,#-0xf1]
01ffb2b4  add r8,r8,r6
01ffb2b8  mov r8,r8, asr #0x1
01ffb2bc  strb r8,[r4,#0xf]
01ffb2c0  ldrb r6,[r4,#-0x1]
01ffb2c4  add r8,r8,r6
01ffb2c8  mov r6,r8, asr #0x1
01ffb2cc  strb r6,[r4,#0x7]
01ffb2d0  ldrb r7,[r4,#-0x1]
01ffb2d4  ldrb r8,[r4,#0x7]
01ffb2d8  add r8,r8,r7
01ffb2dc  mov r8,r8, asr #0x1
01ffb2e0  strb r8,[r4,#0x3]
01ffb2e4  ldrb r7,[r4,#0xff]
01ffb2e8  ldrb r8,[r4,#0x107]
01ffb2ec  add r8,r8,r7
01ffb2f0  mov r8,r8, asr #0x1
01ffb2f4  strb r8,[r4,#0x103]
01ffb2f8  ldrb r7,[r4,#-0x1]
01ffb2fc  ldrb r8,[r4,#0x3]
01ffb300  add r8,r8,r7
01ffb304  mov r8,r8, asr #0x1
01ffb308  strb r8,[r4,#0x1]
01ffb30c  ldrb r7,[r4,#0xff]
01ffb310  ldrb r8,[r4,#0x103]
01ffb314  add r8,r8,r7
01ffb318  mov r8,r8, asr #0x1
01ffb31c  strb r8,[r4,#0x101]
01ffb320  ldrb r7,[r4,#-0x1]
01ffb324  ldrb r8,[r4,#0x1]
01ffb328  add r8,r8,r7
01ffb32c  mov r8,r8, asr #0x1
01ffb330  strb r8,[r4,#0x0]
01ffb334  ldrb r7,[r4,#0xff]
01ffb338  ldrb r8,[r4,#0x101]
01ffb33c  add r8,r8,r7
01ffb340  mov r8,r8, asr #0x1
01ffb344  strb r8,[r4,#0x100]
01ffb348  ldrb r7,[r4,#0x1]
01ffb34c  ldrb r8,[r4,#0x3]
01ffb350  add r8,r8,r7
01ffb354  mov r8,r8, asr #0x1
01ffb358  strb r8,[r4,#0x2]
01ffb35c  ldrb r7,[r4,#0x101]
01ffb360  ldrb r8,[r4,#0x103]
01ffb364  add r8,r8,r7
01ffb368  mov r8,r8, asr #0x1
01ffb36c  strb r8,[r4,#0x102]
01ffb370  ldrb r7,[r4,#0x3]
01ffb374  ldrb r8,[r4,#0x7]
01ffb378  add r8,r8,r7
01ffb37c  mov r8,r8, asr #0x1
01ffb380  strb r8,[r4,#0x5]
01ffb384  ldrb r7,[r4,#0x103]
01ffb388  ldrb r8,[r4,#0x107]
01ffb38c  add r8,r8,r7
01ffb390  mov r8,r8, asr #0x1
01ffb394  strb r8,[r4,#0x105]
01ffb398  ldrb r7,[r4,#0x3]
01ffb39c  ldrb r8,[r4,#0x5]
01ffb3a0  add r8,r8,r7
01ffb3a4  mov r8,r8, asr #0x1
01ffb3a8  strb r8,[r4,#0x4]
01ffb3ac  ldrb r7,[r4,#0x103]
01ffb3b0  ldrb r8,[r4,#0x105]
01ffb3b4  add r8,r8,r7
01ffb3b8  mov r8,r8, asr #0x1
01ffb3bc  strb r8,[r4,#0x104]
01ffb3c0  ldrb r7,[r4,#0x5]
01ffb3c4  ldrb r8,[r4,#0x7]
01ffb3c8  add r8,r8,r7
01ffb3cc  mov r8,r8, asr #0x1
01ffb3d0  strb r8,[r4,#0x6]
01ffb3d4  ldrb r7,[r4,#0x105]
01ffb3d8  ldrb r8,[r4,#0x107]
01ffb3dc  add r8,r8,r7
01ffb3e0  mov r8,r8, asr #0x1
01ffb3e4  strb r8,[r4,#0x106]
01ffb3e8  ldrb r7,[r4,#0x7]
01ffb3ec  ldrb r8,[r4,#0xf]
01ffb3f0  add r8,r8,r7
01ffb3f4  mov r8,r8, asr #0x1
01ffb3f8  strb r8,[r4,#0xb]
01ffb3fc  ldrb r7,[r4,#0x107]
01ffb400  ldrb r8,[r4,#0x10f]
01ffb404  add r8,r8,r7
01ffb408  mov r8,r8, asr #0x1
01ffb40c  strb r8,[r4,#0x10b]
01ffb410  ldrb r7,[r4,#0x7]
01ffb414  ldrb r8,[r4,#0xb]
01ffb418  add r8,r8,r7
01ffb41c  mov r8,r8, asr #0x1
01ffb420  strb r8,[r4,#0x9]
01ffb424  ldrb r7,[r4,#0x107]
01ffb428  ldrb r8,[r4,#0x10b]
01ffb42c  add r8,r8,r7
01ffb430  mov r8,r8, asr #0x1
01ffb434  strb r8,[r4,#0x109]
01ffb438  ldrb r7,[r4,#0x7]
01ffb43c  ldrb r8,[r4,#0x9]
01ffb440  add r8,r8,r7
01ffb444  mov r8,r8, asr #0x1
01ffb448  strb r8,[r4,#0x8]
01ffb44c  ldrb r7,[r4,#0x107]
01ffb450  ldrb r8,[r4,#0x109]
01ffb454  add r8,r8,r7
01ffb458  mov r8,r8, asr #0x1
01ffb45c  strb r8,[r4,#0x108]
01ffb460  ldrb r7,[r4,#0x9]
01ffb464  ldrb r8,[r4,#0xb]
01ffb468  add r8,r8,r7
01ffb46c  mov r8,r8, asr #0x1
01ffb470  strb r8,[r4,#0xa]
01ffb474  ldrb r7,[r4,#0x109]
01ffb478  ldrb r8,[r4,#0x10b]
01ffb47c  add r8,r8,r7
01ffb480  mov r8,r8, asr #0x1
01ffb484  strb r8,[r4,#0x10a]
01ffb488  ldrb r7,[r4,#0xb]
01ffb48c  ldrb r8,[r4,#0xf]
01ffb490  add r8,r8,r7
01ffb494  mov r8,r8, asr #0x1
01ffb498  strb r8,[r4,#0xd]
01ffb49c  ldrb r7,[r4,#0x10b]
01ffb4a0  ldrb r8,[r4,#0x10f]
01ffb4a4  add r8,r8,r7
01ffb4a8  mov r8,r8, asr #0x1
01ffb4ac  strb r8,[r4,#0x10d]
01ffb4b0  ldrb r7,[r4,#0xb]
01ffb4b4  ldrb r8,[r4,#0xd]
01ffb4b8  add r8,r8,r7
01ffb4bc  mov r8,r8, asr #0x1
01ffb4c0  strb r8,[r4,#0xc]
01ffb4c4  ldrb r7,[r4,#0x10b]
01ffb4c8  ldrb r8,[r4,#0x10d]
01ffb4cc  add r8,r8,r7
01ffb4d0  mov r8,r8, asr #0x1
01ffb4d4  strb r8,[r4,#0x10c]
01ffb4d8  ldrb r7,[r4,#0xd]
01ffb4dc  ldrb r8,[r4,#0xf]
01ffb4e0  add r8,r8,r7
01ffb4e4  mov r8,r8, asr #0x1
01ffb4e8  strb r8,[r4,#0xe]
01ffb4ec  ldrb r7,[r4,#0x10d]
01ffb4f0  ldrb r8,[r4,#0x10f]
01ffb4f4  add r8,r8,r7
01ffb4f8  mov r8,r8, asr #0x1
01ffb4fc  strb r8,[r4,#0x10e]
01ffb500  ldr r4,[r0,#-0x4]
01ffb504  ldr r9,[r0,#0x4]
01ffb508  add r4,r4,r9
01ffb50c  bl 0x01ffb1cc
01ffb510  add r4,r4,#0x1
01ffb514  bl 0x01ffb1cc
01ffb518  ldmia sp!,{pc}
