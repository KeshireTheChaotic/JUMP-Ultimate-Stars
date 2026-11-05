0215fe4c  stmdb sp!,{r4,lr}
0215fe50  mov r4,r0
0215fe54  ldr r1,[r4,#0x4]
0215fe58  mov r0,#0x1
0215fe5c  ldr r2,[r1,#0x10]
0215fe60  mov r1,#0x2
0215fe64  mov r3,#0x0
0215fe68  add r12,r2,r1, lsl #0x2
0215fe6c  ldr r12,[r12,#0x4]
0215fe70  ldr r12,[r12,#0x4]
0215fe74  ldr r12,[r12,#0x64]
0215fe78  ldrb r12,[r12,#0x10]
0215fe7c  mov lr,r12, lsl #0x18
0215fe80  movs lr,lr, lsr #0x1f
0215fe84  beq 0x0215fe94
0215fe88  mov r12,r12, lsl #0x1e
0215fe8c  movs r12,r12, lsr #0x1f
0215fe90  movne r0,r3
0215fe94  add r1,r1,#0x1
0215fe98  cmp r1,#0x6
0215fe9c  ble 0x0215fe68
0215fea0  cmp r0,#0x0
0215fea4  ldmiaeq sp!,{r4,pc}
0215fea8  ldr r0,[r2,#0x20]
0215feac  mov r1,#0x3
0215feb0  bl 0x0214ec4c
0215feb4  ldr r0,[r4,#0x4]
0215feb8  bl 0x020282f4
0215febc  ldmia sp!,{r4,pc}
