0200d9cc  stmdb sp!,{r4,lr}
0200d9d0  ldrb r2,[r0,#0x0]
0200d9d4  tst r2,#0x1
0200d9d8  bne 0x0200d9ec
0200d9dc  mov r2,r2, lsr #0x1
0200d9e0  str r2,[r1,#0x0]
0200d9e4  add r0,r0,#0x1
0200d9e8  ldmia sp!,{r4,pc}
0200d9ec  tst r2,#0x2
0200d9f0  ldrb r4,[r0,#0x1]
0200d9f4  bne 0x0200da0c
0200d9f8  mov r2,r2, lsr #0x2
0200d9fc  orr r2,r4,r2, lsl #0x8
0200da00  str r2,[r1,#0x0]
0200da04  add r0,r0,#0x2
0200da08  ldmia sp!,{r4,pc}
0200da0c  tst r2,#0x4
0200da10  ldrb lr,[r0,#0x2]
0200da14  bne 0x0200da34
0200da18  mov r3,r2, lsr #0x3
0200da1c  mov r2,r4, lsl #0x8
0200da20  orr r2,r2,r3, lsl #0x10
0200da24  orr r2,lr,r2
0200da28  str r2,[r1,#0x0]
0200da2c  add r0,r0,#0x3
0200da30  ldmia sp!,{r4,pc}
0200da34  ldrb r12,[r0,#0x3]
0200da38  mov r3,r2, lsr #0x3
0200da3c  mov r2,r4, lsl #0x10
0200da40  orr r2,r2,r3, lsl #0x18
0200da44  orr r2,r2,lr, lsl #0x8
0200da48  orr r2,r12,r2
0200da4c  str r2,[r1,#0x0]
0200da50  add r0,r0,#0x4
0200da54  ldmia sp!,{r4,pc}
