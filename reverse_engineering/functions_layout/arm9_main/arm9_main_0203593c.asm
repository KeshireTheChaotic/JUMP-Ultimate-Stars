0203593c  stmdb sp!,{r3,lr}
02035940  cmp r0,#0x0
02035944  ldmiaeq sp!,{r3,pc}
02035948  ldr r1,[r0,#0x0]
0203594c  ldr r1,[r1,#0x4]
02035950  blx r1
02035954  ldmia sp!,{r3,pc}
