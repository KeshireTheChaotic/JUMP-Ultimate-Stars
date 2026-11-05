0215857c  stmdb sp!,{r4,r5,r6,lr}
02158580  mov r5,#0x0
02158584  mov r6,r0
02158588  mov r4,r5
0215858c  add r0,r6,r5, lsl #0x2
02158590  ldr r0,[r0,#0x80]
02158594  cmp r0,#0x0
02158598  beq 0x021585a8
0215859c  bl 0x0216ac10
021585a0  add r0,r6,r5, lsl #0x2
021585a4  str r4,[r0,#0x80]
021585a8  add r5,r5,#0x1
021585ac  cmp r5,#0x2
021585b0  blt 0x0215858c
021585b4  ldmia sp!,{r4,r5,r6,pc}
