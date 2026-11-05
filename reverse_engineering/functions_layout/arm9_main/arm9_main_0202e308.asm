0202e308  stmdb sp!,{r3,lr}
0202e30c  ldr r2,[r0,#0x0]
0202e310  ldr r2,[r2,#0x1c]
0202e314  blx r2
0202e318  mov r1,#0x0
0202e31c  bl 0x0203837c
0202e320  ldmia sp!,{r3,pc}
