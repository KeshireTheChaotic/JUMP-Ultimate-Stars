0217b8a4  stmdb sp!,{r4,lr}
0217b8a8  ldr r3,[r0,#0x130]
0217b8ac  cmp r2,#0x10
0217b8b0  movcs r2,#0xf
0217b8b4  mov r12,#0x0
0217b8b8  sub r3,r3,r2
0217b8bc  mov r4,r12
0217b8c0  and lr,r3,#0xf
0217b8c4  b 0x0217b8e0
0217b8c8  add r3,lr,r4
0217b8cc  mov r3,r3, lsl #0x1c
0217b8d0  add r3,r0,r3, lsr #0x1a
0217b8d4  ldr r3,[r3,#0xec]
0217b8d8  add r4,r4,#0x1
0217b8dc  orr r12,r12,r3
0217b8e0  cmp r4,r2
0217b8e4  bcc 0x0217b8c8
0217b8e8  tst r12,r1
0217b8ec  movne r0,#0x1
0217b8f0  moveq r0,#0x0
0217b8f4  ldmia sp!,{r4,pc}
