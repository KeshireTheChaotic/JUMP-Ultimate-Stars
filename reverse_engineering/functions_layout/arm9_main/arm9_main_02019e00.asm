02019e00  stmdb sp!,{r4,lr}
02019e04  mov r4,r0
02019e08  bl 0x02019490
02019e0c  ldr r1,[0x2019e1c]
02019e10  mov r0,r4
02019e14  str r1,[r4,#0x0]
02019e18  ldmia sp!,{r4,pc}
