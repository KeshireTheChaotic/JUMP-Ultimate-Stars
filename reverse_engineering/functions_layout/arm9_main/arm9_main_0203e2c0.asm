0203e2c0  stmdb sp!,{r3,r4,r5,lr}
0203e2c4  mov r5,r0
0203e2c8  mov r4,r1
0203e2cc  bl 0x0203c0dc
0203e2d0  ldr r1,[0x203e300]
0203e2d4  mov r0,r5
0203e2d8  str r1,[r5,#0x0]
0203e2dc  ldr r1,[r0,#0x0]
0203e2e0  ldr r1,[r1,#0x8c]
0203e2e4  blx r1
0203e2e8  ldr r0,[0x203e304]
0203e2ec  add r1,r4,#0x30
0203e2f0  orr r1,r0,r1, lsl #0x10
0203e2f4  mov r0,r5
0203e2f8  str r1,[r5,#0x48]
0203e2fc  ldmia sp!,{r3,r4,r5,pc}
