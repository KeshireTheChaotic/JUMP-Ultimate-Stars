020860f8  stmdb sp!,{r3,r4,r5,lr}
020860fc  ldr r4,[r0,#0x30]
02086100  ldrh r2,[r4,#0x14]
02086104  sub r1,r2,#0x1
02086108  strh r1,[r4,#0x14]
0208610c  cmp r2,#0x0
02086110  ldmiane sp!,{r3,r4,r5,pc}
02086114  ldrb r12,[r4,#0x16]
02086118  ldr lr,[r4,#0x4]
0208611c  add r1,r12,#0x1
02086120  strb r1,[r4,#0x16]
02086124  add r2,lr,r12, lsl #0x4
02086128  ldr r1,[r0,#0x10]
0208612c  ldr r3,[r2,#0x4]
02086130  ldr r2,[r1,#0x5c]
02086134  ldr r1,[lr,r12,lsl #0x4]
02086138  str r1,[r2,#0xc]
0208613c  str r3,[r2,#0x10]
02086140  ldrb r2,[r4,#0x16]
02086144  ldrb r1,[r4,#0x17]
02086148  cmp r2,r1
0208614c  moveq r1,#0x0
02086150  strbeq r1,[r4,#0x16]
02086154  ldrb r1,[r4,#0x16]
02086158  ldr r2,[r4,#0x4]
0208615c  add r5,r2,r1, lsl #0x4
02086160  ldrsh r1,[r5,#0x8]
02086164  ldrsh r2,[r5,#0xa]
02086168  bl 0x02085a04
0208616c  ldrh r0,[r5,#0xc]
02086170  strh r0,[r4,#0x14]
02086174  ldmia sp!,{r3,r4,r5,pc}
