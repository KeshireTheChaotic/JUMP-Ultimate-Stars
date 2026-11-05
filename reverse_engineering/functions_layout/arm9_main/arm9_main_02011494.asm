02011494  stmdb sp!,{r3,r4,r5,lr}
02011498  mov r5,r0
0201149c  mov r4,r1
020114a0  bl 0x020114e4
020114a4  add r0,r0,r0, lsr #0x1f
020114a8  ldrh r2,[r5,#0xc]
020114ac  ldrh r1,[r5,#0xe]
020114b0  mov r3,r0, asr #0x1
020114b4  add r0,r2,r1
020114b8  mov r0,r0, lsl #0x2
020114bc  add r0,r0,r3, lsl #0x1
020114c0  add r0,r0,#0x1
020114c4  add r0,r5,r0
020114c8  add r0,r0,r4, lsl #0x1
020114cc  ldrsh r0,[r0,#0x11]
020114d0  add r0,r0,r0, lsr #0x1f
020114d4  mov r0,r0, asr #0x1
020114d8  add r0,r0,#0x2
020114dc  add r0,r5,r0, lsl #0x1
020114e0  ldmia sp!,{r3,r4,r5,pc}
