0200b8cc  stmdb sp!,{r4,r5,r6,r7,lr}
0200b8d0  eor lr,r1,r3
0200b8d4  and lr,lr,#0x80000000
0200b8d8  mov r12,r1, lsr #0x14
0200b8dc  mov r1,r1, lsl #0xb
0200b8e0  orr r1,r1,r0, lsr #0x15
0200b8e4  mov r0,r0, lsl #0xb
0200b8e8  movs r6,r12, lsl #0x15
0200b8ec  cmnne r6,#0x200000
0200b8f0  beq 0x0200b9d4
0200b8f4  orr r1,r1,#0x80000000
0200b8f8  bic r12,r12,#0x800
0200b8fc  mov r4,r3, lsr #0x14
0200b900  mov r3,r3, lsl #0xb
0200b904  orr r3,r3,r2, lsr #0x15
0200b908  mov r2,r2, lsl #0xb
0200b90c  movs r5,r4, lsl #0x15
0200b910  cmnne r5,#0x200000
0200b914  beq 0x0200ba1c
0200b918  orr r3,r3,#0x80000000
0200b91c  bic r4,r4,#0x800
0200b920  add r12,r4,r12
0200b924  umull r5,r4,r0,r2
0200b928  umull r7,r6,r0,r3
0200b92c  adds r4,r7,r4
0200b930  adc r6,r6,#0x0
0200b934  umull r7,r0,r1,r2
0200b938  adds r4,r7,r4
0200b93c  adcs r0,r0,r6
0200b940  umull r7,r2,r1,r3
0200b944  adc r1,r2,#0x0
0200b948  adds r0,r0,r7
0200b94c  adc r1,r1,#0x0
0200b950  orrs r4,r4,r5
0200b954  orrne r0,r0,#0x1
0200b958  cmp r1,#0x0
0200b95c  blt 0x0200b96c
0200b960  sub r12,r12,#0x1
0200b964  adds r0,r0,r0
0200b968  adc r1,r1,r1
0200b96c  add r12,r12,#0x2
0200b970  subs r12,r12,#0x400
0200b974  bmi 0x0200ba5c
0200b978  beq 0x0200ba5c
0200b97c  mov r6,r12, lsl #0x14
0200b980  cmn r6,#0x100000
0200b984  bmi 0x0200bad8
0200b988  movs r2,r0, lsl #0x15
0200b98c  mov r0,r0, lsr #0xb
0200b990  orr r0,r0,r1, lsl #0x15
0200b994  add r1,r1,r1
0200b998  orr r1,lr,r1, lsr #0xc
0200b99c  orr r1,r1,r12, lsl #0x14
0200b9a0  ldmiaeq sp!,{r4,r5,r6,r7,lr}
0200b9a4  bxeq lr
0200b9a8  tst r2,#0x80000000
0200b9ac  ldmiaeq sp!,{r4,r5,r6,r7,lr}
0200b9b0  bxeq lr
0200b9b4  movs r2,r2, lsl #0x1
0200b9b8  andeqs r2,r0,#0x1
0200b9bc  ldmiaeq sp!,{r4,r5,r6,r7,lr}
0200b9c0  bxeq lr
0200b9c4  adds r0,r0,#0x1
0200b9c8  adc r1,r1,#0x0
0200b9cc  ldmia sp!,{r4,r5,r6,r7,lr}
0200b9d0  bx lr
0200b9d4  bics r12,r12,#0x800
0200b9d8  beq 0x0200baec
0200b9dc  orrs r6,r0,r1, lsl #0x1
0200b9e0  bne 0x0200ba94
0200b9e4  mov r4,r3, lsr #0x14
0200b9e8  mov r3,r3, lsl #0xb
0200b9ec  orr r3,r3,r2, lsr #0x15
0200b9f0  mov r2,r2, lsl #0xb
0200b9f4  movs r5,r4, lsl #0x15
0200b9f8  beq 0x0200ba10
0200b9fc  cmn r5,#0x200000
0200ba00  bne 0x0200ba80
0200ba04  orrs r5,r2,r3, lsl #0x1
0200ba08  beq 0x0200ba80
0200ba0c  b 0x0200ba94
0200ba10  orrs r5,r3,r2
0200ba14  beq 0x0200baa8
0200ba18  b 0x0200ba80
0200ba1c  bics r4,r4,#0x800
0200ba20  beq 0x0200baec
0200ba24  orrs r6,r2,r3, lsl #0x1
0200ba28  bne 0x0200ba94
0200ba2c  b 0x0200ba80
0200ba5c  cmn r12,#0x34
0200ba60  beq 0x0200ba78
0200ba64  bmi 0x0200bac8
0200ba68  mov r1,lr
0200ba6c  mov r0,#0x0
0200ba70  ldmia sp!,{r4,r5,r6,r7,lr}
0200ba74  bx lr
0200ba78  orr r0,r0,r1, lsl #0x1
0200ba7c  b 0x0200bab8
0200ba80  ldr r1,[0x200bafc]
0200ba84  orr r1,lr,r1
0200ba88  mov r0,#0x0
0200ba8c  ldmia sp!,{r4,r5,r6,r7,lr}
0200ba90  bx lr
0200ba94  mov r1,r3
0200ba98  mvn r0,#0x0
0200ba9c  bic r1,r0,#0x80000000
0200baa0  ldmia sp!,{r4,r5,r6,r7,lr}
0200baa4  bx lr
0200baa8  mvn r0,#0x0
0200baac  bic r1,r0,#0x80000000
0200bab0  ldmia sp!,{r4,r5,r6,r7,lr}
0200bab4  bx lr
0200bab8  mov r1,lr
0200babc  mov r0,#0x0
0200bac0  ldmia sp!,{r4,r5,r6,r7,lr}
0200bac4  bx lr
0200bac8  mov r1,lr
0200bacc  mov r0,#0x0
0200bad0  ldmia sp!,{r4,r5,r6,r7,lr}
0200bad4  bx lr
0200bad8  ldr r1,[0x200bafc]
0200badc  orr r1,lr,r1
0200bae0  mov r0,#0x0
0200bae4  ldmia sp!,{r4,r5,r6,r7,lr}
0200bae8  bx lr
0200baec  mov r1,lr
0200baf0  mov r0,#0x0
0200baf4  ldmia sp!,{r4,r5,r6,r7,lr}
0200baf8  bx lr
