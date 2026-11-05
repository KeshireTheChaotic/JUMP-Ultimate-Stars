0206f068  stmdb sp!,{r3,lr}
0206f06c  bl 0x020704a8
0206f070  ldr r0,[0x206f084]
0206f074  ldr r0,[r0,#0xa0]
0206f078  and r0,r0,#0xff
0206f07c  bl 0x0214cd20
0206f080  ldmia sp!,{r3,pc}
