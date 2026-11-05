02029c68  stmdb sp!,{r4,lr}
02029c6c  mov r4,r0
02029c70  ldr r12,[r4,#0x10]
02029c74  mov r0,r1
02029c78  add r1,r12,r2, lsl #0x1
02029c7c  mov r2,r3, lsl #0x1
02029c80  bl 0x02051730
02029c84  mov r0,r4
02029c88  bl 0x02029dc4
02029c8c  mov r0,#0x1
02029c90  strb r0,[r4,#0x1c]
02029c94  mov r0,#0x0
02029c98  strb r0,[r4,#0xf]
02029c9c  ldmia sp!,{r4,pc}
