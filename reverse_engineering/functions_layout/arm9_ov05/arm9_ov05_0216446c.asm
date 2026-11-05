0216446c  cmp r4,#0x0
02164470  beq 0x02164488
02164474  add r0,r6,r7, lsl #0x1
02164478  ldrh r1,[r0,#0x8]
0216447c  mov r0,r7
02164480  blx 0x02072840
02164484  mov r4,r0
02164488  add r0,r6,r7, lsl #0x1
0216448c  ldrh r8,[r0,#0x8]
02164490  mov r0,r7
02164494  blx 0x0207281c
02164498  sub r0,r0,r8
0216449c  str r0,[r5,r7,lsl #0x2]
021644a0  add r7,r7,#0x1
021644a4  cmp r7,#0x6
021644a8  blt 0x0216446c
021644ac  cmp r4,#0x0
021644b0  bne 0x021644e0
021644b4  mov r6,#0x0
021644b8  mov r1,r6
021644bc  mvn r0,#0x0
021644c0  ldr r2,[r5,r6,lsl #0x2]
021644c4  cmp r2,#0x0
021644c8  mullt r3,r2,r0
021644cc  strlt r3,[r5,r6,lsl #0x2]
021644d0  strge r1,[r5,r6,lsl #0x2]
021644d4  add r6,r6,#0x1
021644d8  cmp r6,#0x6
021644dc  blt 0x021644c0
021644e0  mov r0,r4
021644e4  ldmia sp!,{r4,r5,r6,r7,r8,pc}
