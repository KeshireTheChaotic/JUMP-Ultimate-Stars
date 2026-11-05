0203925c  stmdb sp!,{r3,lr}
02039260  ldr r12,[0x203931c]
02039264  mov lr,#0x0
02039268  str r12,[r0,#0x0]
0203926c  stmib r0,{r1,r2,lr}
02039270  str lr,[r0,#0x10]
02039274  mov r1,#0x2
02039278  str r1,[r0,#0x14]
0203927c  strb lr,[r0,#0x18]
02039280  bic r1,lr,#0x1
02039284  ldr r12,[sp,#0x8]
02039288  str lr,[r0,#0x24]
0203928c  str r12,[r0,#0x28]
02039290  str r3,[r0,#0x2c]
02039294  orr r1,r1,#0x1
02039298  str r1,[r0,#0x1c]
0203929c  cmp r2,#0x4
020392a0  ldrge r1,[r0,#0x1c]
020392a4  orrge r1,r1,#0x2
020392a8  strge r1,[r0,#0x1c]
020392ac  cmp r2,#0x1
020392b0  cmpne r2,#0x3
020392b4  cmpne r2,#0x5
020392b8  ldreq r1,[r0,#0x1c]
020392bc  mov r2,#0x1
020392c0  orreq r1,r1,#0x4
020392c4  streq r1,[r0,#0x1c]
020392c8  add r1,r3,#0x1
020392cc  mov r3,r2, lsl r1
020392d0  ldr r1,[sp,#0x8]
020392d4  sub r3,r3,#0x1
020392d8  add r1,r1,#0x1
020392dc  mov r1,r2, lsl r1
020392e0  sub r2,r1,#0x1
020392e4  ldr r12,[r0,#0x1c]
020392e8  ldr r1,[0x2039320]
020392ec  mov r3,r3, lsl #0x18
020392f0  and r1,r12,r1
020392f4  orr r12,r1,r3, lsr #0x15
020392f8  ldr r1,[0x2039324]
020392fc  and r3,r12,r1
02039300  mov r1,r2, lsl #0x10
02039304  orr r1,r3,r1, lsr #0x5
02039308  str r1,[r0,#0x1c]
0203930c  str r1,[r0,#0x20]
02039310  mov r1,#0x0
02039314  str r1,[r0,#0x1c]
02039318  ldmia sp!,{r3,pc}
