02153ad0  add r2,r0,r1, lsl #0x2
02153ad4  ldr r3,[r2,#0x43c]
02153ad8  mvn r2,#0x0
02153adc  cmp r3,r2
02153ae0  addeq r1,r0,r1
02153ae4  moveq r0,#0x0
02153ae8  strbeq r0,[r1,#0x546]
02153aec  moveq r0,#0x1
02153af0  strbeq r0,[r1,#0x54c]
02153af4  bx lr
