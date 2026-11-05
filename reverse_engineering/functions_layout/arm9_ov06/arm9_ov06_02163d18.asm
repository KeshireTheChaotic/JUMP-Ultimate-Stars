02163d18  ldr r0,[r0,#0x10]
02163d1c  ldr r0,[r0,#0x40]
02163d20  tst r0,#0x10
02163d24  movne r0,#0x1
02163d28  moveq r0,#0x0
02163d2c  bx lr
