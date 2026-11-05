02028f24  stmdb sp!,{r4,r5,r6,lr}
02028f28  mov r6,#0x0
02028f2c  ldr r5,[0x2028f60]
02028f30  ldr r4,[0x2028f64]
02028f34  b 0x02028f50
02028f38  ldr r0,[r5,r6,lsl #0x2]
02028f3c  cmp r0,#0x0
02028f40  beq 0x02028f4c
02028f44  ldr r0,[r0,#0x0]
02028f48  bl 0x02028f98
02028f4c  add r6,r6,#0x1
02028f50  ldr r0,[r4,#0x90]
02028f54  cmp r6,r0
02028f58  bcc 0x02028f38
02028f5c  ldmia sp!,{r4,r5,r6,pc}
