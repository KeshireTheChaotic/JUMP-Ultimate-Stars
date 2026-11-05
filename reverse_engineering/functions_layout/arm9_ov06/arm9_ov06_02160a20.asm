02160a20  stmdb sp!,{r3,lr}
02160a24  cmp r1,#0x0
02160a28  moveq r0,#0x0
02160a2c  ldmiaeq sp!,{r3,pc}
02160a30  cmp r0,r1
02160a34  movgt r0,r1
02160a38  rsb r0,r0,r0, lsl #0x3
02160a3c  bl 0x0200d12c
02160a40  and r0,r0,#0xff
02160a44  ldmia sp!,{r3,pc}
