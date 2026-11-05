01ffb1cc  stmdb sp!,{lr}
01ffb1d0  ldrb r9,[r4,#-0xf2]
01ffb1d4  ldrb r10,[r4,#-0x2]
01ffb1d8  add r9,r9,r10
01ffb1dc  add r9,r9,#0x1
01ffb1e0  mov r5,r9, lsr #0x1
01ffb1e4  bl 0x01ff9450
01ffb1e8  add r6,r5,r6, lsl #0x1
01ffb1ec  strb r6,[r4,#0xe]
01ffb1f0  ldrb r7,[r4,#-0x2]
01ffb1f4  add r7,r7,r6
01ffb1f8  mov r6,r7, asr #0x1
01ffb1fc  strb r6,[r4,#0x6]
01ffb200  ldrb r7,[r4,#-0x2]
01ffb204  add r7,r7,r6
01ffb208  mov r6,r7, asr #0x1
01ffb20c  strb r6,[r4,#0x2]
01ffb210  ldrb r7,[r4,#-0x2]
01ffb214  add r7,r7,r6
01ffb218  mov r6,r7, asr #0x1
01ffb21c  strb r6,[r4,#0x0]
01ffb220  ldrb r6,[r4,#0x6]
01ffb224  ldrb r7,[r4,#0x2]
01ffb228  add r7,r7,r6
01ffb22c  mov r6,r7, asr #0x1
01ffb230  strb r6,[r4,#0x4]
01ffb234  ldrb r6,[r4,#0xe]
01ffb238  ldrb r7,[r4,#0x6]
01ffb23c  add r7,r7,r6
01ffb240  mov r6,r7, asr #0x1
01ffb244  strb r6,[r4,#0xa]
01ffb248  ldrb r7,[r4,#0x6]
01ffb24c  add r7,r7,r6
01ffb250  mov r6,r7, asr #0x1
01ffb254  strb r6,[r4,#0x8]
01ffb258  ldrb r6,[r4,#0xe]
01ffb25c  ldrb r7,[r4,#0xa]
01ffb260  add r7,r7,r6
01ffb264  mov r6,r7, asr #0x1
01ffb268  strb r6,[r4,#0xc]
01ffb26c  ldmia sp!,{pc}
