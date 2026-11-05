0214f808  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0214f80c  sub sp,sp,#0x20
0214f810  ldr r0,[0x214f934]
0214f814  mov r3,#0x0
0214f818  ldr r9,[r0,#0x0]
0214f81c  mvn r2,#0x0
0214f820  ldrb lr,[r9,#0x15]
0214f824  add r1,sp,#0x10
0214f828  add r0,sp,#0x0
0214f82c  b 0x0214f83c
0214f830  str r2,[r1,r3,lsl #0x2]
0214f834  str r3,[r0,r3,lsl #0x2]
0214f838  add r3,r3,#0x1
0214f83c  cmp r3,lr
0214f840  blt 0x0214f830
0214f844  mov r5,#0x0
0214f848  mov r4,lr
0214f84c  add r2,sp,#0x10
0214f850  add r3,sp,#0x0
0214f854  mov r12,r5
0214f858  mov r1,r5
0214f85c  b 0x0214f8ec
0214f860  mov r6,r12
0214f864  mov r8,r12
0214f868  b 0x0214f898
0214f86c  ldr r7,[r3,r8,lsl #0x2]
0214f870  cmp r7,#0x0
0214f874  blt 0x0214f894
0214f878  ldr r0,[r2,r7,lsl #0x2]
0214f87c  cmp r0,#0x0
0214f880  bge 0x0214f894
0214f884  add r0,r9,r7
0214f888  ldrb r0,[r0,#0x16]
0214f88c  cmp r6,r0
0214f890  movcc r6,r0
0214f894  add r8,r8,#0x1
0214f898  cmp r8,lr
0214f89c  blt 0x0214f86c
0214f8a0  mov r7,r1
0214f8a4  mov r8,r1
0214f8a8  b 0x0214f8dc
0214f8ac  ldr r0,[r3,r8,lsl #0x2]
0214f8b0  cmp r0,#0x0
0214f8b4  blt 0x0214f8d8
0214f8b8  ldr r10,[r2,r0,lsl #0x2]
0214f8bc  cmp r10,#0x0
0214f8c0  bge 0x0214f8d8
0214f8c4  add r10,r9,r0
0214f8c8  ldrb r10,[r10,#0x16]
0214f8cc  cmp r6,r10
0214f8d0  streq r5,[r2,r0,lsl #0x2]
0214f8d4  addeq r7,r7,#0x1
0214f8d8  add r8,r8,#0x1
0214f8dc  cmp r8,lr
0214f8e0  blt 0x0214f8ac
0214f8e4  add r5,r5,r7
0214f8e8  sub r4,r4,r7
0214f8ec  cmp r4,#0x0
0214f8f0  bgt 0x0214f860
0214f8f4  mov r6,#0x0
0214f8f8  ldr r4,[0x214f938]
0214f8fc  add r2,sp,#0x10
0214f900  b 0x0214f924
0214f904  add r0,r9,r6
0214f908  ldrb r5,[r0,#0x16]
0214f90c  add r3,r4,r6, lsl #0x1
0214f910  ldr r1,[r2,r6,lsl #0x2]
0214f914  add r0,r4,r6
0214f918  strh r5,[r3,#0x16]
0214f91c  strb r1,[r0,#0xa]
0214f920  add r6,r6,#0x1
0214f924  cmp r6,lr
0214f928  blt 0x0214f904
0214f92c  add sp,sp,#0x20
0214f930  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
