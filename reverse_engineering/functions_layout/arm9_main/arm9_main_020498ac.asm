020498ac  ldr r3,[r0,#0x6c]
020498b0  ldr r12,[r0,#0xac]
020498b4  mla r0,r2,r3,r1
020498b8  mov r0,r0, lsl #0x1
020498bc  ldrh r1,[r12,r0]
020498c0  ldr r0,[0x20498cc]
020498c4  and r0,r1,r0
020498c8  bx lr
