0206c54c  ldr r1,[0x206c570]
0206c550  ldr r2,[0x206c574]
0206c554  ldr r3,[r1,#0x0]
0206c558  ldr r0,[0x206c578]
0206c55c  ldr r2,[r2,r3,lsl #0x2]
0206c560  add r3,r3,#0x1
0206c564  str r3,[r1,#0x0]
0206c568  str r2,[r0,#0x0]
0206c56c  bx lr
