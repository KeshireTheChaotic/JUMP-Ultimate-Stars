0208c11c  push {r3,lr}
0208c11e  bl 0x02089b4c
0208c122  ldr r1,[0x0208c130]
0208c124  ldr r1,[r1,#0xc]
0208c126  add r1,r1,r0
0208c128  mov r0,#0x30
0208c12a  ldrsb r0,[r1,r0]
0208c12c  pop {r3,pc}
