0203f0dc  stmdb sp!,{r4,lr}
0203f0e0  mov r2,#0x0
0203f0e4  mov r4,r0
0203f0e8  bl 0x0203f100
0203f0ec  ldr r1,[0x203f0fc]
0203f0f0  mov r0,r4
0203f0f4  str r1,[r4,#0x0]
0203f0f8  ldmia sp!,{r4,pc}
