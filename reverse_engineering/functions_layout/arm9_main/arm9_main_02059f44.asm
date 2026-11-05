02059f44  stmdb sp!,{r4,r5,r6,r7,lr}
02059f48  sub sp,sp,#0x4
02059f4c  mov r7,r0
02059f50  mov r3,r1
02059f54  mov r0,#0x1
02059f58  mov r0,r0, lsl r3
02059f5c  add r12,r7,#0x800
02059f60  mov r0,r0, lsl #0x10
02059f64  ldrh r1,[r12,#0xe]
02059f68  mov r5,r0, lsr #0x10
02059f6c  mov r6,r2
02059f70  ands r0,r1,r5
02059f74  addeq sp,sp,#0x4
02059f78  ldmiaeq sp!,{r4,r5,r6,r7,lr}
02059f7c  bxeq lr
02059f80  ldrh r4,[r12,#0x8]
02059f84  mov r0,r4, lsl #0x9
02059f88  ldrh r0,[r7,r0]
02059f8c  ands r0,r5,r0
02059f90  bne 0x02059fd0
02059f94  ldrh r0,[r12,#0x18]
02059f98  cmp r0,#0x1
02059f9c  addne sp,sp,#0x4
02059fa0  ldmiane sp!,{r4,r5,r6,r7,lr}
02059fa4  bxne lr
02059fa8  add r0,r4,#0x1
02059fac  and r0,r0,#0x3
02059fb0  mov r0,r0, lsl #0x10
02059fb4  mov r4,r0, lsr #0x10
02059fb8  mov r0,r4, lsl #0x9
02059fbc  ldrh r0,[r7,r0]
02059fc0  ands r0,r5,r0
02059fc4  addeq sp,sp,#0x4
02059fc8  ldmiaeq sp!,{r4,r5,r6,r7,lr}
02059fcc  bxeq lr
02059fd0  add r2,r7,r4, lsl #0x9
02059fd4  mov r0,r7
02059fd8  add r2,r2,#0x4
02059fdc  bl 0x02059d28
02059fe0  mov r1,r0
02059fe4  cmp r6,#0x0
02059fe8  beq 0x0205a000
02059fec  add r0,r7,#0x800
02059ff0  ldrh r2,[r0,#0x10]
02059ff4  mov r0,r6
02059ff8  bl 0x02051730
02059ffc  b 0x0205a010
0205a000  add r0,r7,#0x800
0205a004  ldrh r2,[r0,#0x10]
0205a008  mov r0,#0x0
0205a00c  bl 0x02051718
0205a010  bl 0x02055238
0205a014  mov r4,r4, lsl #0x9
0205a018  ldrh r3,[r7,r4]
0205a01c  mvn r1,r5
0205a020  add r2,r7,#0x2
0205a024  and r1,r3,r1
0205a028  strh r1,[r7,r4]
0205a02c  ldrh r1,[r2,r4]
0205a030  orr r1,r1,r5
0205a034  strh r1,[r2,r4]
0205a038  bl 0x0205524c
0205a03c  add sp,sp,#0x4
0205a040  ldmia sp!,{r4,r5,r6,r7,lr}
0205a044  bx lr
