0203d8b8  stmdb sp!,{r3,r4,r5,lr}
0203d8bc  mov r5,r0
0203d8c0  mov r4,r1
0203d8c4  bl 0x0203c0dc
0203d8c8  ldr r1,[0x203d8f8]
0203d8cc  mov r0,r5
0203d8d0  str r1,[r5,#0x0]
0203d8d4  ldr r1,[r0,#0x0]
0203d8d8  ldr r1,[r1,#0x8c]
0203d8dc  blx r1
0203d8e0  ldr r0,[0x203d8fc]
0203d8e4  add r1,r4,#0x30
0203d8e8  orr r1,r0,r1, lsl #0x10
0203d8ec  mov r0,r5
0203d8f0  str r1,[r5,#0x48]
0203d8f4  ldmia sp!,{r3,r4,r5,pc}
