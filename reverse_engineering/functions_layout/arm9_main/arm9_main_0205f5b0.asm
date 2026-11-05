0205f5b0  stmdb sp!,{r4,r5,r6,lr}
0205f5b4  sub sp,sp,#0x18
0205f5b8  cmp r2,#0x8
0205f5bc  movlt r4,r2
0205f5c0  movge r12,#0x3
0205f5c4  clzlt r4,r4
0205f5c8  rsblt r12,r4,#0x1f
0205f5cc  cmp r3,#0x8
0205f5d0  movlt r4,r3
0205f5d4  movge r6,#0x3
0205f5d8  clzlt r4,r4
0205f5dc  rsblt r6,r4,#0x1f
0205f5e0  ldr r4,[0x205f630]
0205f5e4  ldr r5,[sp,#0x28]
0205f5e8  add r4,r4,r6, lsl #0x3
0205f5ec  ldrb r6,[r4,r12,lsl #0x1]
0205f5f0  add r12,r4,r12, lsl #0x1
0205f5f4  ldr r4,[0x205f634]
0205f5f8  strb r6,[sp,#0x14]
0205f5fc  ldrb r6,[r12,#0x1]
0205f600  ldr lr,[0x205f638]
0205f604  ldr r12,[0x205f63c]
0205f608  strb r6,[sp,#0x15]
0205f60c  str r5,[sp,#0x0]
0205f610  str r4,[sp,#0x4]
0205f614  str lr,[sp,#0x8]
0205f618  str r12,[sp,#0xc]
0205f61c  ldr r12,[sp,#0x14]
0205f620  str r12,[sp,#0x10]
0205f624  bl 0x0205f740
0205f628  add sp,sp,#0x18
0205f62c  ldmia sp!,{r4,r5,r6,pc}
