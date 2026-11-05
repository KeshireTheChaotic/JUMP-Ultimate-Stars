0215fe08  stmdb sp!,{r4,r5,r6,lr}
0215fe0c  mov r5,#0x0
0215fe10  mov r6,r0
0215fe14  mov r4,r5
0215fe18  add r0,r6,r5, lsl #0x2
0215fe1c  ldr r0,[r0,#0x4]
0215fe20  cmp r0,#0x0
0215fe24  beq 0x0215fe3c
0215fe28  ldr r0,[r0,#0x4]
0215fe2c  mov r1,r4
0215fe30  ldr r2,[r0,#0x0]
0215fe34  ldr r2,[r2,#0xd8]
0215fe38  blx r2
0215fe3c  add r5,r5,#0x1
0215fe40  cmp r5,#0x7
0215fe44  blt 0x0215fe18
0215fe48  ldmia sp!,{r4,r5,r6,pc}
