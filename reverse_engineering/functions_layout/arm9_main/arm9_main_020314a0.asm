020314a0  stmdb sp!,{r3,lr}
020314a4  ldr r1,[0x20314bc]
020314a8  cmp r0,#0x0
020314ac  str r0,[r1,#0x24c]
020314b0  ldmiaeq sp!,{r3,pc}
020314b4  bl 0x0203141c
020314b8  ldmia sp!,{r3,pc}
