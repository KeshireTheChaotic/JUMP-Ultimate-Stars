0206c068  push {r3,lr}
0206c06a  ldr r2,[r1,#0x4]
0206c06c  ldr r1,[r0,#0xc]
0206c06e  add r1,r2,r1
0206c070  ldr r2,[r0,#0x14]
0206c072  blx r2
0206c074  mov r0,#0x1
0206c076  pop {r3,pc}
