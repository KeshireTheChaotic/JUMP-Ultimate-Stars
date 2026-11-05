02056394  stmdb sp!,{r4,r5,r6,lr}
02056398  ldr r1,[r0,#0x4]
0205639c  ldr r2,[r0,#0x0]
020563a0  sub r3,r1,#0x2
020563a4  cmp r3,#0x1
020563a8  add lr,r2,#0x7d0
020563ac  ldr r4,[0x2056458]
020563b0  sublt lr,lr,#0x1
020563b4  ldr r12,[r0,#0x8]
020563b8  smull r0,r2,r4,lr
020563bc  addlt r3,r3,#0xc
020563c0  mov r1,#0x1a
020563c4  mul r0,r3,r1
020563c8  smull r1,r3,r4,lr
020563cc  ldr r5,[0x205645c]
020563d0  sub r0,r0,#0x2
020563d4  smull r4,r1,r5,r0
020563d8  mov r4,lr, lsr #0x1f
020563dc  mov r2,r2, asr #0x5
020563e0  mov r3,r3, asr #0x5
020563e4  add r3,r4,r3
020563e8  ldr r5,[0x2056460]
020563ec  add r2,r4,r2
020563f0  smull r2,r4,r5,r2
020563f4  sub r2,lr,r2
020563f8  mov r1,r1, asr #0x2
020563fc  mov r0,r0, lsr #0x1f
02056400  add r1,r0,r1
02056404  mov r4,r2, asr #0x1
02056408  add r0,r12,r1
0205640c  add r1,r2,r4, lsr #0x1e
02056410  add r2,r2,r0
02056414  mov r6,r3, asr #0x1
02056418  add r0,r3,r6, lsr #0x1e
0205641c  add r1,r2,r1, asr #0x2
02056420  add r1,r1,r0, asr #0x2
02056424  mov r0,#0x5
02056428  mla r4,r3,r0,r1
0205642c  ldr r3,[0x2056464]
02056430  mov r1,r4, lsr #0x1f
02056434  smull r2,r0,r3,r4
02056438  add r0,r4,r0
0205643c  mov r0,r0, asr #0x2
02056440  ldr r2,[0x2056468]
02056444  add r0,r1,r0
02056448  smull r0,r1,r2,r0
0205644c  sub r0,r4,r0
02056450  ldmia sp!,{r4,r5,r6,lr}
02056454  bx lr
