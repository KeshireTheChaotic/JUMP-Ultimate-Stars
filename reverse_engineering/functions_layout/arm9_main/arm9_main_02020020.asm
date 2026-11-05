02020020  stmdb sp!,{r3,lr}
02020024  ldr r1,[r0,#0x0]
02020028  ldr r1,[r1,#0xd0]
0202002c  blx r1
02020030  bl 0x0201e6d4
02020034  ldrb r0,[r0,#0x6]
02020038  ldmia sp!,{r3,pc}
