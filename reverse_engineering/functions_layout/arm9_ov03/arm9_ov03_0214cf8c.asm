0214cf8c  stmdb sp!,{r3,lr}
0214cf90  ldr r2,[0x214cfbc]
0214cf94  ldr r1,[0x214cfc0]
0214cf98  ldr r12,[r2,#0x0]
0214cf9c  ldr lr,[r0,#0x4]
0214cfa0  ldr r3,[r1,#0x0]
0214cfa4  sub r12,r12,#0x1
0214cfa8  ldr r0,[0x214cfc4]
0214cfac  str r12,[r2,#0x0]
0214cfb0  str r3,[r0,r12,lsl #0x2]
0214cfb4  str lr,[r1,#0x0]
0214cfb8  ldmia sp!,{r3,pc}
