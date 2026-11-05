020601d0  stmdb sp!,{r4,r5,r6,lr}
020601d4  mov lr,r0
020601d8  cmp r3,#0x8
020601dc  ldr r0,[sp,#0x14]
020601e0  bne 0x02060204
020601e4  ldr r4,[sp,#0x10]
020601e8  cmp r4,#0x8
020601ec  bne 0x02060204
020601f0  ldr r2,[sp,#0x18]
020601f4  mov r1,lr
020601f8  mov r2,r2, lsl #0x3
020601fc  bl 0x02051778
02060200  ldmia sp!,{r4,r5,r6,pc}
02060204  ldr r4,[sp,#0x18]
02060208  cmp r4,#0x4
0206020c  bne 0x02060264
02060210  mov r5,r1, lsl #0x2
02060214  add r4,r5,r3, lsl #0x2
02060218  mvn r3,#0x0
0206021c  rsb r4,r4,#0x20
02060220  mov r3,r3, lsr r5
02060224  add r1,r4,r1, lsl #0x2
02060228  mov r3,r3, lsl r1
0206022c  ldr r1,[sp,#0x10]
02060230  add r5,lr,r2, lsl #0x2
02060234  add r2,r5,r1, lsl #0x2
02060238  and r6,r0,r3, lsr r4
0206023c  cmp r5,r2
02060240  mvn r1,r3, lsr r4
02060244  ldmiacs sp!,{r4,r5,r6,pc}
02060248  ldr r0,[r5,#0x0]
0206024c  and r0,r0,r1
02060250  orr r0,r6,r0
02060254  str r0,[r5],#0x4
02060258  cmp r5,r2
0206025c  bcc 0x02060248
02060260  ldmia sp!,{r4,r5,r6,pc}
02060264  mov r12,r1, lsl #0x3
02060268  add r1,r12,r3, lsl #0x3
0206026c  rsb r1,r1,#0x40
02060270  mvn r3,#0x0
02060274  cmp r1,#0x20
02060278  mov r5,r3, lsr r12
0206027c  subcs r4,r1,#0x20
02060280  addcs r3,r12,r4
02060284  movcs r3,r5, lsl r3
02060288  movcs r3,r3, lsr r4
0206028c  movcc r3,r5, lsl r12
02060290  mvn r4,#0x0
02060294  add r5,lr,r2, lsl #0x3
02060298  cmp r12,#0x20
0206029c  mov r4,r4, lsl r1
020602a0  subcs r12,r12,#0x20
020602a4  addcs r1,r12,r1
020602a8  movcs r1,r4, lsr r1
020602ac  movcs r6,r1, lsl r12
020602b0  movcc r6,r4, lsr r1
020602b4  ldr r1,[sp,#0x10]
020602b8  and lr,r0,r3
020602bc  add r4,r5,r1, lsl #0x3
020602c0  cmp r5,r4
020602c4  and r12,r0,r6
020602c8  mvn r2,r3
020602cc  mvn r1,r6
020602d0  ldmiacs sp!,{r4,r5,r6,pc}
020602d4  ldr r0,[r5,#0x0]
020602d8  and r0,r0,r2
020602dc  orr r0,lr,r0
020602e0  str r0,[r5,#0x0]
020602e4  ldr r0,[r5,#0x4]
020602e8  and r0,r0,r1
020602ec  orr r0,r12,r0
020602f0  str r0,[r5,#0x4]
020602f4  add r5,r5,#0x8
020602f8  cmp r5,r4
020602fc  bcc 0x020602d4
02060300  ldmia sp!,{r4,r5,r6,pc}
