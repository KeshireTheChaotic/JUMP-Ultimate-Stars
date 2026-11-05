02013aec  ldr r1,[r0,#0x40]
02013af0  tst r1,#0x4
02013af4  ldrne r2,[r0,#0x38]
02013af8  mov r1,#0x0
02013afc  movne r2,r2, lsl #0xc
02013b00  strne r2,[r0,#0x3c]
02013b04  streq r1,[r0,#0x3c]
02013b08  moveq r1,#0x1
02013b0c  strb r1,[r0,#0x44]
02013b10  bx lr
