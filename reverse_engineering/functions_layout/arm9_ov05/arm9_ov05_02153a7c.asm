02153a7c  mov r3,#0x0
02153a80  mvn r2,#0x0
02153a84  add r1,r0,r3, lsl #0x2
02153a88  add r3,r3,#0x1
02153a8c  str r2,[r1,#0x43c]
02153a90  cmp r3,#0x5
02153a94  ble 0x02153a84
02153a98  bx lr
