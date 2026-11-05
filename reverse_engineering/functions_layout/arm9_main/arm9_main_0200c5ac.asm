0200c5ac  stmdb sp!,{lr}
0200c5b0  mov r12,#0xff
0200c5b4  ands r3,r12,r0, lsr #0x17
0200c5b8  cmpne r3,#0xff
0200c5bc  beq 0x0200c780
0200c5c0  ands r12,r12,r1, lsr #0x17
0200c5c4  cmpne r12,#0xff
0200c5c8  beq 0x0200c7bc
0200c5cc  orr r1,r1,#0x800000
0200c5d0  orr r0,r0,#0x800000
0200c5d4  bic r2,r0,#0xff000000
0200c5d8  bic lr,r1,#0xff000000
0200c5dc  cmp r2,lr
0200c5e0  movcc r2,r2, lsl #0x1
0200c5e4  subcc r3,r3,#0x1
0200c5e8  teq r0,r1
0200c5ec  adr r0,0x200c560
0200c5f0  ldrb r1,[r0,lr,lsr #0xf]
0200c5f4  rsb lr,lr,#0x0
0200c5f8  mov r0,lr, asr #0x1
0200c5fc  mul r0,r1,r0
0200c600  add r0,r0,#0x80000000
0200c604  mov r0,r0, lsr #0x6
0200c608  mul r0,r1,r0
0200c60c  mov r0,r0, lsr #0xe
0200c610  mul r1,lr,r0
0200c614  sub r12,r3,r12
0200c618  mov r1,r1, lsr #0xc
0200c61c  mul r1,r0,r1
0200c620  mov r0,r0, lsl #0xe
0200c624  add r0,r0,r1, lsr #0xf
0200c628  umull r1,r0,r2,r0
0200c62c  mov r3,r0
0200c630  orrmi r0,r0,#0x80000000
0200c634  adds r12,r12,#0x7e
0200c638  bmi 0x0200c7fc
0200c63c  cmp r12,#0xfe
0200c640  bge 0x0200c838
0200c644  add r0,r0,r12, lsl #0x17
0200c648  mov r12,r1, lsr #0x1c
0200c64c  cmp r12,#0x7
0200c650  beq 0x0200c760
0200c654  add r0,r0,r1, lsr #0x1f
0200c658  ldmia sp!,{lr}
0200c65c  bx lr
0200c760  mov r1,r3, lsl #0x1
0200c764  add r1,r1,#0x1
0200c768  rsb lr,lr,#0x0
0200c76c  mul r1,lr,r1
0200c770  cmp r1,r2, lsl #0x18
0200c774  addmi r0,r0,#0x1
0200c778  ldmia sp!,{lr}
0200c77c  bx lr
0200c780  eor lr,r0,r1
0200c784  and lr,lr,#0x80000000
0200c788  cmp r3,#0x0
0200c78c  beq 0x0200c7d8
0200c790  movs r0,r0, lsl #0x9
0200c794  bne 0x0200c820
0200c798  mov r12,r1, lsr #0x17
0200c79c  mov r1,r1, lsl #0x9
0200c7a0  ands r12,r12,#0xff
0200c7a4  beq 0x0200c810
0200c7a8  cmp r12,#0xff
0200c7ac  blt 0x0200c810
0200c7b0  cmp r1,#0x0
0200c7b4  beq 0x0200c82c
0200c7b8  b 0x0200c808
0200c7bc  eor lr,r0,r1
0200c7c0  and lr,lr,#0x80000000
0200c7c4  cmp r12,#0x0
0200c7c8  beq 0x0200c810
0200c7cc  movs r1,r1, lsl #0x9
0200c7d0  bne 0x0200c808
0200c7d4  b 0x0200c850
0200c7d8  mov r12,r1, lsr #0x17
0200c7dc  mov r1,r1, lsl #0x9
0200c7e0  ands r12,r12,#0xff
0200c7e4  beq 0x0200c82c
0200c7e8  cmp r12,#0xff
0200c7ec  blt 0x0200c850
0200c7f0  cmp r1,#0x0
0200c7f4  beq 0x0200c850
0200c7f8  b 0x0200c808
0200c7fc  and r0,r0,#0x80000000
0200c800  ldmia sp!,{lr}
0200c804  bx lr
0200c808  mov r0,r1
0200c80c  b 0x0200c820
0200c810  mov r0,#0xff000000
0200c814  orr r0,lr,r0, lsr #0x1
0200c818  ldmia sp!,{lr}
0200c81c  bx lr
0200c820  mvn r0,#0x80000000
0200c824  ldmia sp!,{lr}
0200c828  bx lr
0200c82c  mvn r0,#0x80000000
0200c830  ldmia sp!,{lr}
0200c834  bx lr
0200c838  tst r0,#0x80000000
0200c83c  mov r0,#0xff000000
0200c840  movne r0,r0, asr #0x1
0200c844  moveq r0,r0, lsr #0x1
0200c848  ldmia sp!,{lr}
0200c84c  bx lr
0200c850  mov r0,#0x0
0200c854  ldmia sp!,{lr}
0200c858  bx lr
