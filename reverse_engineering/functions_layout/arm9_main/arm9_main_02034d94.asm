02034d94  stmdb sp!,{r4,lr}
02034d98  mov r4,r0
02034d9c  ldr r0,[r4,#0x4]
02034da0  ldr r2,[r0,#0x0]
02034da4  ldr r2,[r2,#0x34]
02034da8  blx r2
02034dac  str r0,[r4,#0x4]
02034db0  ldmia sp!,{r4,pc}
