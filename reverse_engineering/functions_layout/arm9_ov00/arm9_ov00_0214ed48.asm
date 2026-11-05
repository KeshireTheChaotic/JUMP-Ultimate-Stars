0214ed48  stmdb sp!,{r3,lr}
0214ed4c  ldr r2,[0x214ed78]
0214ed50  ldr r1,[0x214ed7c]
0214ed54  ldr r12,[r2,#0x0]
0214ed58  ldr lr,[r0,#0x4]
0214ed5c  ldr r3,[r1,#0x0]
0214ed60  sub r12,r12,#0x1
0214ed64  ldr r0,[0x214ed80]
0214ed68  str r12,[r2,#0x0]
0214ed6c  str r3,[r0,r12,lsl #0x2]
0214ed70  str lr,[r1,#0x0]
0214ed74  ldmia sp!,{r3,pc}
