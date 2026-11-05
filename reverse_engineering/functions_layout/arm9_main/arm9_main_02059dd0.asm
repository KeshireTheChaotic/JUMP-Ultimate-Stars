02059dd0  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
02059dd4  sub sp,sp,#0x10
02059dd8  mov r10,r0
02059ddc  mov r9,r1
02059de0  bl 0x02055238
02059de4  add r1,r10,#0x800
02059de8  ldrh r1,[r1,#0x8]
02059dec  mov r7,r0
02059df0  mov r1,r1, lsl #0x9
02059df4  ldrh r1,[r10,r1]
02059df8  cmp r1,#0x0
02059dfc  bne 0x02059f2c
02059e00  bl 0x02057a54
02059e04  add r1,r10,#0x800
02059e08  ldrh r6,[r1,#0x8]
02059e0c  mov r5,r0
02059e10  ldrh r1,[r1,#0x18]
02059e14  add r0,r6,#0x1
02059e18  and r0,r0,#0x3
02059e1c  mov r0,r0, lsl #0x10
02059e20  mov r4,r0, lsr #0x10
02059e24  cmp r1,#0x1
02059e28  addeq r0,r4,#0x1
02059e2c  andeq r0,r0,#0x3
02059e30  moveq r0,r0, lsl #0x10
02059e34  moveq r8,r0, lsr #0x10
02059e38  movne r8,r4
02059e3c  add r1,r10,r8, lsl #0x9
02059e40  mov r0,#0x0
02059e44  mov r2,#0x200
02059e48  bl 0x02051718
02059e4c  add r0,r10,#0x800
02059e50  ldrh r3,[r0,#0xe]
02059e54  orr r2,r5,#0x1
02059e58  mov r1,r8, lsl #0x9
02059e5c  and r2,r3,r2
02059e60  strh r2,[r10,r1]
02059e64  strh r4,[r0,#0x8]
02059e68  ldrh r0,[r0,#0xe]
02059e6c  mov r1,r6, lsl #0x9
02059e70  cmp r9,#0x1
02059e74  strh r0,[r10,r1]
02059e78  ldrheq r0,[r10,r1]
02059e7c  biceq r0,r0,#0x1
02059e80  strheq r0,[r10,r1]
02059e84  mov r0,r7
02059e88  bl 0x0205524c
02059e8c  add r3,r10,#0x800
02059e90  ldrh r1,[r3,#0xe]
02059e94  mov r4,#0x1
02059e98  ldr r0,[0x2059f3c]
02059e9c  and r1,r1,r5
02059ea0  mov r1,r1, lsl #0x10
02059ea4  mov r1,r1, lsr #0x10
02059ea8  str r1,[sp,#0x0]
02059eac  ldrh r5,[r3,#0x16]
02059eb0  mov r1,r10
02059eb4  add r2,r10,r6, lsl #0x9
02059eb8  str r5,[sp,#0x4]
02059ebc  str r4,[sp,#0x8]
02059ec0  ldrh r3,[r3,#0x14]
02059ec4  bl 0x020596e8
02059ec8  cmp r0,#0x7
02059ecc  bne 0x02059f00
02059ed0  add r0,r10,r6, lsl #0x1
02059ed4  ldr r1,[0x2059f40]
02059ed8  add r0,r0,#0x800
02059edc  strh r1,[r0,#0x0]
02059ee0  add r0,r10,#0x800
02059ee4  ldrh r1,[r0,#0xa]
02059ee8  add sp,sp,#0x10
02059eec  add r1,r1,#0x1
02059ef0  and r1,r1,#0x3
02059ef4  strh r1,[r0,#0xa]
02059ef8  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
02059efc  bx lr
02059f00  cmp r0,#0x0
02059f04  addeq sp,sp,#0x10
02059f08  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
02059f0c  bxeq lr
02059f10  cmp r0,#0x2
02059f14  addne r0,r10,#0x800
02059f18  movne r1,#0x5
02059f1c  strhne r1,[r0,#0x1c]
02059f20  add sp,sp,#0x10
02059f24  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
02059f28  bx lr
02059f2c  bl 0x0205524c
02059f30  add sp,sp,#0x10
02059f34  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
02059f38  bx lr
