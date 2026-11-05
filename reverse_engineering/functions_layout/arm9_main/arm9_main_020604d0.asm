020604d0  stmdb sp!,{r4,r5,r6,r7,r8,lr}
020604d4  sub sp,sp,#0x18
020604d8  ldr r4,[sp,#0x34]
020604dc  mov r8,r0
020604e0  str r4,[sp,#0x0]
020604e4  mov r7,r1
020604e8  mov r6,r2
020604ec  mov r5,r3
020604f0  ldr r4,[sp,#0x30]
020604f4  ldr r1,[r8,#0x4]
020604f8  ldr r2,[r8,#0x8]
020604fc  ldr r3,[r8,#0xc]
02060500  add r0,sp,#0xc
02060504  bl 0x0205ed74
02060508  ands r0,r4,#0x10
0206050c  ldrne r0,[sp,#0xc]
02060510  addne r0,r0,#0x1
02060514  addne r0,r0,r0, lsr #0x1f
02060518  subne r7,r7,r0, asr #0x1
0206051c  bne 0x0206052c
02060520  ands r0,r4,#0x20
02060524  ldrne r0,[sp,#0xc]
02060528  subne r7,r7,r0
0206052c  ands r0,r4,#0x2
02060530  ldrne r0,[sp,#0x10]
02060534  addne r0,r0,#0x1
02060538  addne r0,r0,r0, lsr #0x1f
0206053c  subne r6,r6,r0, asr #0x1
02060540  bne 0x02060550
02060544  ands r0,r4,#0x4
02060548  ldrne r0,[sp,#0x10]
0206054c  subne r6,r6,r0
02060550  str r5,[sp,#0x0]
02060554  ldr r0,[sp,#0x34]
02060558  str r4,[sp,#0x4]
0206055c  str r0,[sp,#0x8]
02060560  ldr r3,[sp,#0xc]
02060564  mov r0,r8
02060568  mov r1,r7
0206056c  mov r2,r6
02060570  bl 0x0206057c
02060574  add sp,sp,#0x18
02060578  ldmia sp!,{r4,r5,r6,r7,r8,pc}
