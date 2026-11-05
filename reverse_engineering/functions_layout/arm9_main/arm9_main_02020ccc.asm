02020ccc  ldr r1,[0x2020d14]
02020cd0  mov r3,#0x0
02020cd4  ldr r12,[r1,#0x1c4]
02020cd8  ldr r2,[0x2020d18]
02020cdc  b 0x02020cf0
02020ce0  ldr r1,[r2,r3,lsl #0x2]
02020ce4  cmp r1,r0
02020ce8  bxeq lr
02020cec  add r3,r3,#0x1
02020cf0  cmp r3,r12
02020cf4  bcc 0x02020ce0
02020cf8  ldr r1,[0x2020d14]
02020cfc  ldr r2,[0x2020d18]
02020d00  ldr r3,[r1,#0x1c4]
02020d04  str r0,[r2,r12,lsl #0x2]
02020d08  add r0,r3,#0x1
02020d0c  str r0,[r1,#0x1c4]
02020d10  bx lr
