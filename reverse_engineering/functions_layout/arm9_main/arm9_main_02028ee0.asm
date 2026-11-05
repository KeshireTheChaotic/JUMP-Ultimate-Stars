02028ee0  stmdb sp!,{r4,r5,r6,lr}
02028ee4  mov r6,#0x0
02028ee8  ldr r5,[0x2028f1c]
02028eec  ldr r4,[0x2028f20]
02028ef0  b 0x02028f0c
02028ef4  ldr r0,[r5,r6,lsl #0x2]
02028ef8  cmp r0,#0x0
02028efc  beq 0x02028f08
02028f00  ldr r0,[r0,#0x0]
02028f04  bl 0x02028f68
02028f08  add r6,r6,#0x1
02028f0c  ldr r0,[r4,#0x90]
02028f10  cmp r6,r0
02028f14  bcc 0x02028ef4
02028f18  ldmia sp!,{r4,r5,r6,pc}
