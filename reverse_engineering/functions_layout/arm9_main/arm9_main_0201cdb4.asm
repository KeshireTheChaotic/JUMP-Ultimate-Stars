0201cdb4  ldr r2,[r0,#0x40c]
0201cdb8  sub r2,r2,#0x1
0201cdbc  str r2,[r0,#0x40c]
0201cdc0  ldrh r12,[r1,#0x6]
0201cdc4  mov r2,r12, asr #0x8
0201cdc8  add r3,r0,r2, lsl #0x2
0201cdcc  ldr r0,[r3,#0xc]
0201cdd0  cmp r0,r1
0201cdd4  bne 0x0201cdf0
0201cdd8  ldr r2,[r1,#0xc]
0201cddc  ldrh r0,[r2,#0x6]
0201cde0  cmp r0,r12
0201cde4  streq r2,[r3,#0xc]
0201cde8  movne r0,#0x0
0201cdec  strne r0,[r3,#0xc]
0201cdf0  ldr r3,[r1,#0xc]
0201cdf4  ldr r2,[r1,#0x8]
0201cdf8  mov r0,#0x0
0201cdfc  str r3,[r2,#0xc]
0201ce00  ldr r3,[r1,#0x8]
0201ce04  ldr r2,[r1,#0xc]
0201ce08  str r3,[r2,#0x8]
0201ce0c  str r0,[r1,#0x8]
0201ce10  bx lr
