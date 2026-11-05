0214d614  stmdb sp!,{r3,lr}
0214d618  ldr r2,[0x214d644]
0214d61c  ldr r1,[0x214d648]
0214d620  ldr r12,[r2,#0x0]
0214d624  ldr lr,[r0,#0x4]
0214d628  ldr r3,[r1,#0x0]
0214d62c  sub r12,r12,#0x1
0214d630  ldr r0,[0x214d64c]
0214d634  str r12,[r2,#0x0]
0214d638  str r3,[r0,r12,lsl #0x2]
0214d63c  str lr,[r1,#0x0]
0214d640  ldmia sp!,{r3,pc}
