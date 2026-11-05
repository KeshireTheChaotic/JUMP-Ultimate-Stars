02028488  stmdb sp!,{r3,lr}
0202848c  ldr lr,[r0,#0x208]
02028490  add r2,r0,lr, lsl #0x2
02028494  ldr r12,[r2,#0x200]
02028498  cmp r12,#0x40
0202849c  ldmiage sp!,{r3,pc}
020284a0  add r3,r0,#0x200
020284a4  ldr r2,[r3,lr,lsl #0x2]
020284a8  add r2,r2,#0x1
020284ac  str r2,[r3,lr,lsl #0x2]
020284b0  ldr r2,[r0,#0x208]
020284b4  add r0,r0,r2, lsl #0x8
020284b8  str r1,[r0,r12,lsl #0x2]
020284bc  ldmia sp!,{r3,pc}
