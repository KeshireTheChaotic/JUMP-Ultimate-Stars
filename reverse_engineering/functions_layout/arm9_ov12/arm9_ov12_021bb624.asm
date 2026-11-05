021bb624  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
021bb628  mov r7,#0x0
021bb62c  mov r10,r0
021bb630  ldr r5,[0x21bb6d4]
021bb634  mov r8,r7
021bb638  strb r7,[r10,#0x9f]
021bb63c  add r6,r10,#0xcf
021bb640  mov r11,r7
021bb644  mov r4,#0x2a
021bb648  add r0,r10,r8, lsl #0x2
021bb64c  ldr r0,[r0,#0x80]
021bb650  cmp r0,#0x0
021bb654  beq 0x021bb6bc
021bb658  mul r9,r7,r4
021bb65c  mov r1,r11
021bb660  mov r2,#0x2a
021bb664  add r0,r6,r9
021bb668  bl 0x020517fc
021bb66c  ldr r1,[r5,r8,lsl #0x2]
021bb670  add r0,r6,r9
021bb674  bl 0x02074000
021bb678  add r1,r10,r8, lsl #0x2
021bb67c  ldr r1,[r1,#0x80]
021bb680  add r0,r6,r9
021bb684  mov r2,#0x3
021bb688  mov r3,#0x0
021bb68c  bl 0x02074374
021bb690  ldr r1,[0x21bb6d8]
021bb694  add r0,r6,r9
021bb698  bl 0x020741bc
021bb69c  add r0,r6,r9
021bb6a0  bl 0x02074294
021bb6a4  mov r0,r0, lsl #0x18
021bb6a8  ldrsb r1,[r10,#0x9f]
021bb6ac  mov r2,r0, asr #0x18
021bb6b0  add r7,r7,#0x1
021bb6b4  cmp r1,r0, asr #0x18
021bb6b8  strblt r2,[r10,#0x9f]
021bb6bc  add r8,r8,#0x1
021bb6c0  cmp r8,#0x6
021bb6c4  blt 0x021bb648
021bb6c8  strb r7,[r10,#0x9e]
021bb6cc  mov r0,#0x0
021bb6d0  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
