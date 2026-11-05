0215e9a4  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0215e9a8  mov r5,#0x0
0215e9ac  mov r7,r0
0215e9b0  mov r6,r1
0215e9b4  mov r4,r5
0215e9b8  add r0,r7,r5, lsl #0x2
0215e9bc  ldr r0,[r0,#0x8]
0215e9c0  mov r1,r6
0215e9c4  ldr r0,[r0,#0x4]
0215e9c8  mov r2,r4
0215e9cc  bl 0x02023894
0215e9d0  add r0,r7,r5, lsl #0x2
0215e9d4  ldr r0,[r0,#0x8]
0215e9d8  ldr r0,[r0,#0x4]
0215e9dc  ldr r0,[r0,#0x68]
0215e9e0  ldr r1,[r0,#0x0]
0215e9e4  ldr r1,[r1,#0x6c]
0215e9e8  blx r1
0215e9ec  add r5,r5,#0x1
0215e9f0  cmp r5,#0x2
0215e9f4  blt 0x0215e9b8
0215e9f8  ldmia sp!,{r3,r4,r5,r6,r7,pc}
