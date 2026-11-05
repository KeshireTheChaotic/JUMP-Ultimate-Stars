0203cf64  push {r3,lr}
0203cf66  ldr r1,[r1,#0x8]
0203cf68  ldr r0,[r0,#0x8]
0203cf6a  ldrh r2,[r1,#0x14]
0203cf6c  cmp r2,#0x0
0203cf6e  beq 0x0203cf74
0203cf70  blx 0x0201e018
0203cf74  pop {r3,pc}
