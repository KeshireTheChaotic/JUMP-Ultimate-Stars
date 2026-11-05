02020c78  ldr r1,[0x2020cc4]
02020c7c  mov r12,#0x0
02020c80  ldr r2,[r1,#0x1c4]
02020c84  ldr r3,[0x2020cc8]
02020c88  b 0x02020cb8
02020c8c  ldr r1,[r3,r12,lsl #0x2]
02020c90  cmp r1,r0
02020c94  bne 0x02020cb4
02020c98  ldr r0,[0x2020cc4]
02020c9c  ldr r1,[r0,#0x1c4]
02020ca0  sub r2,r1,#0x1
02020ca4  ldr r1,[r3,r2,lsl #0x2]
02020ca8  str r2,[r0,#0x1c4]
02020cac  str r1,[r3,r12,lsl #0x2]
02020cb0  bx lr
02020cb4  add r12,r12,#0x1
02020cb8  cmp r12,r2
02020cbc  bcc 0x02020c8c
02020cc0  bx lr
