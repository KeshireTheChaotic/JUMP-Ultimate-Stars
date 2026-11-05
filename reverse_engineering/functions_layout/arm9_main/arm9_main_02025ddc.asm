02025ddc  cmp r2,#0x0
02025de0  addne r3,r0,r1, lsl #0x2
02025de4  strne r2,[r3,#0xc]
02025de8  ldrne r3,[r0,#0x8]
02025dec  movne r2,#0x1
02025df0  orrne r1,r3,r2, lsl r1
02025df4  bne 0x02025e14
02025df8  ldr r3,[0x2025e1c]
02025dfc  add r2,r0,r1, lsl #0x2
02025e00  str r3,[r2,#0xc]
02025e04  mov r2,#0x1
02025e08  mvn r1,r2, lsl r1
02025e0c  ldr r2,[r0,#0x8]
02025e10  and r1,r2,r1
02025e14  str r1,[r0,#0x8]
02025e18  bx lr
