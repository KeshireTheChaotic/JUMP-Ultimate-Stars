0206c760  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0206c764  mov r9,r0
0206c768  mov r5,#0x0
0206c76c  mov r4,#0x1
0206c770  ldr r10,[0x206c7f8]
0206c774  b 0x0206c7ec
0206c778  add r1,r5,#0x31
0206c77c  mov r0,r9
0206c780  orr r1,r10,r1, lsl #0x18
0206c784  bl 0x0206c6f0
0206c788  movs r6,r0
0206c78c  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0206c790  ldr r0,[r6,#0x4]
0206c794  ldr r1,[r0,#0x0]
0206c798  ldr r1,[r1,#0xac]
0206c79c  blx r1
0206c7a0  mov r7,r0
0206c7a4  mov r8,r4
0206c7a8  b 0x0206c7e0
0206c7ac  mov r0,r6
0206c7b0  mov r1,r8
0206c7b4  bl 0x0206c718
0206c7b8  ldr r1,[r0,#0x4]
0206c7bc  ldrb r1,[r1,#0x29]
0206c7c0  mov r1,r1, lsl #0x18
0206c7c4  movs r1,r1, lsr #0x1f
0206c7c8  bne 0x0206c7dc
0206c7cc  ldr r1,[r0,#0x0]
0206c7d0  ldr r1,[r1,#0x8]
0206c7d4  blx r1
0206c7d8  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0206c7dc  add r8,r8,#0x1
0206c7e0  cmp r8,r7
0206c7e4  bcc 0x0206c7ac
0206c7e8  add r5,r5,#0x1
0206c7ec  cmp r5,#0x9
0206c7f0  bcc 0x0206c778
0206c7f4  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
