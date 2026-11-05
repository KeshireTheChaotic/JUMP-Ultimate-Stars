02039d90  stmdb sp!,{r4,lr}
02039d94  ldrh r12,[r0,#0x8]
02039d98  mov lr,r2, lsr #0x3
02039d9c  and r4,r1,#0x7
02039da0  mov r12,r12, lsr #0x3
02039da4  mul r12,lr,r12
02039da8  add r1,r12,r1, lsr #0x3
02039dac  mov r2,r2, lsl #0x1d
02039db0  add r1,r4,r1, lsl #0x6
02039db4  ldr r4,[r0,#0xc]
02039db8  add r0,r1,r2, lsr #0x1a
02039dbc  strb r3,[r4,r0]
02039dc0  ldmia sp!,{r4,pc}
