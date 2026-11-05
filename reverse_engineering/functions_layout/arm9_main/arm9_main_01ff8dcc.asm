01ff8dcc  stmdb sp!,{lr}
01ff8dd0  mov r12,#0x4000000
01ff8dd4  add r12,r12,#0x210
01ff8dd8  ldr r1,[r12,#-0x8]
01ff8ddc  cmp r1,#0x0
01ff8de0  ldmiaeq sp!,{pc}
01ff8de4  ldmia r12,{r1,r2}
01ff8de8  ands r1,r1,r2
01ff8dec  ldmiaeq sp!,{pc}
01ff8df0  mov r3,#0x80000000
01ff8df4  clz r0,r1
01ff8df8  bics r1,r1,r3, lsr r0
01ff8dfc  bne 0x01ff8df4
01ff8e00  mov r1,r3, lsr r0
01ff8e04  str r1,[r12,#0x4]
01ff8e08  rsbs r0,r0,#0x1f
01ff8e0c  ldr r1,[0x1ff8e1c]
01ff8e10  ldr r0,[r1,r0,lsl #0x2]
01ff8e14  ldr lr,[0x1ff8e20]
01ff8e18  bx r0
