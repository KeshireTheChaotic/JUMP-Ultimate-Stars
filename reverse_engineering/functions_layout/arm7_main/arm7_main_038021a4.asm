038021a4  ldr r2,[0x38021c0]
038021a8  mov r1,#0x24
038021ac  mul r1,r0,r1
038021b0  ldrb r0,[r2,r1]
038021b4  orr r0,r0,#0x2
038021b8  strb r0,[r2,r1]
038021bc  bx lr
