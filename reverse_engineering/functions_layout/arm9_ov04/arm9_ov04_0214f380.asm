0214f380  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
0214f384  ldr r0,[0x214f4fc]
0214f388  ldr r1,[0x214f500]
0214f38c  ldr r0,[r0,#0x0]
0214f390  ldr r2,[0x214f504]
0214f394  ldr r0,[r0,#0x44]
0214f398  mov r3,#0xd7
0214f39c  mov r0,r0, lsl #0x10
0214f3a0  mov r8,r0, asr #0x10
0214f3a4  mov r5,r8, lsl #0x1
0214f3a8  mov r0,r5
0214f3ac  bl 0x0201a21c
0214f3b0  mov r4,r0
0214f3b4  ldr r1,[0x214f500]
0214f3b8  ldr r2,[0x214f504]
0214f3bc  mov r0,r5
0214f3c0  mov r3,#0xd8
0214f3c4  bl 0x0201a21c
0214f3c8  ldr r2,[0x214f4fc]
0214f3cc  ldr r1,[0x214f500]
0214f3d0  ldr r3,[r2,#0x0]
0214f3d4  ldr r2,[0x214f504]
0214f3d8  ldrsh r6,[r3,#0x10]
0214f3dc  mov r5,r0
0214f3e0  mov r3,#0xd9
0214f3e4  mov r0,r6, lsl #0x1
0214f3e8  bl 0x0201a21c
0214f3ec  mov r7,#0x0
0214f3f0  ldr r1,[0x214f4fc]
0214f3f4  mov r6,r0
0214f3f8  ldr r0,[r1,#0x0]
0214f3fc  mov r10,r7
0214f400  ldr r9,[r0,#0x40]
0214f404  b 0x0214f438
0214f408  mov r0,r9
0214f40c  bl 0x0214f310
0214f410  cmp r0,#0x0
0214f414  addne r0,r7,#0x1
0214f418  movne r1,r7, lsl #0x1
0214f41c  movne r0,r0, lsl #0x10
0214f420  movne r7,r0, asr #0x10
0214f424  add r0,r10,#0x1
0214f428  mov r0,r0, lsl #0x10
0214f42c  strhne r10,[r4,r1]
0214f430  mov r10,r0, asr #0x10
0214f434  add r9,r9,#0x28
0214f438  cmp r10,r8
0214f43c  blt 0x0214f408
0214f440  ldr r9,[0x214f4fc]
0214f444  ldr r0,[r9,#0x0]
0214f448  ldrsh r1,[r0,#0x10]
0214f44c  cmp r7,r1
0214f450  bge 0x0214f494
0214f454  cmp r7,#0x0
0214f458  ble 0x0214f494
0214f45c  mov r8,r7
0214f460  b 0x0214f484
0214f464  mov r0,r8
0214f468  mov r1,r7
0214f46c  bl 0x0200d12c
0214f470  mov r1,r1, lsl #0x1
0214f474  mov r0,r8, lsl #0x1
0214f478  ldrsh r1,[r4,r1]
0214f47c  add r8,r8,#0x1
0214f480  strh r1,[r4,r0]
0214f484  ldr r0,[r9,#0x0]
0214f488  ldrsh r1,[r0,#0x10]
0214f48c  cmp r8,r1
0214f490  blt 0x0214f464
0214f494  add r0,r1,r1, lsr #0x1f
0214f498  mov r0,r0, lsl #0xf
0214f49c  mov r0,r0, asr #0x10
0214f4a0  cmp r0,#0x0
0214f4a4  movgt r0,#0x0
0214f4a8  sub r0,r1,r0
0214f4ac  mov r1,r0, lsl #0x10
0214f4b0  mov r0,r6
0214f4b4  mov r2,r4
0214f4b8  mov r3,r7
0214f4bc  mov r1,r1, asr #0x10
0214f4c0  bl 0x021531d0
0214f4c4  ldr r0,[0x214f4fc]
0214f4c8  mov r2,r6
0214f4cc  ldr r0,[r0,#0x0]
0214f4d0  ldrsh r1,[r0,#0x10]
0214f4d4  add r0,r0,#0x50
0214f4d8  mov r3,r1
0214f4dc  bl 0x021531d0
0214f4e0  mov r0,r4
0214f4e4  bl 0x0201b268
0214f4e8  mov r0,r5
0214f4ec  bl 0x0201b268
0214f4f0  mov r0,r6
0214f4f4  bl 0x0201b268
0214f4f8  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,pc}
