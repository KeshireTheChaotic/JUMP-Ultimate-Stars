02165d48  stmdb sp!,{r3,lr}
02165d4c  ldr r2,[r0,#0x4]
02165d50  ldr r3,[r2,#0x10]
02165d54  ldr r2,[r3,#0x1c]
02165d58  cmp r2,r1
02165d5c  ldmiaeq sp!,{r3,pc}
02165d60  ldr r2,[0x2165d78]
02165d64  str r1,[r3,#0x1c]
02165d68  ldr r0,[r0,#0x4]
02165d6c  ldr r1,[r2,r1,lsl #0x2]
02165d70  bl 0x02028384
02165d74  ldmia sp!,{r3,pc}
