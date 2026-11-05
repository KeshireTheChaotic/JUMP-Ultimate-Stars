0219c4e8  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0219c4ec  ldr r4,[0x219c5b8]
0219c4f0  mov r6,r0
0219c4f4  mov r3,#0x0
0219c4f8  add r1,r4,#0x9
0219c4fc  b 0x0219c538
0219c500  ldrsb r5,[r6,#0x1]
0219c504  mov r2,r2, lsl #0x10
0219c508  orr r2,r5,r2, lsr #0x8
0219c50c  mov r2,r2, lsl #0x10
0219c510  cmp r4,r2, lsr #0x10
0219c514  mov r2,r2, lsr #0x10
0219c518  cmpls r2,r1
0219c51c  movhi r0,#0x0
0219c520  movhi r1,r0
0219c524  ldmiahi sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0219c528  add r3,r3,#0x1
0219c52c  cmp r3,#0xc
0219c530  bge 0x0219c544
0219c534  add r6,r6,#0x2
0219c538  ldrsb r2,[r6,#0x0]
0219c53c  cmp r2,#0x0
0219c540  bne 0x0219c500
0219c544  mov r2,#0x0
0219c548  add r4,r0,r3, lsl #0x1
0219c54c  sub r12,r4,#0x2
0219c550  mov r1,r2
0219c554  mov r0,r2
0219c558  ldr r7,[0x219c5bc]
0219c55c  ldr r4,[0x219c5c0]
0219c560  b 0x0219c5a8
0219c564  ldrsb lr,[r12,#0x0]
0219c568  ldrsb r6,[r12,#0x1]
0219c56c  add r5,r7,r0, lsl #0x3
0219c570  mov lr,lr, lsl #0x10
0219c574  orr r6,r6,lr, lsr #0x8
0219c578  mov lr,r6, lsl #0x10
0219c57c  ldr r6,[r7,r0,lsl #0x3]
0219c580  add r8,r4,lr, lsr #0x10
0219c584  umull r10,r9,r8,r6
0219c588  ldr r5,[r5,#0x4]
0219c58c  mov lr,r8, asr #0x1f
0219c590  mla r9,r8,r5,r9
0219c594  mla r9,lr,r6,r9
0219c598  adds r2,r2,r10
0219c59c  adc r1,r1,r9
0219c5a0  add r0,r0,#0x1
0219c5a4  sub r12,r12,#0x2
0219c5a8  cmp r0,r3
0219c5ac  blt 0x0219c564
0219c5b0  mov r0,r2
0219c5b4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
