027ec480  ldr r1,[0x27ec4a0]
027ec484  ldr r1,[r1,#0x0]
027ec488  add r1,r1,#0x500
027ec48c  ldrh r3,[r1,#0x30]
027ec490  mov r2,#0x1
027ec494  orr r0,r3,r2, lsl r0
027ec498  strh r0,[r1,#0x30]
027ec49c  bx lr
