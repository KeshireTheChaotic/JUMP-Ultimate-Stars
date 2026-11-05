0214dc1c  mov r0,#0x2000
0214dc20  str r0,[sp,#0x4]
0214dc24  ldr r0,[r1,#0x4]
0214dc28  add r1,sp,#0x4
0214dc2c  ldr r2,[r0,#0x0]
0214dc30  ldr r2,[r2,#0x10]
0214dc34  blx r2
