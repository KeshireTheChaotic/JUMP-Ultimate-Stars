0214d0e8  stmdb sp!,{r4,r5,r6,lr}
0214d0ec  ldr r4,[0x214d148]
0214d0f0  ldrh r0,[r4,#0xa]
0214d0f4  cmp r0,#0x0
0214d0f8  moveq r0,#0x0
0214d0fc  ldmiaeq sp!,{r4,r5,r6,pc}
0214d100  mov r6,#0x1
0214d104  mov r5,r6
0214d108  b 0x0214d138
0214d10c  ldrh r0,[r4,#0xa]
0214d110  tst r0,r5, lsl r6
0214d114  beq 0x0214d12c
0214d118  mov r0,r6
0214d11c  blx 0x021bea98
0214d120  cmp r0,#0x0
0214d124  moveq r0,#0x0
0214d128  ldmiaeq sp!,{r4,r5,r6,pc}
0214d12c  add r0,r6,#0x1
0214d130  mov r0,r0, lsl #0x10
0214d134  mov r6,r0, lsr #0x10
0214d138  cmp r6,#0x10
0214d13c  bcc 0x0214d10c
0214d140  mov r0,#0x1
0214d144  ldmia sp!,{r4,r5,r6,pc}
