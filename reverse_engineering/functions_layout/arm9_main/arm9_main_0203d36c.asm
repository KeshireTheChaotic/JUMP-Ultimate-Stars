0203d36c  stmdb sp!,{r4,lr}
0203d370  ldr r4,[r0,#0x908]
0203d374  cmp r4,#0x0
0203d378  beq 0x0203d43c
0203d37c  ldr r1,[r0,#0x8fc]
0203d380  ldr r3,[r0,#0x8f8]
0203d384  mov r1,r1, lsl #0xc
0203d388  mov r2,r1, asr #0x10
0203d38c  mov r1,r3, lsl #0xc
0203d390  mov r2,r2, lsl #0x10
0203d394  mov r1,r1, asr #0x10
0203d398  mov r2,r2, lsr #0x10
0203d39c  mov r1,r1, lsl #0x10
0203d3a0  mov r2,r2, lsl #0x10
0203d3a4  orr r1,r2,r1, lsr #0x10
0203d3a8  str r1,[r4,#0x0]
0203d3ac  ldr r1,[r0,#0x904]
0203d3b0  ldr r3,[r0,#0x900]
0203d3b4  mov r1,r1, lsl #0xc
0203d3b8  mov r2,r1, asr #0x10
0203d3bc  mov r1,r3, lsl #0xc
0203d3c0  mov r2,r2, lsl #0x10
0203d3c4  mov r1,r1, asr #0x10
0203d3c8  mov r2,r2, lsr #0x10
0203d3cc  mov r3,r2, lsl #0x10
0203d3d0  mov r1,r1, lsl #0x10
0203d3d4  ldr r2,[r0,#0x908]
0203d3d8  orr r1,r3,r1, lsr #0x10
0203d3dc  str r1,[r2,#0x4]
0203d3e0  ldr lr,[r0,#0x8f4]
0203d3e4  ldr r2,[r0,#0x8ec]
0203d3e8  ldr r1,[r0,#0x8fc]
0203d3ec  sub r12,r2,lr
0203d3f0  mul r2,r1,r12
0203d3f4  ldr r3,[r0,#0x904]
0203d3f8  ldr r4,[r0,#0x8f0]
0203d3fc  mul r12,r3,r12
0203d400  ldr r3,[r0,#0x8e8]
0203d404  ldr r1,[r0,#0x8f8]
0203d408  sub r3,r3,r4
0203d40c  mla r2,r1,r3,r2
0203d410  ldr r1,[r0,#0x900]
0203d414  add r2,r2,r4, lsl #0xc
0203d418  mla r3,r1,r3,r12
0203d41c  ldr r1,[r0,#0x908]
0203d420  mov r2,r2, asr #0x4
0203d424  str r2,[r1,#0x8]
0203d428  add r3,r3,lr, lsl #0xc
0203d42c  ldr r0,[r0,#0x908]
0203d430  mov r1,r3, asr #0x4
0203d434  str r1,[r0,#0xc]
0203d438  ldmia sp!,{r4,pc}
0203d43c  ldr r1,[r0,#0x8e4]
0203d440  cmp r1,#0x0
0203d444  ldrne r12,[r0,#0x910]
0203d448  cmpne r12,#0x0
0203d44c  ldmiaeq sp!,{r4,pc}
0203d450  ldr r1,[0x203d474]
0203d454  ldr r3,[r0,#0x8e8]
0203d458  ldr r2,[r0,#0x8ec]
0203d45c  mov r0,r1, lsl #0x10
0203d460  and r1,r3,r1
0203d464  and r0,r0,r2, lsl #0x10
0203d468  orr r0,r1,r0
0203d46c  str r0,[r12,#0x0]
0203d470  ldmia sp!,{r4,pc}
