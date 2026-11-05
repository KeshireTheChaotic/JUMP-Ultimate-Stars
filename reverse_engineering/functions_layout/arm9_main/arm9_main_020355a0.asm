020355a0  ldr r2,[r0,#0x4]
020355a4  cmp r2,#0x0
020355a8  ldreq r0,[0x20355b8]
020355ac  ldrne r0,[r0,#0x10]
020355b0  addne r0,r0,r1, lsl #0x2
020355b4  bx lr
