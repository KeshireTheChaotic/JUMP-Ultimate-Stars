021bad54  ldr r3,[r0,#0x0]
021bad58  mov r0,#0x24
021bad5c  mla r3,r1,r0,r3
021bad60  add r0,r3,r2, lsl #0x2
021bad64  add r1,r3,#0x4
021bad68  ldr r0,[r0,#0x4]
021bad6c  add r1,r1,r2, lsl #0x2
021bad70  add r0,r1,r0
021bad74  bx lr
