0206ce84  stmdb sp!,{r4,lr}
0206ce88  ldr r1,[r1,#0x64]
0206ce8c  mov r4,r0
0206ce90  ldrh r0,[r1,#0x26]
0206ce94  mov r1,#0x3fc0
0206ce98  mov r0,r0, lsl #0x12
0206ce9c  str r0,[r4,#0x0]
0206cea0  bl 0x0200d12c
0206cea4  str r0,[r4,#0x0]
0206cea8  ldmia sp!,{r4,pc}
