0214d8d8  stmdb sp!,{r3,lr}
0214d8dc  ldr r1,[0x214d8f4]
0214d8e0  ldrb r0,[r1,r0]
0214d8e4  bl 0x020703b8
0214d8e8  add r0,r0,#0x1
0214d8ec  and r0,r0,#0xff
0214d8f0  ldmia sp!,{r3,pc}
