0215f6e4  stmdb sp!,{r4,lr}
0215f6e8  mov r4,r0
0215f6ec  cmp r2,#0x0
0215f6f0  beq 0x0215f718
0215f6f4  mov r0,r1
0215f6f8  mov r1,#0x0
0215f6fc  mov r2,r1
0215f700  mov r3,r1
0215f704  bl 0x0206c7fc
0215f708  ldr r1,[r4,#0x1a0]
0215f70c  ldr r1,[r1,#0x0]
0215f710  bl 0x021544c8
0215f714  ldmia sp!,{r4,pc}
0215f718  ldr r2,[r4,#0x1a8]
0215f71c  mov r0,r1
0215f720  ldr r1,[r2,#0x10]
0215f724  mov r3,#0x0
0215f728  ldr r2,[r1,#0x5c]
0215f72c  ldr r1,[r2,#0xc]
0215f730  ldr r2,[r2,#0x10]
0215f734  mov r1,r1, asr #0x8
0215f738  mov r2,r2, asr #0x8
0215f73c  bl 0x0206c7fc
0215f740  ldmia sp!,{r4,pc}
