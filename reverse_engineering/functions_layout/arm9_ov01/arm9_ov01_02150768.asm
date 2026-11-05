02150768  ldr r12,[r0,#0x4]
0215076c  mov r0,#0x1
02150770  strb r0,[r12,#0x901]
02150774  ldrsh r3,[r2,#0x0]
02150778  add r0,r12,r1, lsl #0x3
0215077c  add r0,r0,#0x800
02150780  strh r3,[r0,#0xd8]
02150784  ldrsh r1,[r2,#0x2]
02150788  strh r1,[r0,#0xda]
0215078c  ldrsh r1,[r2,#0x4]
02150790  strh r1,[r0,#0xdc]
02150794  ldrsh r1,[r2,#0x6]
02150798  strh r1,[r0,#0xde]
0215079c  bx lr
