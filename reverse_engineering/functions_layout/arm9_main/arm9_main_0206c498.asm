0206c498  stmdb sp!,{r3,lr}
0206c49c  ldr r2,[0x206c4c8]
0206c4a0  ldr r1,[0x206c4cc]
0206c4a4  ldr r12,[r2,#0x0]
0206c4a8  ldr lr,[r0,#0x4]
0206c4ac  ldr r3,[r1,#0x0]
0206c4b0  sub r12,r12,#0x1
0206c4b4  ldr r0,[0x206c4d0]
0206c4b8  str r12,[r2,#0x0]
0206c4bc  str r3,[r0,r12,lsl #0x2]
0206c4c0  str lr,[r1,#0x0]
0206c4c4  ldmia sp!,{r3,pc}
