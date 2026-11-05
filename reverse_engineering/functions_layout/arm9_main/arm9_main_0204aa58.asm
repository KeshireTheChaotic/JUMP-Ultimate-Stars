0204aa58  ldr r3,[r0,#0x6c]
0204aa5c  ldr r12,[r0,#0x60]
0204aa60  mul r3,r2,r3
0204aa64  add r1,r12,r1
0204aa68  ldrb r2,[r0,#0x49]
0204aa6c  ldrb r1,[r3,r1]
0204aa70  ldrb r0,[r0,#0x48]
0204aa74  rsb r2,r2,#0x8
0204aa78  mov r3,#0xff
0204aa7c  mov r0,r1, asr r0
0204aa80  and r0,r0,r3, asr r2
0204aa84  bx lr
