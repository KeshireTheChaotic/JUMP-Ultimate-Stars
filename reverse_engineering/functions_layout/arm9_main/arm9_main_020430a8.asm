020430a8  ldr r2,[0x20430c0]
020430ac  ldrh r1,[r2,#0x0]
020430b0  bic r1,r1,#0x8000
020430b4  orr r0,r1,r0, lsl #0xf
020430b8  strh r0,[r2,#0x0]
020430bc  bx lr
