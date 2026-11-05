0201b448  push {r3,lr}
0201b44a  ldr r0,[r0,#0x14]
0201b44c  cmp r0,#0x0
0201b44e  beq 0x0201b456
0201b450  blx 0x0201b45c
0201b454  pop {r3,pc}
0201b456  mov r0,#0x0
0201b458  pop {r3,pc}
