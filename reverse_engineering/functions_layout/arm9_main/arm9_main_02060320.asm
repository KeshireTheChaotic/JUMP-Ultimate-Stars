02060320  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02060324  sub sp,sp,#0x4
02060328  ldr r11,[0x206041c]
0206032c  mov r9,#0x0
02060330  mov r10,#0x3
02060334  mvn r7,#0x0
02060338  ldr r4,[sp,#0x2c]
0206033c  ldr r6,[sp,#0x28]
02060340  and r12,r3,r7, lsl r4
02060344  cmp r12,r1
02060348  mov r8,r7, lsl r6
0206034c  mov r5,r7, lsl r4
02060350  and lr,r2,r7, lsl r6
02060354  bhi 0x02060388
02060358  mla r9,r2,r12,r9
0206035c  cmp lr,r0
02060360  movhi r2,lr
02060364  subhi r1,r1,r12
02060368  subhi r3,r3,r12
0206036c  bhi 0x020603d0
02060370  sub r3,r3,r12
02060374  mla r9,lr,r3,r9
02060378  sub r0,r0,lr
0206037c  sub r1,r1,r12
02060380  sub r2,r2,lr
02060384  b 0x020603d0
02060388  cmp lr,r0
0206038c  mlals r9,lr,r12,r9
02060390  mvn r3,r5
02060394  movls r3,r12
02060398  subls r0,r0,lr
0206039c  subls r2,r2,lr
020603a0  bls 0x020603d0
020603a4  and r2,r1,r5
020603a8  mla r5,lr,r2,r9
020603ac  and r2,r0,r8
020603b0  and r1,r1,r3
020603b4  add r2,r5,r2, lsl r4
020603b8  mvn r3,r8
020603bc  add r1,r2,r1, lsl r6
020603c0  and r0,r0,r3
020603c4  add sp,sp,#0x4
020603c8  add r0,r1,r0
020603cc  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
020603d0  cmp r2,#0x8
020603d4  movlt r4,r2
020603d8  movge r5,r10
020603dc  clzlt r4,r4
020603e0  rsblt r5,r4,#0x1f
020603e4  cmp r3,#0x8
020603e8  movge r4,r10
020603ec  movlt r4,r3
020603f0  clzlt r4,r4
020603f4  rsblt r4,r4,#0x1f
020603f8  add r4,r11,r4, lsl #0x3
020603fc  add r6,r4,r5, lsl #0x1
02060400  ldrb r5,[r4,r5,lsl #0x1]
02060404  ldrb r4,[r6,#0x1]
02060408  str r5,[sp,#0x28]
0206040c  str r4,[sp,#0x2c]
02060410  b 0x02060338
