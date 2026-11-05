021583e8  stmdb sp!,{r3,lr}
021583ec  cmp r0,#0x0
021583f0  ldmiaeq sp!,{r3,pc}
021583f4  add r0,r0,r1, lsl #0x2
021583f8  ldr r0,[r0,#0x4]
021583fc  mov r1,r2
02158400  bl 0x02157f48
02158404  ldmia sp!,{r3,pc}
