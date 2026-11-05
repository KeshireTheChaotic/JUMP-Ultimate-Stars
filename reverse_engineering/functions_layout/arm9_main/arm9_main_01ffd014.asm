01ffd014  stmdb sp!,{lr}
01ffd018  ldrb r6,[r4,#0x703]
01ffd01c  ldrb r7,[r4,#0x6ff]
01ffd020  add r7,r7,r6
01ffd024  mov r7,r7, asr #0x1
01ffd028  strb r7,[r4,#0x701]
01ffd02c  ldrb r8,[r4,#-0xfd]
01ffd030  add r8,r8,r6
01ffd034  mov r8,r8, asr #0x1
01ffd038  strb r8,[r4,#0x303]
01ffd03c  ldrb r6,[r4,#0x2ff]
01ffd040  add r8,r8,r6
01ffd044  mov r6,r8, asr #0x1
01ffd048  strb r6,[r4,#0x301]
01ffd04c  bl 0x01ffe0b0
01ffd050  add r4,r4,#0x2
01ffd054  bl 0x01ffe0b0
01ffd058  add r4,r4,#0x400
01ffd05c  sub r4,r4,#0x2
01ffd060  bl 0x01ffe0b0
01ffd064  add r4,r4,#0x2
01ffd068  bl 0x01ffe0b0
01ffd06c  sub r4,r4,#0x400
01ffd070  sub r4,r4,#0x2
01ffd074  ldmia sp!,{pc}
