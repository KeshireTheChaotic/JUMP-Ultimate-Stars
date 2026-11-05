02152894  stmdb sp!,{r3,r4,r5,lr}
02152898  sub sp,sp,#0x10
0215289c  mov r5,r0
021528a0  ldr r2,[r5,#0x4]
021528a4  ldr r0,[r2,#0x90]
021528a8  and r0,r0,#0x1
021528ac  cmp r0,#0x1
021528b0  bne 0x0215292c
021528b4  add r0,sp,#0x8
021528b8  mov r1,r5
021528bc  ldr r4,[r2,#0x10]
021528c0  bl 0x02152964
021528c4  add r2,sp,#0x8
021528c8  mov r1,r5
021528cc  add r0,sp,#0xc
021528d0  ldr r5,[r2,#0x0]
021528d4  bl 0x02152950
021528d8  add r0,sp,#0xc
021528dc  ldr r0,[r0,#0x0]
021528e0  mov r12,#0x40
021528e4  add r2,r0,#0x4000
021528e8  mov r0,r2, asr #0xb
021528ec  add r2,r2,r0, lsr #0x14
021528f0  add r3,r5,#0x8000
021528f4  mov r1,r3, asr #0xb
021528f8  add r3,r3,r1, lsr #0x14
021528fc  add r0,r4,#0x400
02152900  str r12,[sp,#0x0]
02152904  ldrsb r12,[r0,#0x6c]
02152908  mov r1,#0x14
0215290c  add r0,r4,#0x3dc
02152910  smulbb r1,r12,r1
02152914  add r4,r1,#0x8
02152918  mov r2,r2, asr #0xc
0215291c  mov r3,r3, asr #0xc
02152920  mov r1,#0x0
02152924  str r4,[sp,#0x4]
02152928  bl 0x0215ee88
0215292c  add sp,sp,#0x10
02152930  ldmia sp!,{r3,r4,r5,pc}
