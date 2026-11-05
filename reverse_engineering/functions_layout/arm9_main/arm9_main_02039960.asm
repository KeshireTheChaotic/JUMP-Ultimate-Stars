02039960  stmdb sp!,{r4,lr}
02039964  ldr r3,[r0,#0x0]
02039968  mov r4,r0
0203996c  ldr r3,[r3,#0x2c]
02039970  blx r3
02039974  ldr r1,[r4,#0x20]
02039978  mov r0,r0, lsl #0x1
0203997c  ldr r1,[r1,#0x10]
02039980  ldrh r0,[r1,r0]
02039984  ldmia sp!,{r4,pc}
