0200ff9c  push {r4,lr}
0200ff9e  add r4,r0,#0x0
0200ffa0  ldr r1,[r4,#0x34]
0200ffa2  cmp r1,#0x0
0200ffa4  bne 0x0200ffaa
0200ffa6  bl 0x0200fe14
0200ffaa  ldr r0,[r4,#0x34]
0200ffac  pop {r4,pc}
