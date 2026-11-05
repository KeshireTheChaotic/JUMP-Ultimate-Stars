01ffd5c4  stmdb sp!,{lr}
01ffd5c8  ldr r4,[r0,#-0x8]
01ffd5cc  ldr r9,[r0,#0x0]
01ffd5d0  add r4,r4,r9
01ffd5d4  ldrb r9,[r4,#-0xfd]
01ffd5d8  ldrb r10,[r4,#0xff]
01ffd5dc  add r9,r9,r10
01ffd5e0  add r9,r9,#0x1
01ffd5e4  mov r5,r9, lsr #0x1
01ffd5e8  bl 0x01ff9450
01ffd5ec  add r6,r5,r6, lsl #0x1
01ffd5f0  strb r6,[r4,#0x103]
01ffd5f4  bl 0x01ffd53c
01ffd5f8  ldr r4,[r0,#-0x4]
01ffd5fc  ldr r9,[r0,#0x4]
01ffd600  add r4,r4,r9
01ffd604  bl 0x01ffd504
01ffd608  add r4,r4,#0x1
01ffd60c  bl 0x01ffd504
01ffd610  ldmia sp!,{pc}
