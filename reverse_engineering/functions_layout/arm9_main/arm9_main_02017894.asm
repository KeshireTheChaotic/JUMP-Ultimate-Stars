02017894  stmdb sp!,{r4,lr}
02017898  mov r4,r0
0201789c  muls r2,r1,r2
020178a0  ldmiaeq sp!,{r4,pc}
020178a4  mov r0,r2, lsr #0x1
020178a8  bl 0x0201a228
020178ac  str r0,[r4,#0xc]
020178b0  mov r0,#0x1
020178b4  strb r0,[r4,#0x10]
020178b8  ldmia sp!,{r4,pc}
