0201ce7c  stmdb sp!,{r3,r4,r5,lr}
0201ce80  mov r5,r0
0201ce84  ldr r0,[r5,#0x8]
0201ce88  mov r4,r1
0201ce8c  ldr r0,[r0,#0x8]
0201ce90  str r0,[r4,#0x8]
0201ce94  ldr r0,[r5,#0x8]
0201ce98  ldr r0,[r0,#0xc]
0201ce9c  str r0,[r4,#0xc]
0201cea0  ldr r0,[r5,#0x8]
0201cea4  ldrh r0,[r0,#0x6]
0201cea8  strh r0,[r4,#0x6]
0201ceac  ldr r0,[r4,#0x8]
0201ceb0  str r4,[r0,#0xc]
0201ceb4  ldr r0,[r5,#0x8]
0201ceb8  cmp r0,#0x0
0201cebc  beq 0x0201cecc
0201cec0  ldr r1,[r0,#0x0]
0201cec4  ldr r1,[r1,#0x4]
0201cec8  blx r1
0201cecc  str r4,[r5,#0x8]
0201ced0  ldrh r0,[r4,#0x6]
0201ced4  mov r0,r0, asr #0x8
0201ced8  add r0,r5,r0, lsl #0x2
0201cedc  str r4,[r0,#0xc]
0201cee0  ldmia sp!,{r3,r4,r5,pc}
