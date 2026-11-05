0200b3a0  stmdb sp!,{r4,lr}
0200b3a4  eors r12,r1,r3
0200b3a8  eormi r3,r3,#0x80000000
0200b3ac  bmi 0x0200bc7c
0200b3b0  subs r12,r0,r2
0200b3b4  sbcs lr,r1,r3
0200b3b8  bcs 0x0200b3cc
0200b3bc  adds r2,r2,r12
0200b3c0  adc r3,r3,lr
0200b3c4  subs r0,r0,r12
0200b3c8  sbc r1,r1,lr
0200b3cc  mov lr,#0x80000000
0200b3d0  mov r12,r1, lsr #0x14
0200b3d4  orr r1,lr,r1, lsl #0xb
0200b3d8  orr r1,r1,r0, lsr #0x15
0200b3dc  mov r0,r0, lsl #0xb
0200b3e0  movs r4,r12, lsl #0x15
0200b3e4  cmnne r4,#0x200000
0200b3e8  beq 0x0200b4c8
0200b3ec  mov r4,r3, lsr #0x14
0200b3f0  orr r3,lr,r3, lsl #0xb
0200b3f4  orr r3,r3,r2, lsr #0x15
0200b3f8  mov r2,r2, lsl #0xb
0200b3fc  movs lr,r4, lsl #0x15
0200b400  beq 0x0200b618
0200b404  subs r4,r12,r4
0200b408  beq 0x0200b45c
0200b40c  cmp r4,#0x20
0200b410  ble 0x0200b440
0200b414  cmp r4,#0x38
0200b418  movge r4,#0x3f
0200b41c  sub r4,r4,#0x20
0200b420  rsb lr,r4,#0x20
0200b424  orrs lr,r2,r3, lsl lr
0200b428  mov r2,r3, lsr r4
0200b42c  orrne r2,r2,#0x1
0200b430  adds r0,r0,r2
0200b434  adcs r1,r1,#0x0
0200b438  bcc 0x0200b484
0200b43c  b 0x0200b468
0200b440  rsb lr,r4,#0x20
0200b444  movs lr,r2, lsl lr
0200b448  rsb lr,r4,#0x20
0200b44c  mov r2,r2, lsr r4
0200b450  orr r2,r2,r3, lsl lr
0200b454  mov r3,r3, lsr r4
0200b458  orrne r2,r2,#0x1
0200b45c  adds r0,r0,r2
0200b460  adcs r1,r1,r3
0200b464  bcc 0x0200b484
0200b468  add r12,r12,#0x1
0200b46c  and r4,r0,#0x1
0200b470  movs r1,r1, rrx
0200b474  orr r0,r4,r0, rrx
0200b478  mov lr,r12, lsl #0x15
0200b47c  cmn lr,#0x200000
0200b480  beq 0x0200b6a0
0200b484  movs r2,r0, lsl #0x15
0200b488  mov r0,r0, lsr #0xb
0200b48c  orr r0,r0,r1, lsl #0x15
0200b490  add r1,r1,r1
0200b494  mov r1,r1, lsr #0xc
0200b498  orr r1,r1,r12, lsl #0x14
0200b49c  tst r2,#0x80000000
0200b4a0  ldmiaeq sp!,{r4,lr}
0200b4a4  bxeq lr
0200b4a8  movs r2,r2, lsl #0x1
0200b4ac  andeqs r2,r0,#0x1
0200b4b0  ldmiaeq sp!,{r4,lr}
0200b4b4  bxeq lr
0200b4b8  adds r0,r0,#0x1
0200b4bc  adc r1,r1,#0x0
0200b4c0  ldmia sp!,{r4,lr}
0200b4c4  bx lr
0200b4c8  cmp r12,#0x800
0200b4cc  movge lr,#0x80000000
0200b4d0  movlt lr,#0x0
0200b4d4  bics r12,r12,#0x800
0200b4d8  beq 0x0200b5f8
0200b4dc  orrs r4,r0,r1, lsl #0x1
0200b4e0  bne 0x0200b67c
0200b4e4  mov r4,r3, lsr #0x14
0200b4e8  mov r3,r3, lsl #0xb
0200b4ec  orr r3,r3,r2, lsr #0x15
0200b4f0  mov r2,r2, lsl #0xb
0200b4f4  movs r4,r4, lsl #0x15
0200b4f8  beq 0x0200b668
0200b4fc  cmn r4,#0x200000
0200b500  bne 0x0200b668
0200b504  orrs r4,r2,r3, lsl #0x1
0200b508  beq 0x0200b668
0200b50c  b 0x0200b67c
0200b5f8  mov r12,r3, lsr #0x14
0200b5fc  bics r12,r12,#0x800
0200b600  moveq r3,#0x0
0200b604  moveq r2,#0x0
0200b608  mov r1,r3
0200b60c  mov r0,r2
0200b610  ldmia sp!,{r4,lr}
0200b614  bx lr
0200b618  mov r0,r0, lsr #0xb
0200b61c  orr r0,r0,r1, lsl #0x15
0200b620  add r1,r1,r1
0200b624  orr r1,lr,r1, lsr #0xc
0200b628  orr r1,r1,r12, lsl #0x14
0200b62c  ldmia sp!,{r4,lr}
0200b630  bx lr
0200b668  ldr r1,[0x200b6c0]
0200b66c  orr r1,lr,r1
0200b670  mov r0,#0x0
0200b674  ldmia sp!,{r4,lr}
0200b678  bx lr
0200b67c  mov r1,r3
0200b680  mvn r0,#0x0
0200b684  bic r1,r0,#0x80000000
0200b688  ldmia sp!,{r4,lr}
0200b68c  bx lr
0200b6a0  cmp r12,#0x800
0200b6a4  movge lr,#0x80000000
0200b6a8  movlt lr,#0x0
0200b6ac  ldr r1,[0x200b6c0]
0200b6b0  orr r1,lr,r1
0200b6b4  mov r0,#0x0
0200b6b8  ldmia sp!,{r4,lr}
0200b6bc  bx lr
