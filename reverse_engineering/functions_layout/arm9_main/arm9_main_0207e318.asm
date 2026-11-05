0207e318  stmdb sp!,{r4,lr}
0207e31c  ldr r4,[r0,#0xf8]
0207e320  mov r0,r4
0207e324  bl 0x02161bac
0207e328  ldr r1,[r4,#0x14]
0207e32c  mov r0,r0, lsl #0x3
0207e330  ldrsh r0,[r1,r0]
0207e334  ldmia sp!,{r4,pc}
