02157114  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02157118  mov r4,r0
0215711c  ldr r0,[r4,#0x1a0]
02157120  mov r7,r1
02157124  ldr r2,[r0,#0x174]
02157128  ldr r0,[r4,#0x1b8]
0215712c  ldr r1,[r2,#0xc]
02157130  ldr r5,[r2,#0x8]
02157134  bl 0x02161758
02157138  ldr r1,[r4,#0x1a0]
0215713c  ldr r0,[r4,#0x1a8]
02157140  ldr r1,[r1,#0x174]
02157144  ldr r1,[r1,#0x0]
02157148  str r1,[r0,#0x20]
0215714c  ldr r1,[r4,#0x1a0]
02157150  ldr r0,[r4,#0x1a8]
02157154  ldr r1,[r1,#0x0]
02157158  bl 0x020839c0
0215715c  ldr r1,[r4,#0x1a0]
02157160  ldr r0,[r4,#0x1a8]
02157164  ldr r1,[r1,#0x174]
02157168  ldr r0,[r0,#0x10]
0215716c  ldr r1,[r1,#0xc]
02157170  mov r2,#0x20
02157174  str r1,[r0,#0x6c]
02157178  ldr r1,[r4,#0x1a0]
0215717c  ldr r0,[r4,#0x1a8]
02157180  ldr r1,[r1,#0x174]
02157184  ldr r1,[r1,#0x4]
02157188  str r1,[r0,#0x1c]
0215718c  ldr r0,[r0,#0x8]
02157190  cmp r0,#0x0
02157194  ldrne r0,[r0,#0x4]
02157198  ldrne r0,[r0,#0x10]
0215719c  strne r1,[r0,#0xe0]
021571a0  ldrb r0,[r5,#0x2]
021571a4  mov r1,#0x0
021571a8  cmp r0,#0x1
021571ac  ldr r0,[r4,#0x1a8]
021571b0  ldr r0,[r0,#0x10]
021571b4  bne 0x021571c0
021571b8  bl 0x0207cf18
021571bc  b 0x021571c4
021571c0  bl 0x0207cf78
021571c4  ldr r0,[r4,#0x1a8]
021571c8  ldrb r2,[r5,#0x3]
021571cc  ldr r0,[r0,#0x10]
021571d0  ldrb r1,[r5,#0x5]
021571d4  ldrb r3,[r0,#0x175]
021571d8  ldrb r12,[r5,#0x4]
021571dc  and r2,r2,#0x3
021571e0  bic r3,r3,#0x3
021571e4  orr r6,r3,r2
021571e8  and r2,r6,#0xff
021571ec  bic r3,r2,#0xc
021571f0  mov r2,r12, lsl #0x1e
021571f4  orr r3,r3,r2, lsr #0x1c
021571f8  and r2,r3,#0xff
021571fc  bic r2,r2,#0x30
02157200  mov r1,r1, lsl #0x1e
02157204  orr r1,r2,r1, lsr #0x1a
02157208  strb r1,[r0,#0x175]
0215720c  ldrh r2,[r5,#0x1e]
02157210  ldrh r6,[r5,#0x20]
02157214  mov r1,#0x2
02157218  mov r0,r2, lsl #0x10
0215721c  strh r2,[r7,#0xa4]
02157220  strh r6,[r7,#0xa6]
02157224  ldr r3,[r4,#0x1a0]
02157228  mov r2,r0, asr #0x10
0215722c  ldr r0,[r3,#0x174]
02157230  ldr r0,[r0,#0xc]
02157234  bl 0x02157314
02157238  ldr r1,[r4,#0x1a0]
0215723c  mov r0,r6, lsl #0x10
02157240  ldr r1,[r1,#0x174]
02157244  mov r2,r0, asr #0x10
02157248  ldr r0,[r1,#0xc]
0215724c  mov r1,#0x3
02157250  bl 0x02157314
02157254  mov r1,r5
02157258  add r0,r4,#0x120
0215725c  bl 0x0215fac4
02157260  ldr r1,[r4,#0x1b4]
02157264  mov r0,r4
02157268  bl 0x02158a10
0215726c  ldr r0,[r4,#0x128]
02157270  mov r6,#0x0
02157274  tst r0,#0x2
02157278  movne r0,#0x2
0215727c  strbne r0,[r4,#0xd8]
02157280  ldr r0,[r4,#0x12c]
02157284  mov r5,r6
02157288  tst r0,#0x20
0215728c  movne r1,#0x1
02157290  ldr r0,[r4,#0x1b4]
02157294  moveq r1,#0x0
02157298  strb r1,[r0,#0x5cf]
0215729c  ldr r0,[r4,#0x1a8]
021572a0  mov r1,r6
021572a4  mov r2,r5
021572a8  bl 0x02083be0
021572ac  add r6,r6,#0x1
021572b0  cmp r6,#0x6
021572b4  blt 0x0215729c
021572b8  ldr r6,[0x2157310]
021572bc  mov r7,#0x0
021572c0  mov r5,#0x1
021572c4  add r0,r7,r7, lsl #0x1
021572c8  ldrsb r1,[r6,r0]
021572cc  add r2,r6,r0
021572d0  mov r0,r1, lsr #0x5
021572d4  add r0,r4,r0, lsl #0x2
021572d8  ldr r0,[r0,#0x128]
021572dc  and r1,r1,#0x1f
021572e0  tst r0,r5, lsl r1
021572e4  beq 0x021572f8
021572e8  ldrsb r1,[r2,#0x1]
021572ec  ldrsb r2,[r2,#0x2]
021572f0  ldr r0,[r4,#0x1a8]
021572f4  bl 0x02083be0
021572f8  add r7,r7,#0x1
021572fc  cmp r7,#0xc
02157300  blt 0x021572c4
02157304  mov r0,#0x1
02157308  strb r0,[r4,#0xf9]
0215730c  ldmia sp!,{r3,r4,r5,r6,r7,pc}
