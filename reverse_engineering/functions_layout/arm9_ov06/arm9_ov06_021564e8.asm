021564e8  ldr r0,[r0,#0x7c]
021564ec  ldr r0,[r0,#0x10]
021564f0  ldr r0,[r0,#0x40]
021564f4  tst r0,#0x20000
021564f8  movne r0,#0x1
021564fc  moveq r0,#0x0
02156500  bx lr
