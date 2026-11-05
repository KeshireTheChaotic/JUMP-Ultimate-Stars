027efb30  ldrh r2,[r1,#0xe]
027efb34  add r2,r1,r2, lsl #0x1
027efb38  add r3,r2,#0x10
027efb3c  ldrh r2,[r2,#0x10]
027efb40  strh r2,[r1,#0xc]
027efb44  mov r2,#0x2
027efb48  strh r2,[r3,#0x2]
027efb4c  mov r2,#0x0
027efb50  strh r2,[r3,#0x4]
027efb54  ldrh r2,[r1,#0x18]
027efb58  strh r2,[r3,#0x6]
027efb5c  ldr r12,[0x27efb64]
027efb60  bx r12
