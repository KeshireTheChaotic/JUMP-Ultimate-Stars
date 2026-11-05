0215ead4  ldr r0,[r0,#0x10]
0215ead8  ldr r0,[r0,#0x40]
0215eadc  tst r0,#0x1000
0215eae0  movne r0,#0x1
0215eae4  moveq r0,#0x0
0215eae8  bx lr
