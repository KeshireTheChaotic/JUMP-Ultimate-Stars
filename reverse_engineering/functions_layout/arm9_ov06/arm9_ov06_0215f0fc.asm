0215f0fc  stmdb sp!,{r4,lr}
0215f100  mov r1,r1, asr #0x1
0215f104  ldr r4,[r0,#0x174]
0215f108  cmp r2,r1
0215f10c  mov r0,#0x64
0215f110  bgt 0x0215f11c
0215f114  mul r0,r2,r0
0215f118  bl 0x0200d12c
0215f11c  ldr r1,[r4,#0x4]
0215f120  str r0,[r1,#0x50]
0215f124  ldr r1,[r4,#0x0]
0215f128  ldr r0,[r4,#0x4]
0215f12c  ldr r1,[r1,#0x8]
0215f130  bl 0x0206d484
0215f134  ldmia sp!,{r4,pc}
