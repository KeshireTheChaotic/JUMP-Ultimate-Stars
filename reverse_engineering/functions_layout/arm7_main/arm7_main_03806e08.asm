03806e08  ldr r2,[0x3806e4c]
03806e0c  ldrh r1,[r2,#0x0]
03806e10  and r1,r1,#0xc
03806e14  mov r1,r1, asr #0x2
03806e18  str r1,[r0,#0x0]
03806e1c  ldrh r1,[r2,#0x0]
03806e20  and r1,r1,#0x10
03806e24  mov r1,r1, asr #0x4
03806e28  str r1,[r0,#0x4]
03806e2c  ldrh r0,[r2,#0x0]
03806e30  bic r0,r0,#0xc
03806e34  orr r0,r0,#0xc
03806e38  strh r0,[r2,#0x0]
03806e3c  ldrh r0,[r2,#0x0]
03806e40  bic r0,r0,#0x10
03806e44  strh r0,[r2,#0x0]
03806e48  bx lr
