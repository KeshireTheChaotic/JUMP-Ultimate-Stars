02076d30  stmdb sp!,{r4,r5,r6,lr}
02076d34  mov r5,r2
02076d38  mov r6,r0
02076d3c  cmp r5,#0x5
02076d40  mov r4,r3
02076d44  movcs r0,#0x0
02076d48  ldmiacs sp!,{r4,r5,r6,pc}
02076d4c  cmp r4,#0x4
02076d50  movcs r0,#0x0
02076d54  ldmiacs sp!,{r4,r5,r6,pc}
02076d58  bl 0x02076c98
02076d5c  cmp r0,#0x0
02076d60  moveq r0,#0x0
02076d64  ldmiaeq sp!,{r4,r5,r6,pc}
02076d68  bl 0x02076d00
02076d6c  ldr r0,[r0,#0x14]
02076d70  mov r3,r0, lsr #0x5
02076d74  mov r2,r0, lsr #0xa
02076d78  mov r1,r0, lsr #0xf
02076d7c  and r12,r0,#0x1f
02076d80  and r3,r3,#0x1f
02076d84  orr r3,r12,r3
02076d88  and r2,r2,#0x1f
02076d8c  orr r2,r3,r2
02076d90  and r1,r1,#0x1f
02076d94  orr r1,r2,r1
02076d98  mov r1,r1, lsl r5
02076d9c  bics r1,r1,#0x1f
02076da0  movne r0,#0x0
02076da4  ldmiane sp!,{r4,r5,r6,pc}
02076da8  add r1,r4,r4, lsl #0x2
02076dac  add r2,r5,r1
02076db0  mov r1,#0x100000
02076db4  mov r0,r0, lsl r2
02076db8  rsb r1,r1,#0x0
02076dbc  tst r0,r1
02076dc0  movne r0,#0x0
02076dc4  ldmiane sp!,{r4,r5,r6,pc}
02076dc8  ldr r1,[r6,#0x568]
02076dcc  tst r1,r0
02076dd0  movne r0,#0x0
02076dd4  ldmia sp!,{r4,r5,r6,pc}
