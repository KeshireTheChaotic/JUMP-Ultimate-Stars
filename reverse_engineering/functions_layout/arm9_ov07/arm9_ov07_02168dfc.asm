02168dfc  stmdb sp!,{r3,lr}
02168e00  mov r3,#0x8
02168e04  sub r1,r3,#0x10
02168e08  ldr r0,[0x2168e1c]
02168e0c  mov r2,r1
02168e10  str r3,[sp,#0x0]
02168e14  bl 0x021502ec
02168e18  ldmia sp!,{r3,pc}
