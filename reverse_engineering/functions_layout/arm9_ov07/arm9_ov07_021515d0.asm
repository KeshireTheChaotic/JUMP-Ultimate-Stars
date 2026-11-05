021515d0  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
021515d4  sub sp,sp,#0xc
021515d8  ldr r12,[0x2151664]
021515dc  mov r8,r1
021515e0  ldr r1,[r12,#0x0]
021515e4  mov r7,r2
021515e8  mov r6,r3
021515ec  ldr r5,[sp,#0x2c]
021515f0  bl 0x0214f2f4
021515f4  mov r4,r0
021515f8  ldr r3,[sp,#0x28]
021515fc  mov r0,r8
02151600  mov r1,r7
02151604  mov r2,r6
02151608  bl 0x02151178
0215160c  mov r1,r0
02151610  mov r0,r4
02151614  bl 0x0214f48c
02151618  ldr r1,[sp,#0x28]
0215161c  mov r0,r4
02151620  mov r1,r1, lsl #0xc
02151624  str r1,[sp,#0x8]
02151628  add r1,sp,#0x8
0215162c  bl 0x0214f27c
02151630  ldr r1,[r5,#0x4]
02151634  mov r0,r4
02151638  mov r1,r1, lsl #0xc
0215163c  str r1,[sp,#0x0]
02151640  ldr r2,[r5,#0x0]
02151644  add r1,sp,#0x4
02151648  mov r2,r2, lsl #0xc
0215164c  str r2,[sp,#0x4]
02151650  add r2,sp,#0x0
02151654  bl 0x0214f218
02151658  mov r0,r4
0215165c  add sp,sp,#0xc
02151660  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
