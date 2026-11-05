02077974  ldrsh r3,[r1,#0x16]
02077978  ldrsb r0,[r2,#0x2]
0207797c  add r0,r3,r0, lsl #0x6
02077980  mov r0,r0, lsl #0x10
02077984  mov r0,r0, asr #0x10
02077988  cmp r0,#0x4000
0207798c  movgt r0,#0x4000
02077990  strh r0,[r1,#0x16]
02077994  ldrsh r2,[r1,#0x16]
02077998  mov r0,#0x1
0207799c  strh r2,[r1,#0x18]
020779a0  bx lr
