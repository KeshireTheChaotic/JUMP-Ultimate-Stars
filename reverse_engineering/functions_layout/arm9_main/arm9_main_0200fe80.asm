0200fe80  push {r4,lr}
0200fe82  add r4,r0,#0x0
0200fe84  ldr r1,[r4,#0x34]
0200fe86  cmp r1,#0x0
0200fe88  bne 0x0200fe8e
0200fe8a  bl 0x0200fe14
0200fe8e  ldr r0,[r4,#0x34]
0200fe90  pop {r4,pc}
