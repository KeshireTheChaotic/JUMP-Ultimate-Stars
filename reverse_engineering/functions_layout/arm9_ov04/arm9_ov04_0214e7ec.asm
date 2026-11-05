0214e7ec  stmdb sp!,{r3,lr}
0214e7f0  ldr r2,[0x214e81c]
0214e7f4  ldr r1,[0x214e820]
0214e7f8  ldr r12,[r2,#0x0]
0214e7fc  ldr lr,[r0,#0x4]
0214e800  ldr r3,[r1,#0x0]
0214e804  sub r12,r12,#0x1
0214e808  ldr r0,[0x214e824]
0214e80c  str r12,[r2,#0x0]
0214e810  str r3,[r0,r12,lsl #0x2]
0214e814  str lr,[r1,#0x0]
0214e818  ldmia sp!,{r3,pc}
