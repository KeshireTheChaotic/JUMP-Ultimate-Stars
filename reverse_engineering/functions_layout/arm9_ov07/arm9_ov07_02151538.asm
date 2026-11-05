02151538  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
0215153c  sub sp,sp,#0xc
02151540  ldr r12,[0x21515cc]
02151544  mov r8,r1
02151548  ldr r1,[r12,#0x0]
0215154c  mov r7,r2
02151550  mov r6,r3
02151554  ldr r5,[sp,#0x2c]
02151558  bl 0x0214f2f4
0215155c  mov r4,r0
02151560  ldr r3,[sp,#0x28]
02151564  mov r0,r8
02151568  mov r1,r7
0215156c  mov r2,r6
02151570  bl 0x021510f0
02151574  mov r1,r0
02151578  mov r0,r4
0215157c  bl 0x0214f48c
02151580  ldr r1,[sp,#0x28]
02151584  mov r0,r4
02151588  mov r1,r1, lsl #0xc
0215158c  str r1,[sp,#0x8]
02151590  add r1,sp,#0x8
02151594  bl 0x0214f27c
02151598  ldr r1,[r5,#0x4]
0215159c  mov r0,r4
021515a0  mov r1,r1, lsl #0xc
021515a4  str r1,[sp,#0x0]
021515a8  ldr r2,[r5,#0x0]
021515ac  add r1,sp,#0x4
021515b0  mov r2,r2, lsl #0xc
021515b4  str r2,[sp,#0x4]
021515b8  add r2,sp,#0x0
021515bc  bl 0x0214f218
021515c0  mov r0,r4
021515c4  add sp,sp,#0xc
021515c8  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
