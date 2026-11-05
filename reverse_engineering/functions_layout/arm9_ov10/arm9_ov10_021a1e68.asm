021a1e68  stmdb sp!,{r3,r4,r5,lr}
021a1e6c  mov r4,r1
021a1e70  mov r5,r0
021a1e74  bl 0x021a1f98
021a1e78  cmp r0,r4
021a1e7c  ldmiaeq sp!,{r3,r4,r5,pc}
021a1e80  ldrb r1,[r5,#0x35]
021a1e84  and r0,r4,#0xff
021a1e88  mov r0,r0, lsl #0x1f
021a1e8c  bic r1,r1,#0x4
021a1e90  orr r2,r1,r0, lsr #0x1d
021a1e94  mov r0,r5
021a1e98  mov r1,#0x50
021a1e9c  strb r2,[r5,#0x35]
021a1ea0  blx 0x021782b4
021a1ea4  ldmia sp!,{r3,r4,r5,pc}
