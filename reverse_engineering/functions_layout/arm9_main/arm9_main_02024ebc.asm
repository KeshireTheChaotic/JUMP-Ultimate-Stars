02024ebc  stmdb sp!,{r4,lr}
02024ec0  ldr r0,[r1,#0x64]
02024ec4  mov r4,r2
02024ec8  ldr r0,[r0,#0x20]
02024ecc  bl 0x020193f8
02024ed0  str r0,[r4,#0x0]
02024ed4  ldmia sp!,{r4,pc}
