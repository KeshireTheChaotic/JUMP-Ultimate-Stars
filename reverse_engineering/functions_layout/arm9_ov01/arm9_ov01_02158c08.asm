02158c08  ldr r0,[r0,#0x4]
02158c0c  ldr r0,[r0,#0x64]
02158c10  ldrb r0,[r0,#0x10]
02158c14  mov r1,r0, lsl #0x18
02158c18  movs r1,r1, lsr #0x1f
02158c1c  beq 0x02158c30
02158c20  mov r0,r0, lsl #0x1e
02158c24  movs r0,r0, lsr #0x1f
02158c28  movne r0,#0x1
02158c2c  bxne lr
02158c30  mov r0,#0x0
02158c34  bx lr
