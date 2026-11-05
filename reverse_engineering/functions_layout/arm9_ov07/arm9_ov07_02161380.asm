02161380  stmdb sp!,{r4,lr}
02161384  ldr r0,[r0,#0x20]
02161388  ldr r0,[r0,#0xc]
0216138c  ldr r3,[r0,#0x24]
02161390  ldr r0,[r3,#0x41c]
02161394  cmp r1,r0
02161398  movlt r0,#0x0
0216139c  ldmialt sp!,{r4,pc}
021613a0  add r0,r0,#0x20
021613a4  cmp r1,r0
021613a8  movge r0,#0x0
021613ac  ldmiage sp!,{r4,pc}
021613b0  mov r2,r1, lsr #0x1f
021613b4  rsb r0,r2,r1, lsl #0x1b
021613b8  add r0,r2,r0, ror #0x1b
021613bc  mov r2,#0x1
021613c0  mov r4,r2, lsl r0
021613c4  ldr r0,[r3,#0x418]
021613c8  ands r1,r0,r4
021613cc  movne r0,#0x0
021613d0  ldmiane sp!,{r4,pc}
021613d4  orr r0,r0,r4
021613d8  str r0,[r3,#0x418]
021613dc  ldr r1,[r3,#0x41c]
021613e0  ldr r0,[0x2161460]
021613e4  mov r12,r1, lsr #0x1f
021613e8  rsb r1,r12,r1, lsl #0x1b
021613ec  add r1,r12,r1, ror #0x1b
021613f0  mov r4,r2, lsl r1
021613f4  ldr r12,[r3,#0x418]
021613f8  add r1,r3,r0
021613fc  ands r0,r12,r4
02161400  beq 0x02161458
02161404  ldr r0,[0x2161464]
02161408  add r0,r3,r0
0216140c  ldr r12,[r3,#0x41c]
02161410  ldr r4,[r0,#0x0]
02161414  mov lr,r12, lsr #0x1f
02161418  add r4,r4,#0x1
0216141c  rsb r12,lr,r12, lsl #0x1b
02161420  str r4,[r0,#0x0]
02161424  add r4,lr,r12, ror #0x1b
02161428  mvn r4,r2, lsl r4
0216142c  ldr r12,[r1,#0x0]
02161430  and r4,r12,r4
02161434  str r4,[r1,#0x0]
02161438  ldr r12,[r3,#0x41c]
0216143c  ldr r4,[r3,#0x418]
02161440  mov lr,r12, lsr #0x1f
02161444  rsb r12,lr,r12, lsl #0x1b
02161448  add r12,lr,r12, ror #0x1b
0216144c  mov r12,r2, lsl r12
02161450  ands r4,r4,r12
02161454  bne 0x0216140c
02161458  mov r0,#0x1
0216145c  ldmia sp!,{r4,pc}
