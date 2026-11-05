0205dfa8  stmdb sp!,{r4,r5,r6,lr}
0205dfac  ldr r4,[0x205dfe8]
0205dfb0  mov r6,r0
0205dfb4  mov r5,#0x0
0205dfb8  ldr r0,[r4,#0x110]
0205dfbc  mov r0,r0, lsl #0x1f
0205dfc0  movs r0,r0, asr #0x1f
0205dfc4  beq 0x0205dfd4
0205dfc8  mov r0,r4
0205dfcc  mov r1,r6
0205dfd0  bl 0x0205de00
0205dfd4  add r5,r5,#0x1
0205dfd8  cmp r5,#0x4
0205dfdc  add r4,r4,#0x170
0205dfe0  blt 0x0205dfb8
0205dfe4  ldmia sp!,{r4,r5,r6,pc}
