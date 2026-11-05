02155b04  ldr r3,[r0,#0x4]
02155b08  mov r0,#0x1
02155b0c  mvn r1,r0, lsl r1
02155b10  ldr r2,[r3,#0x8bc]
02155b14  and r1,r2,r1
02155b18  str r1,[r3,#0x8bc]
02155b1c  strb r0,[r3,#0x901]
02155b20  bx lr
