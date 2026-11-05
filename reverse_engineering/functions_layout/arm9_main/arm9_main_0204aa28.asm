0204aa28  ldr r3,[r0,#0x6c]
0204aa2c  ldr r12,[r0,#0x60]
0204aa30  mul r3,r2,r3
0204aa34  add r1,r12,r1
0204aa38  ldrb r2,[r0,#0x4b]
0204aa3c  ldrb r1,[r3,r1]
0204aa40  ldrb r0,[r0,#0x4a]
0204aa44  rsb r2,r2,#0x8
0204aa48  mov r3,#0xff
0204aa4c  mov r0,r1, asr r0
0204aa50  and r0,r0,r3, asr r2
0204aa54  bx lr
