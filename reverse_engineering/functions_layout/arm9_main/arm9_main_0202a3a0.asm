0202a3a0  stmdb sp!,{r3,r4,r5,lr}
0202a3a4  ldr r0,[0x202a3f4]
0202a3a8  ldr r0,[r0,#0x330]
0202a3ac  ldrb r0,[r0,#0x420]
0202a3b0  cmp r0,#0x0
0202a3b4  ldmiaeq sp!,{r3,r4,r5,pc}
0202a3b8  ldr r0,[0x202a3f8]
0202a3bc  mov r4,#0x0
0202a3c0  ldr r5,[r0,#0x52c]
0202a3c4  b 0x0202a3e8
0202a3c8  ldrb r0,[r5,#0x25]
0202a3cc  mov r0,r0, lsl #0x1c
0202a3d0  movs r0,r0, lsr #0x1f
0202a3d4  beq 0x0202a3e4
0202a3d8  mov r0,r5
0202a3dc  mov r1,r4
0202a3e0  bl 0x0202a2a4
0202a3e4  ldr r5,[r5,#0x20]
0202a3e8  cmp r5,#0x0
0202a3ec  bne 0x0202a3c8
0202a3f0  ldmia sp!,{r3,r4,r5,pc}
