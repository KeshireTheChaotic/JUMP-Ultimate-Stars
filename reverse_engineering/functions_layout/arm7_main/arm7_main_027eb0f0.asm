027eb0f0  cmp r0,#0x1
027eb0f4  movhi r0,#0x5
027eb0f8  bxhi lr
027eb0fc  ldr r1,[0x27eb124]
027eb100  ldr r1,[r1,#0x0]
027eb104  add r1,r1,#0x300
027eb108  ldrh r2,[r1,#0x3a]
027eb10c  bic r2,r2,#0x2
027eb110  and r0,r0,#0x1
027eb114  orr r0,r2,r0, lsl #0x1
027eb118  strh r0,[r1,#0x3a]
027eb11c  mov r0,#0x0
027eb120  bx lr
