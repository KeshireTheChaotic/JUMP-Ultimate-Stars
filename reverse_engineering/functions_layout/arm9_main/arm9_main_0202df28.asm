0202df28  stmdb sp!,{r4,lr}
0202df2c  ldr r2,[0x202df6c]
0202df30  ldr r3,[r0,#0x0]
0202df34  ldr lr,[r2,#0x30]
0202df38  ldr r12,[0x202df70]
0202df3c  add lr,lr,#0x1
0202df40  and r4,lr,#0x7
0202df44  str r4,[r2,#0x30]
0202df48  mov r4,lr, lsl #0x1d
0202df4c  ldr r3,[r3,#0x20]
0202df50  add r2,r12,r4, lsr #0x1b
0202df54  blx r3
0202df58  ldr r0,[0x202df6c]
0202df5c  ldr r1,[0x202df70]
0202df60  ldr r0,[r0,#0x30]
0202df64  add r0,r1,r0, lsl #0x2
0202df68  ldmia sp!,{r4,pc}
