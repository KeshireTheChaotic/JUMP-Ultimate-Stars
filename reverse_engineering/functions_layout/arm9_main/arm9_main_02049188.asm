02049188  mov r12,lr
0204918c  stmdb sp!,{r0,r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
02049190  mov r0,sp
02049194  ldr r1,[0x20491a8]
02049198  ldr sp,[r1,#0x0]
0204919c  str r0,[r1,#0x0]
020491a0  ldmia sp!,{r0,r4,r5,r6,r7,r8,r9,r10,r11,r12,lr}
020491a4  mov pc,r12
