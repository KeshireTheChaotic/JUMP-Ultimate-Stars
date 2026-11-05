021ada10  ldr r0,[r0,#0x64]
021ada14  ldrb r0,[r0,#0x10]
021ada18  mov r1,r0, lsl #0x18
021ada1c  movs r1,r1, lsr #0x1f
021ada20  beq 0x021ada34
021ada24  mov r0,r0, lsl #0x1e
021ada28  movs r0,r0, lsr #0x1f
021ada2c  movne r0,#0x1
021ada30  bxne lr
021ada34  mov r0,#0x0
021ada38  bx lr
