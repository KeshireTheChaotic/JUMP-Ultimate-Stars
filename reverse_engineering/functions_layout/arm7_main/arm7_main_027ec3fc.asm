027ec3fc  mov r1,#0x1c
027ec400  ldr r2,[0x27ec41c]
027ec404  ldr r2,[r2,#0x0]
027ec408  ldr r2,[r2,#0x31c]
027ec40c  mla r1,r0,r1,r2
027ec410  ldrh r0,[r1,#0x1a]
027ec414  strh r0,[r1,#0x18]
027ec418  bx lr
