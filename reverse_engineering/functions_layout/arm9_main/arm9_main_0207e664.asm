0207e664  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0207e668  sub sp,sp,#0x18
0207e66c  mov r9,r0
0207e670  ldr r5,[r9,#0x70]
0207e674  b 0x0207e844
0207e678  ldr r7,[r5,#0x8]
0207e67c  mov r6,#0x0
0207e680  ldr r0,[r7,#0xc]
0207e684  add r11,r0,#0xa4
0207e688  ldr r4,[r0,#0x5c]
0207e68c  b 0x0207e830
0207e690  ldrh r0,[r7,#0x26]
0207e694  add r2,r1,#0x3c
0207e698  and r1,r6,#0xff
0207e69c  cmp r0,#0x1
0207e6a0  ldrne r0,[r7,#0xc]
0207e6a4  add r8,r2,r1, lsl #0x3
0207e6a8  addne r0,r0,#0x100
0207e6ac  ldrne r1,[r7,#0x10]
0207e6b0  ldrhne r2,[r0,#0x84]
0207e6b4  ldrsbne r0,[r1,#0x4]
0207e6b8  bne 0x0207e6d0
0207e6bc  ldrsh r0,[r11,#0xca]
0207e6c0  ldrsh r2,[r11,#0xdc]
0207e6c4  mov r1,r0, asr #0x6
0207e6c8  ldr r0,[0x207e854]
0207e6cc  ldr r0,[r0,r1,lsl #0x2]
0207e6d0  mul r0,r2,r0
0207e6d4  ldr r1,[r7,#0x18]
0207e6d8  mov r0,r0, lsl #0x8
0207e6dc  ldrsh r12,[r8,#0x4]
0207e6e0  ldrsh r2,[r8,#0x0]
0207e6e4  tst r1,#0x40000
0207e6e8  mov r0,r0, asr #0x10
0207e6ec  sub r1,r2,r12
0207e6f0  add r2,r2,r12
0207e6f4  ldrsh r10,[r8,#0x6]
0207e6f8  ldrsh r12,[r8,#0x2]
0207e6fc  ldr r3,[r4,#0xc]
0207e700  ldrne r0,[0x207e858]
0207e704  adds r1,r3,r1, lsl #0x8
0207e708  add r3,r3,r2, lsl #0x8
0207e70c  sub r2,r12,r10
0207e710  ldr lr,[r4,#0x10]
0207e714  add r12,r12,r10
0207e718  add r2,lr,r2, lsl #0x8
0207e71c  movmi r1,#0x0
0207e720  cmp r2,#0x0
0207e724  movlt r2,#0x0
0207e728  cmp r3,#0x40000
0207e72c  add r10,lr,r12, lsl #0x8
0207e730  ldrgt r3,[0x207e85c]
0207e734  cmp r10,#0x40000
0207e738  ldrgt r10,[0x207e85c]
0207e73c  str r10,[sp,#0x0]
0207e740  str r0,[sp,#0x4]
0207e744  ldr r0,[r9,#0xf8]
0207e748  bl 0x02166fd4
0207e74c  movs r1,r0
0207e750  bmi 0x0207e824
0207e754  ldrb r0,[r7,#0x2a]
0207e758  orr r0,r0,#0x1
0207e75c  strb r0,[r7,#0x2a]
0207e760  ldr r2,[r7,#0xc]
0207e764  ldr r0,[r2,#0x40]
0207e768  orr r0,r0,#0x40000
0207e76c  str r0,[r2,#0x40]
0207e770  ldrh r0,[r7,#0x26]
0207e774  cmp r0,#0x1
0207e778  bne 0x0207e7fc
0207e77c  ldr r0,[r9,#0xf8]
0207e780  add r2,sp,#0x8
0207e784  bl 0x0216293c
0207e788  ldr r1,[sp,#0x8]
0207e78c  ldr r0,[r4,#0xc]
0207e790  ldrsh r3,[r8,#0x2]
0207e794  cmp r1,r0, asr #0x8
0207e798  ldrle r0,[sp,#0x10]
0207e79c  ldr r2,[r4,#0x10]
0207e7a0  addle r1,r1,r0
0207e7a4  add r2,r3,r2, asr #0x8
0207e7a8  ldr r0,[0x207e860]
0207e7ac  mov r3,#0x0
0207e7b0  bl 0x0206c7fc
0207e7b4  ldr r1,[r7,#0xc]
0207e7b8  mov r4,r0
0207e7bc  ldr r0,[r1,#0x30]
0207e7c0  bl 0x0206cf28
0207e7c4  ldr r2,[r4,#0x4]
0207e7c8  mov r1,r0
0207e7cc  ldr r0,[r2,#0x64]
0207e7d0  ldr r2,[r0,#0x0]
0207e7d4  ldr r2,[r2,#0x5c]
0207e7d8  blx r2
0207e7dc  mov r0,#0x8
0207e7e0  mov r1,r0
0207e7e4  mov r2,#0x0
0207e7e8  bl 0x021520dc
0207e7ec  mov r0,#0x7a
0207e7f0  mov r1,#0x29
0207e7f4  bl 0x0207342c
0207e7f8  b 0x0207e840
0207e7fc  ldr r0,[r7,#0x14]
0207e800  tst r0,#0x1000
0207e804  beq 0x0207e840
0207e808  ldr r0,[r7,#0x18]
0207e80c  tst r0,#0x1
0207e810  ldrne r1,[r7,#0x8]
0207e814  ldrbne r0,[r1,#0x18]
0207e818  orrne r0,r0,#0x2
0207e81c  strbne r0,[r1,#0x18]
0207e820  b 0x0207e840
0207e824  add r0,r6,#0x1
0207e828  mov r0,r0, lsl #0x10
0207e82c  mov r6,r0, lsr #0x10
0207e830  ldr r1,[r7,#0x8]
0207e834  ldrh r0,[r1,#0xc]
0207e838  cmp r6,r0
0207e83c  bcc 0x0207e690
0207e840  ldr r5,[r5,#0x0]
0207e844  cmp r5,#0x0
0207e848  bne 0x0207e678
0207e84c  add sp,sp,#0x18
0207e850  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
