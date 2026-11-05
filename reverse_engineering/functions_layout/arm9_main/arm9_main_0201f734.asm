0201f734  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0201f738  ldr r1,[r0,#0x0]
0201f73c  mov r10,r0
0201f740  ldr r1,[r1,#0xd0]
0201f744  blx r1
0201f748  bl 0x0201e6d4
0201f74c  ldrb r4,[r0,#0x6]
0201f750  mov r5,#0x0
0201f754  cmp r4,#0x0
0201f758  bls 0x0201f7dc
0201f75c  mov r11,r5
0201f760  ldr r1,[r10,#0x5c]
0201f764  ldr r6,[r1,r5,lsl #0x2]
0201f768  cmp r6,#0x0
0201f76c  beq 0x0201f7d0
0201f770  ldr r0,[r6,#0x1c]
0201f774  ldrb r0,[r0,#0x29]
0201f778  mov r0,r0, lsl #0x18
0201f77c  movs r0,r0, lsr #0x1f
0201f780  movne r0,#0x0
0201f784  strne r0,[r1,r5,lsl #0x2]
0201f788  bne 0x0201f7d0
0201f78c  ldrh r7,[r6,#0x52]
0201f790  mov r8,r11
0201f794  cmp r7,#0x0
0201f798  bls 0x0201f7d0
0201f79c  mov r9,r11
0201f7a0  ldr r0,[r6,#0x4c]
0201f7a4  mov r1,r10
0201f7a8  add r12,r0,r8, lsl #0x4
0201f7ac  add r3,r0,r9
0201f7b0  ldr r0,[r0,r8,lsl #0x4]
0201f7b4  add r3,r3,#0xc
0201f7b8  ldmib r12,{r2,r12}
0201f7bc  blx r12
0201f7c0  add r8,r8,#0x1
0201f7c4  cmp r8,r7
0201f7c8  add r9,r9,#0x10
0201f7cc  bcc 0x0201f7a0
0201f7d0  add r5,r5,#0x1
0201f7d4  cmp r5,r4
0201f7d8  bcc 0x0201f760
0201f7dc  ldrb r0,[r10,#0x32]
0201f7e0  bic r0,r0,#0x8
0201f7e4  strb r0,[r10,#0x32]
0201f7e8  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
