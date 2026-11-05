0200b7c4  tst r1,#0x80000000
0200b7c8  bne 0x0200b828
0200b7cc  ldr r2,[0x200b84c]
0200b7d0  subs r2,r2,r1, lsr #0x14
0200b7d4  blt 0x0200b840
0200b7d8  cmp r2,#0x40
0200b7dc  bge 0x0200b81c
0200b7e0  mov r12,r1, lsl #0xb
0200b7e4  orr r12,r12,#0x80000000
0200b7e8  orr r12,r12,r0, lsr #0x15
0200b7ec  cmp r2,#0x20
0200b7f0  ble 0x0200b804
0200b7f4  sub r2,r2,#0x20
0200b7f8  mov r1,#0x0
0200b7fc  mov r0,r12, lsr r2
0200b800  bx lr
0200b804  mov r3,r0, lsl #0xb
0200b808  mov r1,r12, lsr r2
0200b80c  mov r0,r3, lsr r2
0200b810  rsb r2,r2,#0x20
0200b814  orr r0,r0,r12, lsl r2
0200b818  bx lr
0200b81c  mov r1,#0x0
0200b820  mov r0,#0x0
0200b824  bx lr
0200b828  cmn r1,#0x100000
0200b82c  cmpeq r0,#0x0
0200b830  bhi 0x0200b840
0200b834  mov r1,#0x0
0200b838  mov r0,#0x0
0200b83c  bx lr
0200b840  mvn r1,#0x0
0200b844  mvn r0,#0x0
0200b848  bx lr
