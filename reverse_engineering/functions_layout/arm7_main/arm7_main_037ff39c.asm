037ff39c  cmp r0,#0x20
037ff3a0  ldrlt r1,[0x37ff404]
037ff3a4  ldrsblt r0,[r1,r0]
037ff3a8  bxlt lr
037ff3ac  cmp r0,#0x40
037ff3b0  rsblt r1,r0,#0x40
037ff3b4  ldrlt r0,[0x37ff404]
037ff3b8  ldrsblt r0,[r0,r1]
037ff3bc  bxlt lr
037ff3c0  cmp r0,#0x60
037ff3c4  bge 0x037ff3e4
037ff3c8  sub r1,r0,#0x40
037ff3cc  ldr r0,[0x37ff404]
037ff3d0  ldrsb r0,[r0,r1]
037ff3d4  rsb r0,r0,#0x0
037ff3d8  mov r0,r0, lsl #0x18
037ff3dc  mov r0,r0, asr #0x18
037ff3e0  bx lr
037ff3e4  sub r0,r0,#0x60
037ff3e8  rsb r1,r0,#0x20
037ff3ec  ldr r0,[0x37ff404]
037ff3f0  ldrsb r0,[r0,r1]
037ff3f4  rsb r0,r0,#0x0
037ff3f8  mov r0,r0, lsl #0x18
037ff3fc  mov r0,r0, asr #0x18
037ff400  bx lr
