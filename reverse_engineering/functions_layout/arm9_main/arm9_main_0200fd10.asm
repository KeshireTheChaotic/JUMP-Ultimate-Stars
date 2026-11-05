0200fd10  push {r3,lr}
0200fd12  ldr r0,[r0,#0x1c]
0200fd14  mov r1,#0x0
0200fd16  ldr r2,[r0,#0x0]
0200fd18  ldr r2,[r2,#0x2c]
0200fd1a  blx r2
0200fd1c  ldr r0,[r0,#0xc]
0200fd1e  pop {r3,pc}
