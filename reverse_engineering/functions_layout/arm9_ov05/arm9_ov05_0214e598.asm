0214e598  stmdb sp!,{r4,lr}
0214e59c  ldr r2,[0x214e5ec]
0214e5a0  ldr r3,[r2,#0x0]
0214e5a4  add r1,r3,#0x1000
0214e5a8  ldr r1,[r1,#0x8e4]
0214e5ac  cmp r1,#0x2
0214e5b0  ldmiane sp!,{r4,pc}
0214e5b4  ldr r3,[r3,#0x60]
0214e5b8  mov r12,r0, lsr #0x5
0214e5bc  ldr r1,[r3,r12,lsl #0x2]
0214e5c0  and lr,r0,#0x1f
0214e5c4  mov r4,#0x1
0214e5c8  orr r0,r1,r4, lsl lr
0214e5cc  str r0,[r3,r12,lsl #0x2]
0214e5d0  ldr r0,[r2,#0x0]
0214e5d4  ldr r0,[r0,#0x60]
0214e5d8  add r1,r0,#0x74
0214e5dc  ldr r0,[r1,r12,lsl #0x2]
0214e5e0  orr r0,r0,r4, lsl lr
0214e5e4  str r0,[r1,r12,lsl #0x2]
0214e5e8  ldmia sp!,{r4,pc}
