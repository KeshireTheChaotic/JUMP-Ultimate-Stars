021792a0  ldrb r12,[r0,#0xd]
021792a4  ldr r2,[0x21792f0]
021792a8  mov r3,#0x3
021792ac  ldrb r1,[r2,r3,lsl #0x1]
021792b0  cmp r12,r1
021792b4  ldrcs r1,[0x21792f4]
021792b8  ldrbcs r2,[r1,r3,lsl #0x1]
021792bc  bcs 0x021792cc
021792c0  sub r1,r3,#0x1
021792c4  and r3,r1,#0xff
021792c8  b 0x021792ac
021792cc  ldr r1,[r0,#0x38]
021792d0  ldr r0,[0x21792f8]
021792d4  mov r1,r1, lsr #0x1
021792d8  ldr r0,[r0,r2,lsl #0x2]
021792dc  and r1,r1,#0xff
021792e0  cmp r1,r0
021792e4  movls r0,#0x1
021792e8  movhi r0,#0x0
021792ec  bx lr
