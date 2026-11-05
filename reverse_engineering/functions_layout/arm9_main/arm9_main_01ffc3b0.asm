01ffc3b0  stmdb sp!,{lr}
01ffc3b4  ldrb r9,[r4,#-0xfa]
01ffc3b8  ldrb r10,[r4,#0xfe]
01ffc3bc  add r9,r9,r10
01ffc3c0  add r9,r9,#0x1
01ffc3c4  mov r5,r9, lsr #0x1
01ffc3c8  bl 0x01ff9450
01ffc3cc  add r6,r5,r6, lsl #0x1
01ffc3d0  strb r6,[r4,#0x106]
01ffc3d4  bl 0x01ffc328
01ffc3d8  ldmia sp!,{pc}
