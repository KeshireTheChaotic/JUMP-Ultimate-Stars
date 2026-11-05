02159c04  stmdb sp!,{r3,lr}
02159c08  cmp r0,#0x0
02159c0c  ldmiaeq sp!,{r3,pc}
02159c10  ldr r12,[0x2159c34]
02159c14  mov r3,#0xc
02159c18  mla r3,r1,r3,r12
02159c1c  ldr r1,[r3,r2,lsl #0x2]
02159c20  cmp r1,#0x0
02159c24  ldmialt sp!,{r3,pc}
02159c28  mov r2,#0x0
02159c2c  blx 0x021bd730
02159c30  ldmia sp!,{r3,pc}
