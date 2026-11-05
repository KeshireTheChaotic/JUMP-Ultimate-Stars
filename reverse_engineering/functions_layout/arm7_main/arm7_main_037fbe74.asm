037fbe74  ldr r3,[0x37fbea0]
037fbe78  cmp r0,#0xa0
037fbe7c  addpl r3,r3,#0x4
037fbe80  subpl r0,r0,#0xa0
037fbe84  submi r0,r0,#0x80
037fbe88  mov r1,#0x80000000
037fbe8c  mov r1,r1, lsr r0
037fbe90  ldr r2,[r3,#0x0]
037fbe94  orr r2,r2,r1
037fbe98  str r2,[r3,#0x0]
037fbe9c  bx lr
