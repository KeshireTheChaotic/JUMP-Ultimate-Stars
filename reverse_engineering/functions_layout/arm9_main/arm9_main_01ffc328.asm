01ffc328  ldrb r6,[r4,#0x106]
01ffc32c  ldrb r7,[r4,#0xfe]
01ffc330  add r7,r7,r6
01ffc334  mov r7,r7, asr #0x1
01ffc338  strb r7,[r4,#0x102]
01ffc33c  ldrb r8,[r4,#-0xfa]
01ffc340  add r8,r8,r6
01ffc344  mov r8,r8, asr #0x1
01ffc348  strb r8,[r4,#0x6]
01ffc34c  ldrb r6,[r4,#-0x2]
01ffc350  add r8,r8,r6
01ffc354  mov r6,r8, asr #0x1
01ffc358  strb r6,[r4,#0x2]
01ffc35c  ldrb r7,[r4,#-0x2]
01ffc360  ldrb r8,[r4,#0x2]
01ffc364  add r8,r8,r7
01ffc368  mov r8,r8, asr #0x1
01ffc36c  strb r8,[r4,#0x0]
01ffc370  ldrb r7,[r4,#0xfe]
01ffc374  ldrb r8,[r4,#0x102]
01ffc378  add r8,r8,r7
01ffc37c  mov r8,r8, asr #0x1
01ffc380  strb r8,[r4,#0x100]
01ffc384  ldrb r7,[r4,#0x2]
01ffc388  ldrb r8,[r4,#0x6]
01ffc38c  add r8,r8,r7
01ffc390  mov r8,r8, asr #0x1
01ffc394  strb r8,[r4,#0x4]
01ffc398  ldrb r7,[r4,#0x102]
01ffc39c  ldrb r8,[r4,#0x106]
01ffc3a0  add r8,r8,r7
01ffc3a4  mov r8,r8, asr #0x1
01ffc3a8  strb r8,[r4,#0x104]
01ffc3ac  mov pc,lr
