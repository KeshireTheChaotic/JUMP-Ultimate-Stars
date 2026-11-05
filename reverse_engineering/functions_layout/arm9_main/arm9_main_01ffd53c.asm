01ffd53c  ldrb r6,[r4,#0x103]
01ffd540  ldrb r7,[r4,#0xff]
01ffd544  add r7,r7,r6
01ffd548  mov r7,r7, asr #0x1
01ffd54c  strb r7,[r4,#0x101]
01ffd550  ldrb r8,[r4,#-0xfd]
01ffd554  add r8,r8,r6
01ffd558  mov r8,r8, asr #0x1
01ffd55c  strb r8,[r4,#0x3]
01ffd560  ldrb r6,[r4,#-0x1]
01ffd564  add r8,r8,r6
01ffd568  mov r6,r8, asr #0x1
01ffd56c  strb r6,[r4,#0x1]
01ffd570  ldrb r7,[r4,#-0x1]
01ffd574  ldrb r8,[r4,#0x1]
01ffd578  add r8,r8,r7
01ffd57c  mov r8,r8, asr #0x1
01ffd580  strb r8,[r4,#0x0]
01ffd584  ldrb r7,[r4,#0xff]
01ffd588  ldrb r8,[r4,#0x101]
01ffd58c  add r8,r8,r7
01ffd590  mov r8,r8, asr #0x1
01ffd594  strb r8,[r4,#0x100]
01ffd598  ldrb r7,[r4,#0x1]
01ffd59c  ldrb r8,[r4,#0x3]
01ffd5a0  add r8,r8,r7
01ffd5a4  mov r8,r8, asr #0x1
01ffd5a8  strb r8,[r4,#0x2]
01ffd5ac  ldrb r7,[r4,#0x101]
01ffd5b0  ldrb r8,[r4,#0x103]
01ffd5b4  add r8,r8,r7
01ffd5b8  mov r8,r8, asr #0x1
01ffd5bc  strb r8,[r4,#0x102]
01ffd5c0  mov pc,lr
