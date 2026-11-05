020250c0  stmdb sp!,{r3,lr}
020250c4  ldr r2,[0x20250ec]
020250c8  ldr r1,[0x20250f0]
020250cc  ldr r3,[r2,#0x48]
020250d0  ldr r12,[r1,#0x19c]
020250d4  sub lr,r3,#0x1
020250d8  ldr r3,[0x20250f4]
020250dc  str lr,[r2,#0x48]
020250e0  str r12,[r3,lr,lsl #0x2]
020250e4  str r0,[r1,#0x19c]
020250e8  ldmia sp!,{r3,pc}
