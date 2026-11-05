021706c8  stmdb sp!,{r3,r4,r5,r6,lr}
021706cc  sub sp,sp,#0xc
021706d0  mov r4,r0
021706d4  ldr r0,[r4,#0x2c]
021706d8  bl 0x0216ed30
021706dc  cmp r0,#0x0
021706e0  ldrhne r0,[r4,#0x26]
021706e4  orrne r0,r0,#0x80
021706e8  strhne r0,[r4,#0x26]
021706ec  ldrh r0,[r4,#0x26]
021706f0  tst r0,#0x1
021706f4  movne r0,#0x0
021706f8  bne 0x0217081c
021706fc  ldr r0,[r4,#0x14]
02170700  mov r1,#0x0
02170704  cmp r0,#0x0
02170708  beq 0x02170714
0217070c  bl 0x02170828
02170710  mov r1,r0
02170714  tst r1,#0x1
02170718  ldrshne r0,[r4,#0x32]
0217071c  subne r0,r0,#0x40
02170720  strhne r0,[r4,#0x32]
02170724  tst r1,#0x2
02170728  ldrshne r0,[r4,#0x32]
0217072c  addne r0,r0,#0x40
02170730  strhne r0,[r4,#0x32]
02170734  tst r1,#0x8
02170738  ldrshne r0,[r4,#0x30]
0217073c  subne r0,r0,#0x40
02170740  strhne r0,[r4,#0x30]
02170744  tst r1,#0x4
02170748  ldrshne r0,[r4,#0x30]
0217074c  addne r0,r0,#0x40
02170750  strhne r0,[r4,#0x30]
02170754  ldrsh r0,[r4,#0x30]
02170758  ldrsh r6,[r4,#0x32]
0217075c  smulbb r0,r0,r0
02170760  bl 0x0200c954
02170764  mov r5,r0
02170768  smulbb r0,r6,r6
0217076c  bl 0x0200c954
02170770  mov r1,r0
02170774  mov r0,r5
02170778  bl 0x0200bfb4
0217077c  bl 0x0200cb80
02170780  mov r1,r0
02170784  ldr r0,[0x2170824]
02170788  bl 0x0200c9e4
0217078c  bl 0x0200c8e0
02170790  str r0,[sp,#0x8]
02170794  ldrsh r1,[r4,#0x30]
02170798  add r0,sp,#0x4
0217079c  add r2,sp,#0x8
021707a0  bl 0x0216c2fc
021707a4  add r1,sp,#0x4
021707a8  ldr r1,[r1,#0x0]
021707ac  add r0,sp,#0x0
021707b0  mov r3,r1, lsl #0x8
021707b4  mov r1,r3, asr #0xb
021707b8  add r1,r3,r1, lsr #0x14
021707bc  mov r1,r1, asr #0xc
021707c0  strh r1,[r4,#0x30]
021707c4  ldrsh r1,[r4,#0x32]
021707c8  add r2,sp,#0x8
021707cc  bl 0x0216c2fc
021707d0  add r0,sp,#0x0
021707d4  ldr r0,[r0,#0x0]
021707d8  mov r1,r0, lsl #0x8
021707dc  mov r0,r1, asr #0xb
021707e0  add r0,r1,r0, lsr #0x14
021707e4  mov r0,r0, asr #0xc
021707e8  strh r0,[r4,#0x32]
021707ec  ldrh r12,[r4,#0x20]
021707f0  ldrsh r2,[r4,#0x30]
021707f4  ldrsh r1,[r4,#0x32]
021707f8  ldr r0,[r4,#0x2c]
021707fc  mul r3,r12,r2
02170800  mul r2,r12,r1
02170804  mov r1,r3, lsl #0x8
02170808  mov r2,r2, lsl #0x8
0217080c  mov r1,r1, asr #0x10
02170810  mov r2,r2, asr #0x10
02170814  bl 0x0217083c
02170818  mov r0,#0x1
0217081c  add sp,sp,#0xc
02170820  ldmia sp!,{r3,r4,r5,r6,pc}
