0204983c  ldr r3,[r0,#0x6c]
02049840  ldr r12,[r0,#0xac]
02049844  mla r0,r2,r3,r1
02049848  mov r0,r0, lsl #0x1
0204984c  ldrh r0,[r12,r0]
02049850  mov r0,r0, asr #0xb
02049854  tst r0,#0x1
02049858  movne r0,#0x1
0204985c  moveq r0,#0x0
02049860  bx lr
