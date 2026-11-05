03806dd4  ldr r3,[r0,#0x0]
03806dd8  ldr r2,[0x3806e04]
03806ddc  ldrh r1,[r2,#0x0]
03806de0  bic r1,r1,#0xc
03806de4  orr r1,r1,r3, lsl #0x2
03806de8  strh r1,[r2,#0x0]
03806dec  ldr r1,[r0,#0x4]
03806df0  ldrh r0,[r2,#0x0]
03806df4  bic r0,r0,#0x10
03806df8  orr r0,r0,r1, lsl #0x4
03806dfc  strh r0,[r2,#0x0]
03806e00  bx lr
