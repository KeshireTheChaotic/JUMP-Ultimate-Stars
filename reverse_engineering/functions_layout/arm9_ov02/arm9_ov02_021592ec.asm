021592ec  stmdb sp!,{r3,r4,r5,lr}
021592f0  mov r5,r0
021592f4  ldr r0,[0x2159354]
021592f8  add r1,r1,#0x20
021592fc  smlabb r4,r2,r0,r1
02159300  ldrb r12,[r5,#0x4]
02159304  add r0,r4,#0x8c
02159308  add r1,r4,#0x94
0215930c  add r2,r4,#0x84
02159310  add r3,r4,r12, lsl #0x2
02159314  add r0,r0,#0x400
02159318  add r1,r1,#0x400
0215931c  add r2,r2,#0x400
02159320  ldr r3,[r3,#0x1c0]
02159324  add r0,r0,r12, lsl #0x1
02159328  add r1,r1,r12, lsl #0x1
0215932c  add r2,r2,r12, lsl #0x1
02159330  bl 0x02159db4
02159334  ldrb r0,[r5,#0x4]
02159338  add r0,r4,r0, lsl #0x1
0215933c  add r0,r0,#0x400
02159340  ldrsh r0,[r0,#0x84]
02159344  cmp r0,#0x0
02159348  movgt r0,#0x1
0215934c  movle r0,#0x0
02159350  ldmia sp!,{r3,r4,r5,pc}
