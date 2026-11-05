02020c50  ldr r2,[0x2020c70]
02020c54  ldr r12,[0x2020c74]
02020c58  ldr r3,[r2,#0x1c4]
02020c5c  str r0,[r12,r1,lsl #0x2]
02020c60  cmp r1,r3
02020c64  addcs r0,r1,#0x1
02020c68  strcs r0,[r2,#0x1c4]
02020c6c  bx lr
