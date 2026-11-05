0214dc1c  ldr r2,[0x214dc38]
0214dc20  mov r3,#0x1
0214dc24  ldrb r0,[r2,r0]
0214dc28  tst r0,r3, lsl r1
0214dc2c  moveq r3,#0x0
0214dc30  mov r0,r3
0214dc34  bx lr
