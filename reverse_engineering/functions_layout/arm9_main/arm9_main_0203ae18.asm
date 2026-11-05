0203ae18  orr r0,r0,r1, lsl #0x4
0203ae1c  ldr r1,[sp,#0x4]
0203ae20  orr r0,r0,r2, lsl #0x6
0203ae24  orr r0,r1,r0
0203ae28  ldr r2,[sp,#0x0]
0203ae2c  orr r1,r0,r3, lsl #0x18
0203ae30  ldr r0,[0x203ae40]
0203ae34  orr r1,r1,r2, lsl #0x10
0203ae38  str r1,[r0,#0x0]
0203ae3c  bx lr
