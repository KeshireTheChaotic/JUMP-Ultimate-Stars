0207a424  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0207a428  ldr r3,[r0,#0x14]
0207a42c  ldr r6,[r1,#0x10]
0207a430  mov r0,r1
0207a434  add r4,r6,r3, lsl #0x4
0207a438  mov r7,r2
0207a43c  bl 0x02011ac8
0207a440  ldrb r1,[r4,#0xf]
0207a444  mov r5,r0
0207a448  mov r0,r1, lsl #0x18
0207a44c  movs r0,r0, lsr #0x1f
0207a450  bne 0x0207a460
0207a454  mov r0,r4
0207a458  mov r1,r5
0207a45c  bl 0x02079dfc
0207a460  ldr r0,[r5,#0x4]
0207a464  ldr r0,[r0,#0x68]
0207a468  ldr r1,[r0,#0x0]
0207a46c  ldr r1,[r1,#0xa0]
0207a470  blx r1
0207a474  ldrb r0,[r4,#0xe]
0207a478  ldrsh r1,[r7,#0x0]
0207a47c  mov r0,r0, lsl #0x18
0207a480  mov r0,r0, lsr #0x1f
0207a484  cmp r0,r1
0207a488  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0207a48c  ldrb r2,[r4,#0xe]
0207a490  tst r1,#0x1
0207a494  movne r0,#0x1
0207a498  moveq r0,#0x0
0207a49c  mov r1,r0, lsl #0x1f
0207a4a0  bic r2,r2,#0x80
0207a4a4  orr r1,r2,r1, lsr #0x18
0207a4a8  strb r1,[r4,#0xe]
0207a4ac  ldrsh r1,[r4,#0xc]
0207a4b0  mvn r0,#0x0
0207a4b4  cmp r1,r0
0207a4b8  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0207a4bc  ldrb r1,[r4,#0xf]
0207a4c0  mov r1,r1, lsl #0x19
0207a4c4  movs r1,r1, lsr #0x1f
0207a4c8  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0207a4cc  ldrb r1,[r4,#0xe]
0207a4d0  mov r1,r1, lsl #0x18
0207a4d4  movs r1,r1, lsr #0x1f
0207a4d8  beq 0x0207a500
0207a4dc  ldrsb r1,[r4,#0xf]
0207a4e0  mov r1,r1, lsl #0x1a
0207a4e4  cmp r0,r1, asr #0x1a
0207a4e8  bne 0x0207a500
0207a4ec  mov r0,r6
0207a4f0  mov r1,r4
0207a4f4  mov r2,r5
0207a4f8  bl 0x0207a098
0207a4fc  ldmia sp!,{r3,r4,r5,r6,r7,pc}
0207a500  ldrsb r1,[r4,#0xf]
0207a504  mvn r0,#0x0
0207a508  mov r1,r1, lsl #0x1a
0207a50c  mov r1,r1, asr #0x1a
0207a510  cmp r1,r0
0207a514  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0207a518  mov r0,r6
0207a51c  mov r1,r4
0207a520  mov r2,r5
0207a524  bl 0x02079f08
0207a528  ldmia sp!,{r3,r4,r5,r6,r7,pc}
