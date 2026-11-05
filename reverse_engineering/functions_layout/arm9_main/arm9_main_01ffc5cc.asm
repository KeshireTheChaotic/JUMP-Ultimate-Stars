01ffc5cc  stmdb sp!,{lr}
01ffc5d0  ldrb r9,[r4,#-0xfa]
01ffc5d4  ldrb r10,[r4,#-0x2]
01ffc5d8  add r9,r9,r10
01ffc5dc  add r9,r9,#0x1
01ffc5e0  mov r5,r9, lsr #0x1
01ffc5e4  bl 0x01ff9450
01ffc5e8  add r6,r5,r6, lsl #0x1
01ffc5ec  strb r6,[r4,#0x6]
01ffc5f0  ldrb r7,[r4,#-0x2]
01ffc5f4  add r7,r7,r6
01ffc5f8  mov r6,r7, asr #0x1
01ffc5fc  strb r6,[r4,#0x2]
01ffc600  ldrb r7,[r4,#-0x2]
01ffc604  add r7,r7,r6
01ffc608  mov r6,r7, asr #0x1
01ffc60c  strb r6,[r4,#0x0]
01ffc610  ldrb r6,[r4,#0x6]
01ffc614  ldrb r7,[r4,#0x2]
01ffc618  add r7,r7,r6
01ffc61c  mov r6,r7, asr #0x1
01ffc620  strb r6,[r4,#0x4]
01ffc624  ldmia sp!,{pc}
