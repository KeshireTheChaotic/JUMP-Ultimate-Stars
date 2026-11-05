02154ac4  mov r3,#0x0
02154ac8  mvn r2,#0x0
02154acc  add r1,r0,r3, lsl #0x2
02154ad0  add r3,r3,#0x1
02154ad4  str r2,[r1,#0x44]
02154ad8  cmp r3,#0x4
02154adc  blt 0x02154acc
02154ae0  bx lr
