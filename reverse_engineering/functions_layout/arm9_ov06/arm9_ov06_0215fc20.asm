0215fc20  stmdb sp!,{r3,lr}
0215fc24  ldr r2,[r0,#0xc]
0215fc28  mov r3,#0x1
0215fc2c  tst r2,r3, lsl r1
0215fc30  ldmiane sp!,{r3,pc}
0215fc34  orr r3,r2,r3, lsl r1
0215fc38  ldr r2,[0x215fc74]
0215fc3c  str r3,[r0,#0xc]
0215fc40  ldr r3,[r2,#0x0]
0215fc44  mov lr,r1, lsl #0x2
0215fc48  ldr r12,[r3,#0xc]
0215fc4c  add r3,r0,r1, lsl #0x1
0215fc50  ldrh r0,[r12,lr]
0215fc54  mov r0,r0, lsl #0x8
0215fc58  strh r0,[r3,#0x16]
0215fc5c  ldr r0,[r2,#0x0]
0215fc60  ldr r0,[r0,#0xc]
0215fc64  add r0,r0,r1, lsl #0x2
0215fc68  ldrh r0,[r0,#0x2]
0215fc6c  strh r0,[r3,#0x36]
0215fc70  ldmia sp!,{r3,pc}
