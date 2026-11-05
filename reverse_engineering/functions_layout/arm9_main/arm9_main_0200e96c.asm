0200e96c  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0200e970  sub sp,sp,#0x8
0200e974  mov r6,r1
0200e978  ldr r1,[r6,#0x0]
0200e97c  mov r7,r0
0200e980  cmp r1,#0x0
0200e984  ldr r4,[r6,#0xc]
0200e988  mov r5,#0x0
0200e98c  bls 0x0200e9e4
0200e990  add r8,sp,#0x0
0200e994  ldrb r1,[r4,#0x0]
0200e998  ldrb r0,[r4,#0x1]
0200e99c  ldrb r2,[r4,#0x2]
0200e9a0  ldrb r3,[r4,#0x3]
0200e9a4  orr r0,r1,r0, lsl #0x8
0200e9a8  orr r0,r0,r2, lsl #0x10
0200e9ac  orr r1,r0,r3, lsl #0x18
0200e9b0  mov r0,r7
0200e9b4  mov r2,r8
0200e9b8  str r1,[sp,#0x4]
0200e9bc  bl 0x0200f2d0
0200e9c0  cmp r0,#0x0
0200e9c4  addne sp,sp,#0x8
0200e9c8  movne r0,#0x1
0200e9cc  ldmiane sp!,{r4,r5,r6,r7,r8,pc}
0200e9d0  ldr r0,[r6,#0x0]
0200e9d4  add r5,r5,#0x1
0200e9d8  cmp r5,r0
0200e9dc  add r4,r4,#0x4
0200e9e0  bcc 0x0200e994
0200e9e4  mov r0,#0x0
0200e9e8  add sp,sp,#0x8
0200e9ec  ldmia sp!,{r4,r5,r6,r7,r8,pc}
