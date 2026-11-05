0200d534  stmdb sp!,{r4,r5,r6,lr}
0200d538  ldr lr,[0x200d874]
0200d53c  eor r4,r1,r3
0200d540  ands r12,lr,r1, lsr #0x13
0200d544  cmpne r12,lr
0200d548  beq 0x0200d794
0200d54c  bic r1,r1,lr, lsl #0x14
0200d550  orr r1,r1,#0x100000
0200d554  add r12,r12,r4, lsr #0x1f
0200d558  ands r4,lr,r3, lsr #0x13
0200d55c  cmpne r4,lr
0200d560  beq 0x0200d7cc
0200d564  bic r3,r3,lr, lsl #0x14
0200d568  orr r3,r3,#0x100000
0200d56c  sub r12,r12,r4
0200d570  cmp r1,r3
0200d574  cmpeq r0,r2
0200d578  bcs 0x0200d588
0200d57c  adds r0,r0,r0
0200d580  adc r1,r1,r1
0200d584  sub r12,r12,#0x2
0200d588  adr r4,0x200d56c
0200d58c  ldrb lr,[r4,r3,lsr #0xc]
0200d590  rsbs r2,r2,#0x0
0200d594  rsc r3,r3,#0x0
0200d598  mov r4,#0x20000000
0200d59c  mla r5,lr,r3,r4
0200d5a0  mov r6,r3, lsl #0xa
0200d5a4  mov r5,r5, lsr #0x7
0200d5a8  mul lr,r5,lr
0200d5ac  orr r6,r6,r2, lsr #0x16
0200d5b0  mov lr,lr, lsr #0xd
0200d5b4  mul r5,lr,r6
0200d5b8  mov r6,r1, lsl #0xa
0200d5bc  orr r6,r6,r0, lsr #0x16
0200d5c0  mov r5,r5, lsr #0x10
0200d5c4  mul r5,lr,r5
0200d5c8  mov lr,lr, lsl #0xe
0200d5cc  add lr,lr,r5, lsr #0x10
0200d5d0  umull r5,r6,lr,r6
0200d5d4  umull r4,r5,r6,r2
0200d5d8  mla r5,r3,r6,r5
0200d5dc  mov r4,r4, lsr #0x1a
0200d5e0  orr r4,r4,r5, lsl #0x6
0200d5e4  add r4,r4,r0, lsl #0x2
0200d5e8  umull lr,r5,r4,lr
0200d5ec  mov r4,#0x0
0200d5f0  adds r5,r5,r6, lsl #0x18
0200d5f4  adc r4,r4,r6, lsr #0x8
0200d5f8  cmp r12,#0x800
0200d5fc  bge 0x0200d76c
0200d600  add r12,r12,#0x7f0
0200d604  adds r12,r12,#0xc
0200d608  bmi 0x0200d784
0200d60c  orr r1,r4,r12, lsl #0x1f
0200d610  bic r12,r12,#0x1
0200d614  add r1,r1,r12, lsl #0x13
0200d618  tst lr,#0x80000000
0200d61c  bne 0x0200d65c
0200d620  rsbs r2,r2,#0x0
0200d624  mov r4,r4, lsl #0x1
0200d628  add r4,r4,r5, lsr #0x1f
0200d62c  mul lr,r2,r4
0200d630  mov r6,#0x0
0200d634  mov r4,r5, lsl #0x1
0200d638  orr r4,r4,#0x1
0200d63c  umlal r6,lr,r4,r2
0200d640  rsc r3,r3,#0x0
0200d644  mla lr,r4,r3,lr
0200d648  cmp lr,r0, lsl #0x15
0200d64c  bmi 0x0200d65c
0200d650  mov r0,r5
0200d654  ldmia sp!,{r4,r5,r6,lr}
0200d658  bx lr
0200d65c  adds r0,r5,#0x1
0200d660  adc r1,r1,#0x0
0200d664  ldmia sp!,{r4,r5,r6,lr}
0200d668  bx lr
0200d76c  movs r1,r12, lsl #0x1f
0200d770  orr r1,r1,#0x7f000000
0200d774  orr r1,r1,#0xf00000
0200d778  mov r0,#0x0
0200d77c  ldmia sp!,{r4,r5,r6,lr}
0200d780  bx lr
0200d784  mov r1,r12, lsl #0x1f
0200d788  mov r0,#0x0
0200d78c  ldmia sp!,{r4,r5,r6,lr}
0200d790  bx lr
0200d794  cmp r12,#0x0
0200d798  beq 0x0200d800
0200d79c  orrs r5,r0,r1, lsl #0xc
0200d7a0  bne 0x0200d82c
0200d7a4  bic r5,r3,#0x80000000
0200d7a8  cmp r5,lr, lsl #0x13
0200d7ac  bcs 0x0200d7c0
0200d7b0  and r5,r3,#0x80000000
0200d7b4  eor r1,r5,r1
0200d7b8  ldmia sp!,{r4,r5,r6,lr}
0200d7bc  bx lr
0200d7c0  orrs r5,r2,r3, lsl #0xc
0200d7c4  bne 0x0200d84c
0200d7c8  b 0x0200d864
0200d7cc  cmp r4,#0x0
0200d7d0  beq 0x0200d7ec
0200d7d4  orrs r5,r2,r3, lsl #0xc
0200d7d8  bne 0x0200d84c
0200d7dc  mov r1,r12, lsl #0x1f
0200d7e0  mov r0,#0x0
0200d7e4  ldmia sp!,{r4,r5,r6,lr}
0200d7e8  bx lr
0200d7ec  mov r1,r12, lsl #0x1f
0200d7f0  orr r1,r1,lr, lsl #0x13
0200d7f4  mov r0,#0x0
0200d7f8  ldmia sp!,{r4,r5,r6,lr}
0200d7fc  bx lr
0200d800  tst lr,r3, lsr #0x13
0200d804  beq 0x0200d864
0200d808  bic r5,r3,#0x80000000
0200d80c  cmp r5,lr, lsl #0x13
0200d810  cmpeq r2,#0x0
0200d814  bhi 0x0200d84c
0200d818  eor r1,r1,r3
0200d81c  and r1,r1,#0x80000000
0200d820  mov r0,#0x0
0200d824  ldmia sp!,{r4,r5,r6,lr}
0200d828  bx lr
0200d82c  tst r1,#0x80000
0200d830  beq 0x0200d864
0200d834  bic r5,r3,#0x80000000
0200d838  cmp r5,lr, lsl #0x13
0200d83c  cmpeq r2,#0x0
0200d840  bhi 0x0200d84c
0200d844  ldmia sp!,{r4,r5,r6,lr}
0200d848  bx lr
0200d84c  tst r3,#0x80000
0200d850  beq 0x0200d864
0200d854  mov r1,r3
0200d858  mov r0,r2
0200d85c  ldmia sp!,{r4,r5,r6,lr}
0200d860  bx lr
0200d864  orr r1,r1,#0x7f000000
0200d868  orr r1,r1,#0xf80000
0200d86c  ldmia sp!,{r4,r5,r6,lr}
0200d870  bx lr
