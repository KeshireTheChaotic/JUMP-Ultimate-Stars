0205f778  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0205f77c  sub sp,sp,#0x54
0205f780  ldrb r4,[r0,#0xc]
0205f784  mov r10,r2
0205f788  str r1,[sp,#0xc]
0205f78c  str r4,[sp,#0x44]
0205f790  ldr r1,[sp,#0x44]
0205f794  ldr r4,[sp,#0x78]
0205f798  cmp r1,#0x4
0205f79c  add r1,r10,r4
0205f7a0  str r1,[sp,#0x1c]
0205f7a4  ldr r2,[sp,#0x7c]
0205f7a8  mov r1,r3
0205f7ac  add r1,r1,r2
0205f7b0  str r1,[sp,#0x20]
0205f7b4  ldrne r1,[sp,#0xc]
0205f7b8  str r3,[sp,#0x10]
0205f7bc  orrne r1,r1,r1, lsl #0x8
0205f7c0  orrne r1,r1,r1, lsl #0x10
0205f7c4  strne r1,[sp,#0xc]
0205f7c8  bne 0x0205f7e0
0205f7cc  ldr r1,[sp,#0xc]
0205f7d0  orr r1,r1,r1, lsl #0x4
0205f7d4  orr r1,r1,r1, lsl #0x8
0205f7d8  orr r1,r1,r1, lsl #0x10
0205f7dc  str r1,[sp,#0xc]
0205f7e0  bic r1,r10,#0x7
0205f7e4  str r1,[sp,#0x30]
0205f7e8  ldr r1,[sp,#0x10]
0205f7ec  ldr r2,[r0,#0x10]
0205f7f0  bic r1,r1,#0x7
0205f7f4  str r1,[sp,#0x14]
0205f7f8  ldr r1,[sp,#0x44]
0205f7fc  str r2,[sp,#0x4c]
0205f800  mov r3,r1, lsl #0x6
0205f804  mov r2,r3, asr #0x2
0205f808  ldr r1,[sp,#0x20]
0205f80c  add r3,r3,r2, lsr #0x1d
0205f810  ldr r2,[sp,#0x1c]
0205f814  add r6,r1,#0x7
0205f818  add r2,r2,#0x7
0205f81c  bic r5,r2,#0x7
0205f820  bic r2,r6,#0x7
0205f824  ldr r1,[sp,#0x30]
0205f828  str r2,[sp,#0x24]
0205f82c  mov r2,r3, asr #0x3
0205f830  str r2,[sp,#0x48]
0205f834  mov r4,r1, asr #0x2
0205f838  ldr r2,[sp,#0x30]
0205f83c  ldr r1,[sp,#0x14]
0205f840  add r2,r2,r4, lsr #0x1d
0205f844  mov r2,r2, asr #0x3
0205f848  str r2,[sp,#0x2c]
0205f84c  ldr r2,[sp,#0x14]
0205f850  mov r1,r1, asr #0x2
0205f854  add r1,r2,r1, lsr #0x1d
0205f858  mov r6,r1, asr #0x3
0205f85c  ldr r1,[sp,#0x24]
0205f860  cmp r2,r1
0205f864  ldr r1,[r0,#0x4]
0205f868  str r1,[sp,#0x40]
0205f86c  ldr r1,[r0,#0x8]
0205f870  ldr r0,[r0,#0x0]
0205f874  str r1,[sp,#0x3c]
0205f878  str r0,[sp,#0x28]
0205f87c  ldrb r0,[sp,#0x4c]
0205f880  str r0,[sp,#0x38]
0205f884  ldrb r0,[sp,#0x4d]
0205f888  str r0,[sp,#0x34]
0205f88c  addge sp,sp,#0x54
0205f890  ldmiage sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0205f894  mov r4,#0x0
0205f898  mov r11,#0x8
0205f89c  ldr r1,[sp,#0x14]
0205f8a0  ldr r0,[sp,#0x10]
0205f8a4  ldr r7,[sp,#0x2c]
0205f8a8  cmp r1,r0
0205f8ac  movlt r1,r0
0205f8b0  ldrlt r0,[sp,#0x14]
0205f8b4  sublt r9,r1,r0
0205f8b8  ldr r1,[sp,#0x20]
0205f8bc  ldr r0,[sp,#0x14]
0205f8c0  movge r9,r4
0205f8c4  sub r0,r1,r0
0205f8c8  cmp r0,#0x8
0205f8cc  movgt r0,r11
0205f8d0  sub r0,r0,r9
0205f8d4  str r0,[sp,#0x18]
0205f8d8  ldr r0,[sp,#0x30]
0205f8dc  cmp r0,r5
0205f8e0  mov r8,r0
0205f8e4  bge 0x0205f968
0205f8e8  ldr r0,[sp,#0x38]
0205f8ec  ldr r2,[sp,#0x40]
0205f8f0  str r0,[sp,#0x0]
0205f8f4  ldr r0,[sp,#0x34]
0205f8f8  ldr r3,[sp,#0x3c]
0205f8fc  str r0,[sp,#0x4]
0205f900  mov r0,r7
0205f904  mov r1,r6
0205f908  bl 0x02060320
0205f90c  ldr r2,[sp,#0x1c]
0205f910  cmp r8,r10
0205f914  sublt r1,r10,r8
0205f918  sub r2,r2,r8
0205f91c  movge r1,r4
0205f920  cmp r2,#0x8
0205f924  movgt r2,r11
0205f928  sub r3,r2,r1
0205f92c  ldr r2,[sp,#0x18]
0205f930  ldr r12,[sp,#0x48]
0205f934  str r2,[sp,#0x0]
0205f938  ldr r2,[sp,#0xc]
0205f93c  str r2,[sp,#0x4]
0205f940  ldr r2,[sp,#0x44]
0205f944  str r2,[sp,#0x8]
0205f948  ldr r2,[sp,#0x28]
0205f94c  mla r0,r12,r0,r2
0205f950  mov r2,r9
0205f954  bl 0x020601d0
0205f958  add r8,r8,#0x8
0205f95c  add r7,r7,#0x1
0205f960  cmp r8,r5
0205f964  blt 0x0205f8e8
0205f968  ldr r0,[sp,#0x14]
0205f96c  add r6,r6,#0x1
0205f970  add r1,r0,#0x8
0205f974  ldr r0,[sp,#0x24]
0205f978  str r1,[sp,#0x14]
0205f97c  cmp r1,r0
0205f980  blt 0x0205f89c
0205f984  add sp,sp,#0x54
0205f988  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
