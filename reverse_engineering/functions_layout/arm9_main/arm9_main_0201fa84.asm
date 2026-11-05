0201fa84  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0201fa88  mov r7,r0
0201fa8c  mov r0,r7
0201fa90  mov r6,r1
0201fa94  ldr r1,[r0,#0x0]
0201fa98  movs r4,r3
0201fa9c  ldr r1,[r1,#0xd0]
0201faa0  mov r5,r2
0201faa4  ldreq r4,[r7,#0x1c]
0201faa8  blx r1
0201faac  bl 0x0201e6d4
0201fab0  mov r3,#0x0
0201fab4  ldrb r1,[r0,#0x6]
0201fab8  mov r0,r3
0201fabc  b 0x0201fb6c
0201fac0  ldr r2,[r7,#0x5c]
0201fac4  mov lr,r0
0201fac8  ldr r12,[r2,r3,lsl #0x2]
0201facc  ldrh r8,[r12,#0x52]
0201fad0  b 0x0201fb60
0201fad4  ldr r10,[r12,#0x4c]
0201fad8  add r2,r10,lr, lsl #0x4
0201fadc  ldr r9,[r2,#0x4]
0201fae0  cmp r9,r6
0201fae4  ldreq r9,[r10,lr,lsl #0x4]
0201fae8  cmpeq r9,r4
0201faec  bne 0x0201fb5c
0201faf0  mov r0,r6
0201faf4  ldr r3,[r0,#0x0]
0201faf8  mov r1,r4
0201fafc  ldr r3,[r3,#0x68]
0201fb00  ldr r4,[r2,#0xc]
0201fb04  blx r3
0201fb08  mov r0,r0, lsr #0x1
0201fb0c  add r3,r0,#0x1
0201fb10  mov r0,r5, lsl #0x10
0201fb14  mov r1,r0, lsr #0x10
0201fb18  b 0x0201fb20
0201fb1c  sub r4,r4,r3, lsl #0x1
0201fb20  ldrh r0,[r4,#0x0]
0201fb24  cmp r1,r0
0201fb28  bcc 0x0201fb1c
0201fb2c  mov r2,r3, lsl #0x1
0201fb30  mov r0,r5, lsl #0x10
0201fb34  b 0x0201fb3c
0201fb38  add r4,r4,r3, lsl #0x1
0201fb3c  ldrh r1,[r2,r4]
0201fb40  cmp r1,r0, lsr #0x10
0201fb44  bls 0x0201fb38
0201fb48  ldrh r1,[r4,#0x0]
0201fb4c  cmp r1,r0, lsr #0x10
0201fb50  moveq r0,#0x1
0201fb54  movne r0,#0x0
0201fb58  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
0201fb5c  add lr,lr,#0x1
0201fb60  cmp lr,r8
0201fb64  blt 0x0201fad4
0201fb68  add r3,r3,#0x1
0201fb6c  cmp r3,r1
0201fb70  bcc 0x0201fac0
0201fb74  mov r0,#0x0
0201fb78  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
