02078cb8  ldrb r0,[r0,#0xb]
02078cbc  mov r0,r0, asr #0x4
02078cc0  and r0,r0,#0xf
02078cc4  cmp r0,#0x3
02078cc8  movne r0,#0x1
02078ccc  moveq r0,#0x0
02078cd0  bx lr
