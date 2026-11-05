02019660  stmdb sp!,{r3,r4,r5,lr}
02019664  ldr r1,[0x20196c0]
02019668  mov r4,r0
0201966c  str r1,[r4,#0x0]
02019670  mov r5,#0x0
02019674  b 0x02019690
02019678  add r0,r4,r5, lsl #0x2
0201967c  ldr r0,[r0,#0xc]
02019680  ldr r1,[r0,#0x0]
02019684  ldr r1,[r1,#0xc]
02019688  blx r1
0201968c  add r5,r5,#0x1
02019690  ldr r0,[r4,#0x8]
02019694  mov r0,r0, lsl #0x4
02019698  cmp r5,r0, lsr #0x1d
0201969c  bcc 0x02019678
020196a0  ldr r0,[r4,#0x18]
020196a4  cmp r0,#0x0
020196a8  beq 0x020196b8
020196ac  ldr r1,[r0,#0x0]
020196b0  ldr r1,[r1,#0xc]
020196b4  blx r1
020196b8  mov r0,r4
020196bc  ldmia sp!,{r3,r4,r5,pc}
