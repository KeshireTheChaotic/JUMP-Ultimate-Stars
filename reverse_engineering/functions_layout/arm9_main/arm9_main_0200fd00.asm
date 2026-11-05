0200fd00  push {r3,lr}
0200fd02  ldr r0,[r0,#0x1c]
0200fd04  mov r1,#0x0
0200fd06  ldr r2,[r0,#0x0]
0200fd08  ldr r2,[r2,#0x2c]
0200fd0a  blx r2
0200fd0c  ldr r0,[r0,#0x8]
0200fd0e  pop {r3,pc}
