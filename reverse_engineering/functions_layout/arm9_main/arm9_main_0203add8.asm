0203add8  ldr r12,[sp,#0xc]
0203addc  mov r0,r0, lsl #0x1a
0203ade0  orr r0,r0,r12, lsr #0x3
0203ade4  orr r0,r0,r1, lsl #0x1e
0203ade8  orr r0,r0,r2, lsl #0x14
0203adec  ldr r1,[sp,#0x0]
0203adf0  orr r0,r0,r3, lsl #0x17
0203adf4  ldr r2,[sp,#0x4]
0203adf8  orr r0,r0,r1, lsl #0x10
0203adfc  ldr r3,[sp,#0x8]
0203ae00  orr r1,r0,r2, lsl #0x12
0203ae04  ldr r0,[0x203ae14]
0203ae08  orr r1,r1,r3, lsl #0x1d
0203ae0c  str r1,[r0,#0x0]
0203ae10  bx lr
