01ffd20c  ldrb r7,[r4,#0xfe]
01ffd210  add r7,r7,r6
01ffd214  mov r7,r7, asr #0x1
01ffd218  strb r7,[r4,#0x100]
01ffd21c  ldrb r8,[r4,#-0xfe]
01ffd220  add r8,r8,r6
01ffd224  mov r8,r8, asr #0x1
01ffd228  strb r8,[r4,#0x2]
01ffd22c  ldrb r6,[r4,#-0x100]
01ffd230  add r7,r7,r6
01ffd234  mov r6,r7, asr #0x1
01ffd238  strb r6,[r4,#0x0]
01ffd23c  mov pc,lr
