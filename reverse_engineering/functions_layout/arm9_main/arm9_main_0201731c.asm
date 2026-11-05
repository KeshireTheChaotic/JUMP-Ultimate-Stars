0201731c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
02017320  ldr r4,[r0,#0x20]
02017324  mov r2,#0x0
02017328  mov r5,r1, asr #0x8
0201732c  and lr,r5,#0xff
02017330  mov r8,r2
02017334  sub r3,r2,#0x80000001
02017338  and r12,r1,#0xff
0201733c  ldrh r5,[r4,#0x8]
02017340  b 0x02017364
02017344  ldr r7,[r0,#0x20]
02017348  mov r6,r8, lsl #0x1
0201734c  ldr r7,[r7,#0x10]
02017350  ldrh r6,[r7,r6]
02017354  cmp r1,r6
02017358  moveq r0,r8
0201735c  ldmiaeq sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
02017360  add r8,r8,#0x1
02017364  cmp r8,r5
02017368  bcc 0x02017344
0201736c  mov r1,#0x0
02017370  b 0x020173b8
02017374  add r0,r4,r1, lsl #0x2
02017378  ldrb r6,[r0,#0x1]
0201737c  ldrb r8,[r4,r1,lsl #0x2]
02017380  ldrb r7,[r0,#0x2]
02017384  sub r9,lr,r6
02017388  mul r6,r9,r9
0201738c  sub r8,r12,r8
02017390  mla r6,r8,r8,r6
02017394  rsb r8,r7,#0x0
02017398  ldrb r7,[r0,#0x3]
0201739c  mla r0,r8,r8,r6
020173a0  rsb r6,r7,#0x0
020173a4  mla r0,r6,r6,r0
020173a8  cmp r0,r3
020173ac  movcc r2,r1
020173b0  movcc r3,r0
020173b4  add r1,r1,#0x1
020173b8  cmp r1,r5
020173bc  bcc 0x02017374
020173c0  mov r0,r2
020173c4  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
