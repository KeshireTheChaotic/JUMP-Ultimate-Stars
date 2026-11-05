0215ee0c  ldr r12,[r0,#0x4]
0215ee10  mov r0,#0x1
0215ee14  strb r0,[r12,#0x901]
0215ee18  ldrsh r3,[r2,#0x0]
0215ee1c  add r0,r12,r1, lsl #0x3
0215ee20  add r0,r0,#0x800
0215ee24  strh r3,[r0,#0xd8]
0215ee28  ldrsh r1,[r2,#0x2]
0215ee2c  strh r1,[r0,#0xda]
0215ee30  ldrsh r1,[r2,#0x4]
0215ee34  strh r1,[r0,#0xdc]
0215ee38  ldrsh r1,[r2,#0x6]
0215ee3c  strh r1,[r0,#0xde]
0215ee40  bx lr
