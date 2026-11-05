02046da4  stmdb sp!,{r4,lr}
02046da8  mov r4,r0
02046dac  bl 0x02036810
02046db0  ldr r1,[0x2046dc0]
02046db4  mov r0,r4
02046db8  str r1,[r4,#0x0]
02046dbc  ldmia sp!,{r4,pc}
