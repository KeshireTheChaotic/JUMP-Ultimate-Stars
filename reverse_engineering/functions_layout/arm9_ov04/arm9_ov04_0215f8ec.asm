0215f8ec  stmdb sp!,{r3,r4,r5,lr}
0215f8f0  mov r5,r0
0215f8f4  ldrsh r2,[r5,#0xf4]
0215f8f8  mov r0,#0x64
0215f8fc  mov r1,#0x3c
0215f900  smulbb r0,r2,r0
0215f904  bl 0x0200d12c
0215f908  mov r0,r0, lsl #0x10
0215f90c  mov r4,r0, asr #0x10
0215f910  ldr r0,[r5,#0xb4]
0215f914  mov r1,r4
0215f918  bl 0x02154d28
0215f91c  ldr r0,[r5,#0xbc]
0215f920  mov r1,r4
0215f924  bl 0x0215526c
0215f928  ldr r0,[r5,#0xb8]
0215f92c  mov r1,r4
0215f930  bl 0x02154f8c
0215f934  ldmia sp!,{r3,r4,r5,pc}
