01ffe2b0  stmdb sp!,{lr}
01ffe2b4  ldr r4,[r0,#-0x8]
01ffe2b8  ldr r9,[r0,#0x0]
01ffe2bc  add r4,r4,r9
01ffe2c0  ldrb r9,[r4,#-0xff]
01ffe2c4  ldrb r10,[r4,#0xff]
01ffe2c8  add r9,r9,r10
01ffe2cc  add r9,r9,#0x1
01ffe2d0  mov r5,r9, lsr #0x1
01ffe2d4  bl 0x01ff9450
01ffe2d8  add r6,r5,r6, lsl #0x1
01ffe2dc  strb r6,[r4,#0x101]
01ffe2e0  ldrb r7,[r4,#0xff]
01ffe2e4  add r7,r7,r6
01ffe2e8  mov r7,r7, asr #0x1
01ffe2ec  strb r7,[r4,#0x100]
01ffe2f0  ldrb r8,[r4,#-0xff]
01ffe2f4  add r8,r8,r6
01ffe2f8  mov r8,r8, asr #0x1
01ffe2fc  strb r8,[r4,#0x1]
01ffe300  ldrb r6,[r4,#-0x100]
01ffe304  add r7,r7,r6
01ffe308  mov r6,r7, asr #0x1
01ffe30c  strb r6,[r4,#0x0]
01ffe310  ldr r4,[r0,#-0x4]
01ffe314  ldr r9,[r0,#0x4]
01ffe318  add r4,r4,r9
01ffe31c  bl 0x01ffe288
01ffe320  add r4,r4,#0x1
01ffe324  bl 0x01ffe288
01ffe328  ldmia sp!,{pc}
