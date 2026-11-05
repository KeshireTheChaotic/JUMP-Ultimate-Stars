01ffe0b0  ldrb r6,[r4,#0x301]
01ffe0b4  ldrb r7,[r4,#0x2ff]
01ffe0b8  add r7,r7,r6
01ffe0bc  mov r7,r7, asr #0x1
01ffe0c0  strb r7,[r4,#0x300]
01ffe0c4  ldrb r8,[r4,#-0xff]
01ffe0c8  add r8,r8,r6
01ffe0cc  mov r8,r8, asr #0x1
01ffe0d0  strb r8,[r4,#0x101]
01ffe0d4  ldrb r6,[r4,#0xff]
01ffe0d8  add r8,r8,r6
01ffe0dc  mov r6,r8, asr #0x1
01ffe0e0  strb r6,[r4,#0x100]
01ffe0e4  ldrb r7,[r4,#-0x100]
01ffe0e8  ldrb r8,[r4,#0x100]
01ffe0ec  add r8,r8,r7
01ffe0f0  mov r8,r8, asr #0x1
01ffe0f4  strb r8,[r4,#0x0]
01ffe0f8  ldrb r7,[r4,#-0xff]
01ffe0fc  ldrb r8,[r4,#0x101]
01ffe100  add r8,r8,r7
01ffe104  mov r8,r8, asr #0x1
01ffe108  strb r8,[r4,#0x1]
01ffe10c  ldrb r7,[r4,#0x100]
01ffe110  ldrb r8,[r4,#0x300]
01ffe114  add r8,r8,r7
01ffe118  mov r8,r8, asr #0x1
01ffe11c  strb r8,[r4,#0x200]
01ffe120  ldrb r7,[r4,#0x101]
01ffe124  ldrb r8,[r4,#0x301]
01ffe128  add r8,r8,r7
01ffe12c  mov r8,r8, asr #0x1
01ffe130  strb r8,[r4,#0x201]
01ffe134  mov pc,lr
