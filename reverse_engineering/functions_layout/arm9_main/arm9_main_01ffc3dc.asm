01ffc3dc  stmdb sp!,{lr}
01ffc3e0  ldrb r6,[r4,#0x307]
01ffc3e4  ldrb r7,[r4,#0x2ff]
01ffc3e8  add r7,r7,r6
01ffc3ec  mov r7,r7, asr #0x1
01ffc3f0  strb r7,[r4,#0x303]
01ffc3f4  ldrb r8,[r4,#-0xf9]
01ffc3f8  add r8,r8,r6
01ffc3fc  mov r8,r8, asr #0x1
01ffc400  strb r8,[r4,#0x107]
01ffc404  ldrb r6,[r4,#0xff]
01ffc408  add r8,r8,r6
01ffc40c  mov r6,r8, asr #0x1
01ffc410  strb r6,[r4,#0x103]
01ffc414  bl 0x01ffd53c
01ffc418  add r4,r4,#0x4
01ffc41c  bl 0x01ffd53c
01ffc420  add r4,r4,#0x1fc
01ffc424  bl 0x01ffd53c
01ffc428  add r4,r4,#0x4
01ffc42c  bl 0x01ffd53c
01ffc430  sub r4,r4,#0x204
01ffc434  ldmia sp!,{pc}
