02012520  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02012524  ldr r5,[r0,#0x0]
02012528  mov r8,r0
0201252c  ldr r5,[r5,#0x68]
02012530  mov r7,r1
02012534  mov r4,r2
02012538  mov r6,r3
0201253c  blx r5
02012540  mov r5,r0
02012544  cmp r5,#0x1
02012548  bne 0x02012564
0201254c  ldr r1,[r6,#0x0]
02012550  mov r0,r1, asr #0xb
02012554  add r0,r1,r0, lsr #0x14
02012558  mov r0,r0, asr #0xc
0201255c  strb r0,[r4,#0x0]
02012560  ldmia sp!,{r4,r5,r6,r7,r8,pc}
02012564  mov r0,r8
02012568  ldr r2,[r0,#0x0]
0201256c  mov r1,r7
02012570  ldr r2,[r2,#0x14]
02012574  blx r2
02012578  cmp r0,#0xe
0201257c  bne 0x02012598
02012580  ldr r1,[r6,#0x0]
02012584  mov r0,r1, asr #0xc
02012588  add r0,r1,r0, lsr #0x13
0201258c  mov r0,r0, asr #0xd
02012590  strh r0,[r4,#0x0]
02012594  ldmia sp!,{r4,r5,r6,r7,r8,pc}
02012598  cmp r5,#0x2
0201259c  bne 0x020125b8
020125a0  ldr r1,[r6,#0x0]
020125a4  mov r0,r1, asr #0xb
020125a8  add r0,r1,r0, lsr #0x14
020125ac  mov r0,r0, asr #0xc
020125b0  strh r0,[r4,#0x0]
020125b4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
020125b8  mov r0,r8
020125bc  ldr r2,[r0,#0x0]
020125c0  mov r1,r7
020125c4  ldr r2,[r2,#0x14]
020125c8  blx r2
020125cc  cmp r0,#0x4
020125d0  ldreq r0,[r6,#0x0]
020125d4  streq r0,[r4,#0x0]
020125d8  ldmiaeq sp!,{r4,r5,r6,r7,r8,pc}
020125dc  cmp r5,#0x4
020125e0  ldreq r1,[r6,#0x0]
020125e4  moveq r0,r1, asr #0xb
020125e8  addeq r0,r1,r0, lsr #0x14
020125ec  moveq r0,r0, asr #0xc
020125f0  streq r0,[r4,#0x0]
020125f4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
