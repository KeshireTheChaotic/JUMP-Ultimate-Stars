0205f4f8  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0205f4fc  sub sp,sp,#0x8
0205f500  ldr r5,[sp,#0x24]
0205f504  ldr lr,[sp,#0x20]
0205f508  cmp r5,#0x20
0205f50c  ldr r12,[sp,#0x28]
0205f510  bgt 0x0205f538
0205f514  mla r4,r5,lr,r3
0205f518  ldr lr,[sp,#0x2c]
0205f51c  str r12,[sp,#0x0]
0205f520  mov r3,r5
0205f524  add r0,r0,r4, lsl #0x1
0205f528  str lr,[sp,#0x4]
0205f52c  bl 0x0205f494
0205f530  add sp,sp,#0x8
0205f534  ldmia sp!,{r4,r5,r6,r7,r8,pc}
0205f538  ldr r4,[sp,#0x2c]
0205f53c  add r7,lr,r2
0205f540  mov r2,r4, lsl #0x1c
0205f544  cmp lr,r7
0205f548  add r8,r3,r1
0205f54c  mov r4,r2, lsr #0x10
0205f550  addge sp,sp,#0x8
0205f554  ldmiage sp!,{r4,r5,r6,r7,r8,pc}
0205f558  cmp lr,#0x20
0205f55c  movlt r1,lr
0205f560  addge r1,lr,#0x20
0205f564  mov r6,r3
0205f568  cmp r3,r8
0205f56c  add r5,r0,r1, lsl #0x6
0205f570  bge 0x0205f59c
0205f574  cmp r6,#0x20
0205f578  movlt r1,r6
0205f57c  addge r1,r6,#0x3e0
0205f580  orr r2,r4,r12
0205f584  mov r1,r1, lsl #0x1
0205f588  add r6,r6,#0x1
0205f58c  strh r2,[r5,r1]
0205f590  cmp r6,r8
0205f594  add r12,r12,#0x1
0205f598  blt 0x0205f574
0205f59c  add lr,lr,#0x1
0205f5a0  cmp lr,r7
0205f5a4  blt 0x0205f558
0205f5a8  add sp,sp,#0x8
0205f5ac  ldmia sp!,{r4,r5,r6,r7,r8,pc}
