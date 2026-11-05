0201e468  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0201e46c  mov r6,r1
0201e470  ldrsh r1,[r6,#0x2]
0201e474  mov r7,r0
0201e478  mov r0,r1, lsl #0x1
0201e47c  ldrsh r4,[r6,r0]
0201e480  cmp r4,#0x0
0201e484  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0201e488  mov r5,#0x0
0201e48c  b 0x0201e4bc
0201e490  ldrsh r3,[r6,#0x2]
0201e494  ldr r0,[r7,#0x4]
0201e498  add r1,r3,r5
0201e49c  add r1,r6,r1, lsl #0x1
0201e4a0  ldrsh r1,[r1,#0x2]
0201e4a4  ldr r2,[r0,#0x0]
0201e4a8  add r1,r3,r1
0201e4ac  ldr r2,[r2,#0x6c]
0201e4b0  add r1,r6,r1, lsl #0x1
0201e4b4  blx r2
0201e4b8  add r5,r5,#0x1
0201e4bc  cmp r5,r4
0201e4c0  bcc 0x0201e490
0201e4c4  ldmia sp!,{r3,r4,r5,r6,r7,pc}
