021574f4  stmdb sp!,{r3,lr}
021574f8  ldr r0,[r0,#0x4]
021574fc  mov r2,#0x0
02157500  ldr r3,[r0,#0x0]
02157504  ldr r3,[r3,#0x1a0]
02157508  blx r3
0215750c  ldmia sp!,{r3,pc}
