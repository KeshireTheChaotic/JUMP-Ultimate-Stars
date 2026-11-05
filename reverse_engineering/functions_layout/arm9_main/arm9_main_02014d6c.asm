02014d6c  ldrb r0,[r0,#0x10]
02014d70  mov r1,r0, lsl #0x18
02014d74  movs r1,r1, lsr #0x1f
02014d78  beq 0x02014d8c
02014d7c  mov r0,r0, lsl #0x1e
02014d80  movs r0,r0, lsr #0x1f
02014d84  movne r0,#0x1
02014d88  bxne lr
02014d8c  mov r0,#0x0
02014d90  bx lr
