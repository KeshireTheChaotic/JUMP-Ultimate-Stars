0214f7f8  stmdb sp!,{r3,lr}
0214f7fc  ldr r2,[0x214f828]
0214f800  ldr r1,[0x214f82c]
0214f804  ldr r12,[r2,#0x0]
0214f808  ldr lr,[r0,#0x4]
0214f80c  ldr r3,[r1,#0x0]
0214f810  sub r12,r12,#0x1
0214f814  ldr r0,[0x214f830]
0214f818  str r12,[r2,#0x0]
0214f81c  str r3,[r0,r12,lsl #0x2]
0214f820  str lr,[r1,#0x0]
0214f824  ldmia sp!,{r3,pc}
