021587d8  ldr r0,[r0,#0x0]
021587dc  ldr r0,[r0,#0x4]
021587e0  ldr r0,[r0,#0x64]
021587e4  ldrb r0,[r0,#0x10]
021587e8  mov r1,r0, lsl #0x18
021587ec  movs r1,r1, lsr #0x1f
021587f0  beq 0x02158804
021587f4  mov r0,r0, lsl #0x1e
021587f8  movs r0,r0, lsr #0x1f
021587fc  movne r0,#0x1
02158800  bxne lr
02158804  mov r0,#0x0
02158808  bx lr
