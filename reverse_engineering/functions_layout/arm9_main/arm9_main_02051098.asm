02051098  stmdb sp!,{r4,r5,lr}
0205109c  sub sp,sp,#0x4
020510a0  ands r2,r0,#0x1
020510a4  ldrbne r2,[r0],#0x1
020510a8  mov lr,#0x0
020510ac  subne r1,r1,#0x1
020510b0  addne lr,lr,r2
020510b4  movs r4,r1, lsr #0x11
020510b8  beq 0x020510fc
020510bc  ldr r2,[0x2051158]
020510c0  mov r12,#0x10000
020510c4  mov r5,r12
020510c8  sub r4,r4,#0x1
020510cc  sub r1,r1,#0x20000
020510d0  ldrh r3,[r0],#0x2
020510d4  subs r5,r5,#0x1
020510d8  add lr,lr,r3
020510dc  bne 0x020510d0
020510e0  and r3,lr,r2
020510e4  add r3,r3,lr, lsr #0x10
020510e8  add r3,r3,r3, lsr #0x10
020510ec  mov r3,r3, lsl #0x10
020510f0  cmp r4,#0x0
020510f4  mov lr,r3, lsr #0x10
020510f8  bne 0x020510c4
020510fc  movs r3,r1, lsr #0x1
02051100  beq 0x02051114
02051104  ldrh r2,[r0],#0x2
02051108  subs r3,r3,#0x1
0205110c  add lr,lr,r2
02051110  bne 0x02051104
02051114  ands r1,r1,#0x1
02051118  ldrbne r0,[r0,#0x0]
0205111c  addne lr,lr,r0
02051120  ldr r0,[0x2051158]
02051124  and r0,lr,r0
02051128  add r0,r0,lr, lsr #0x10
0205112c  add r0,r0,r0, lsr #0x10
02051130  mov r0,r0, lsl #0x10
02051134  mov r1,r0, lsr #0x10
02051138  and r0,r1,#0xff
0205113c  add r0,r0,r1, lsr #0x8
02051140  add r0,r0,r0, lsr #0x8
02051144  mvn r0,r0
02051148  and r0,r0,#0xff
0205114c  add sp,sp,#0x4
02051150  ldmia sp!,{r4,r5,lr}
02051154  bx lr
