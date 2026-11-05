0202fa3c  stmdb sp!,{r3,r4,r5,lr}
0202fa40  ldr r1,[0x202faa8]
0202fa44  mov r4,r0
0202fa48  str r1,[r4,#0x0]
0202fa4c  mov r5,#0x0
0202fa50  b 0x0202fa8c
0202fa54  ldr r0,[r4,#0x10]
0202fa58  ldr r0,[r0,r5,lsl #0x2]
0202fa5c  ldr r1,[r0,#0x0]
0202fa60  ldr r1,[r1,#0x18]
0202fa64  blx r1
0202fa68  cmp r0,#0x5
0202fa6c  ldrne r0,[r4,#0x10]
0202fa70  ldrne r0,[r0,r5,lsl #0x2]
0202fa74  cmpne r0,#0x0
0202fa78  beq 0x0202fa88
0202fa7c  ldr r1,[r0,#0x0]
0202fa80  ldr r1,[r1,#0x4]
0202fa84  blx r1
0202fa88  add r5,r5,#0x1
0202fa8c  ldrh r0,[r4,#0xa]
0202fa90  cmp r5,r0
0202fa94  blt 0x0202fa54
0202fa98  add r0,r4,#0x10
0202fa9c  blx 0x0200b254
0202faa0  mov r0,r4
0202faa4  ldmia sp!,{r3,r4,r5,pc}
