021b539c  stmdb sp!,{r3,lr}
021b53a0  ldr r0,[r0,#0x4]
021b53a4  ldr r0,[r0,#0x44]
021b53a8  cmp r0,#0x0
021b53ac  moveq r0,#0x0
021b53b0  ldmiaeq sp!,{r3,pc}
021b53b4  bl 0x021acab4
021b53b8  ldmia sp!,{r3,pc}
