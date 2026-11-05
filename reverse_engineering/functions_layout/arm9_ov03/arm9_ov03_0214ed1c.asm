0214ed1c  stmdb sp!,{r3,lr}
0214ed20  ldr r0,[r0,#0x5c]
0214ed24  cmp r0,#0x0
0214ed28  ldmiaeq sp!,{r3,pc}
0214ed2c  ldr r3,[0x214ed40]
0214ed30  mov r2,#0x0
0214ed34  ldr r1,[r3,r1,lsl #0x2]
0214ed38  blx 0x021bd730
0214ed3c  ldmia sp!,{r3,pc}
