02025410  stmdb sp!,{r3,lr}
02025414  mov r0,r1
02025418  ldr r3,[r0,#0x0]
0202541c  ldrb r1,[r2,#0x0]
02025420  ldr r3,[r3,#0xd8]
02025424  blx r3
02025428  ldmia sp!,{r3,pc}
