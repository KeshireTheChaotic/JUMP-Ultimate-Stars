02054b18  ldr r1,[0x2054b30]
02054b1c  mov r2,#0x1
02054b20  ldrh r3,[r1,#0x0]
02054b24  orr r0,r3,r2, lsl r0
02054b28  strh r0,[r1,#0x0]
02054b2c  bx lr
