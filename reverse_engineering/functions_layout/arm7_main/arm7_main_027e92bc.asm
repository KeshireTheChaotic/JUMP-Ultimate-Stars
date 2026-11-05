027e92bc  and r2,r1,#0xf
027e92c0  mov r3,r2, lsl #0x1
027e92c4  ldr r2,[0x27e932c]
027e92c8  ldrh r12,[r2,r3]
027e92cc  ldr r3,[0x27e9330]
027e92d0  and r1,r3,r1, asr #0x4
027e92d4  mov r1,r1, lsl #0x10
027e92d8  eor r12,r12,r1, lsr #0x10
027e92dc  and r1,r0,#0xf
027e92e0  mov r1,r1, lsl #0x1
027e92e4  ldrh r1,[r2,r1]
027e92e8  eor r1,r12,r1
027e92ec  mov r1,r1, lsl #0x10
027e92f0  mov r12,r1, lsr #0x10
027e92f4  and r1,r3,r12, asr #0x4
027e92f8  mov r1,r1, lsl #0x10
027e92fc  and r3,r12,#0xf
027e9300  mov r3,r3, lsl #0x1
027e9304  ldrh r3,[r2,r3]
027e9308  eor r1,r3,r1, lsr #0x10
027e930c  mov r0,r0, asr #0x4
027e9310  and r0,r0,#0xf
027e9314  mov r0,r0, lsl #0x1
027e9318  ldrh r0,[r2,r0]
027e931c  eor r0,r1,r0
027e9320  mov r0,r0, lsl #0x10
027e9324  mov r0,r0, lsr #0x10
027e9328  bx lr
