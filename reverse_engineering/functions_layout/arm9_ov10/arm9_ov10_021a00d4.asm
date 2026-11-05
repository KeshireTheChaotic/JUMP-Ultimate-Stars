021a00d4  stmdb sp!,{r3,lr}
021a00d8  ldr r2,[0x21a010c]
021a00dc  ldr r2,[r2,#0x0]
021a00e0  cmp r2,#0x0
021a00e4  ldmiaeq sp!,{r3,pc}
021a00e8  mov r2,r1, lsl #0x18
021a00ec  mov r12,#0xff
021a00f0  mov r1,r0
021a00f4  mov r3,r2, asr #0x18
021a00f8  mov r0,#0x1b
021a00fc  mov r2,#0x5c
021a0100  str r12,[sp,#0x0]
021a0104  bl 0x0219f834
021a0108  ldmia sp!,{r3,pc}
