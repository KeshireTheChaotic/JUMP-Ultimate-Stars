0214dce0  cmp r0,#0x0
0214dce4  beq 0x0214dcf4
0214dce8  ldr r1,[r0,#0x0]
0214dcec  ldr r1,[r1,#0xc]
0214dcf0  blx r1
0214dcf4  mvn r0,#0x0
0214dcf8  blx 0x02064790
