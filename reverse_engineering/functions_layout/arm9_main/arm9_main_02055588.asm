02055588  stmdb sp!,{r4,r5,r6,r7,lr}
0205558c  sub sp,sp,#0x4
02055590  ldr r1,[0x2055660]
02055594  ldr r2,[0x2055664]
02055598  ldrh r7,[r1,#0x0]
0205559c  add r4,r2,#0x80
020555a0  mov r6,r0
020555a4  add r5,r4,#0x74
020555a8  bl 0x02054b34
020555ac  orr r0,r0,r7, lsl #0x10
020555b0  str r0,[r6,#0x0]
020555b4  ldr r1,[0x2055668]
020555b8  ldr r0,[0x2055664]
020555bc  ldr r3,[r1,#0x0]
020555c0  ldrh r5,[r5,#0x4]
020555c4  ldr r2,[r1,#0x4]
020555c8  ldr r2,[0x205566c]
020555cc  eor r3,r3,r5, lsl #0x10
020555d0  str r3,[r6,#0x4]
020555d4  ldr r3,[r1,#0x0]
020555d8  ldr r3,[r1,#0x4]
020555dc  ldr r1,[r4,#0x74]
020555e0  ldr r4,[r0,#0x3c]
020555e4  eor r1,r3,r1
020555e8  eor r1,r4,r1
020555ec  str r1,[r6,#0x8]
020555f0  ldr r3,[r6,#0x8]
020555f4  ldr r2,[r2,#0x0]
020555f8  add r1,r0,#0x300
020555fc  eor r2,r3,r2
02055600  str r2,[r6,#0x8]
02055604  ldr r2,[r0,#0x1e8]
02055608  ldr r3,[0x2055670]
0205560c  str r2,[r6,#0xc]
02055610  ldr r4,[r0,#0x1ec]
02055614  ldr r2,[0x2055674]
02055618  str r4,[r6,#0x10]
0205561c  ldrh r4,[r1,#0x94]
02055620  ldr r0,[r0,#0x390]
02055624  eor r0,r0,r4, lsl #0x10
02055628  str r0,[r6,#0x14]
0205562c  ldrh r4,[r1,#0xaa]
02055630  ldrh r0,[r1,#0xac]
02055634  orr r0,r0,r4, lsl #0x10
02055638  str r0,[r6,#0x18]
0205563c  ldrh r3,[r3,#0x0]
02055640  ldrh r0,[r2,#0x0]
02055644  ldrh r1,[r1,#0x98]
02055648  orr r0,r3,r0
0205564c  orr r0,r0,r1, lsl #0x10
02055650  str r0,[r6,#0x1c]
02055654  add sp,sp,#0x4
02055658  ldmia sp!,{r4,r5,r6,r7,lr}
0205565c  bx lr
