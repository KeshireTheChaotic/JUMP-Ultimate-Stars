037ff48c  stmdb sp!,{r4,r5,lr}
037ff490  sub sp,sp,#0x4
037ff494  mov r5,r0
037ff498  mov r4,#0x0
037ff49c  rsb r0,r1,#0x0
037ff4a0  b 0x037ff4ac
037ff4a4  sub r4,r4,#0x1
037ff4a8  add r0,r0,#0x300
037ff4ac  cmp r0,#0x0
037ff4b0  blt 0x037ff4a4
037ff4b4  b 0x037ff4c0
037ff4b8  add r4,r4,#0x1
037ff4bc  sub r0,r0,#0x300
037ff4c0  cmp r0,#0x300
037ff4c4  bge 0x037ff4b8
037ff4c8  bl 0x037ff5b4
037ff4cc  mov r2,#0x0
037ff4d0  mov r1,#0x10000
037ff4d4  adds lr,r0,r1
037ff4d8  adc r12,r2,#0x0
037ff4dc  mov r3,r5, asr #0x1f
037ff4e0  umull r1,r0,lr,r5
037ff4e4  mla r0,lr,r3,r0
037ff4e8  mla r0,r12,r5,r0
037ff4ec  sub lr,r4,#0x10
037ff4f0  cmp lr,#0x0
037ff4f4  bgt 0x037ff518
037ff4f8  rsb r2,lr,#0x0
037ff4fc  mov r3,r0, lsr r2
037ff500  mov r5,r1, lsr r2
037ff504  rsb r1,r2,#0x20
037ff508  orr r5,r5,r0, lsl r1
037ff50c  sub r1,r2,#0x20
037ff510  orr r5,r5,r0, lsr r1
037ff514  b 0x037ff574
037ff518  cmp lr,#0x20
037ff51c  bge 0x037ff56c
037ff520  mvn r5,#0x0
037ff524  rsb r4,lr,#0x20
037ff528  mov r12,r5, lsl r4
037ff52c  rsb r3,r4,#0x20
037ff530  orr r12,r12,r5, lsr r3
037ff534  sub r3,r4,#0x20
037ff538  orr r12,r12,r5, lsl r3
037ff53c  and r3,r0,r12
037ff540  and r5,r1,r5, lsl r4
037ff544  cmp r3,r2
037ff548  cmpeq r5,r2
037ff54c  ldrne r0,[0x37ff5b0]
037ff550  bne 0x037ff5a4
037ff554  mov r5,r1, lsl lr
037ff558  mov r3,r0, lsl lr
037ff55c  orr r3,r3,r1, lsr r4
037ff560  sub r0,lr,#0x20
037ff564  orr r3,r3,r1, lsl r0
037ff568  b 0x037ff574
037ff56c  ldr r0,[0x37ff5b0]
037ff570  b 0x037ff5a4
037ff574  mov r1,#0x0
037ff578  mov r0,#0x10
037ff57c  cmp r3,r1
037ff580  cmpeq r5,r0
037ff584  movcc r5,r0
037ff588  bcc 0x037ff59c
037ff58c  ldr r0,[0x37ff5b0]
037ff590  cmp r3,r1
037ff594  cmpeq r5,r0
037ff598  movhi r5,r0
037ff59c  mov r0,r5, lsl #0x10
037ff5a0  mov r0,r0, lsr #0x10
037ff5a4  add sp,sp,#0x4
037ff5a8  ldmia sp!,{r4,r5,lr}
037ff5ac  bx lr
