0201f93c  stmdb sp!,{r3,r4,r5,lr}
0201f940  mov r5,r0
0201f944  ldr r3,[r5,#0x54]
0201f948  mov r4,r1
0201f94c  cmp r3,#0x0
0201f950  bne 0x0201f95c
0201f954  bl 0x0201bfc0
0201f958  ldmia sp!,{r3,r4,r5,pc}
0201f95c  mov r1,r4, lsl #0x10
0201f960  ldr r0,[0x201f9b4]
0201f964  b 0x0201f9a0
0201f968  ldrh r2,[r3,#0x2]
0201f96c  cmp r2,r1, lsr #0x10
0201f970  bne 0x0201f99c
0201f974  mov r1,r12, lsl #0xc
0201f978  str r1,[sp,#0x0]
0201f97c  mov r0,r5
0201f980  ldr r2,[r0,#0x0]
0201f984  add r1,sp,#0x0
0201f988  ldr r2,[r2,#0xb8]
0201f98c  blx r2
0201f990  strh r4,[r5,#0x2c]
0201f994  mov r0,#0x1
0201f998  ldmia sp!,{r3,r4,r5,pc}
0201f99c  add r3,r3,#0x4
0201f9a0  ldrh r12,[r3,#0x0]
0201f9a4  cmp r12,r0
0201f9a8  bne 0x0201f968
0201f9ac  mov r0,#0x0
0201f9b0  ldmia sp!,{r3,r4,r5,pc}
