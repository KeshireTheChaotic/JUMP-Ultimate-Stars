0205de94  stmdb sp!,{r4,r5,r6,r7,lr}
0205de98  sub sp,sp,#0x4
0205de9c  ldr r5,[0x205dfa0]
0205dea0  mov r7,#0x0
0205dea4  ldr r4,[0x205dfa4]
0205dea8  ldr r1,[r5,#0x110]
0205deac  mov r0,r1, lsl #0x1f
0205deb0  movs r0,r0, asr #0x1f
0205deb4  beq 0x0205df88
0205deb8  ldr r0,[r5,#0x114]
0205debc  cmp r0,#0x0
0205dec0  bne 0x0205ded0
0205dec4  mov r0,r5
0205dec8  bl 0x0205dd64
0205decc  b 0x0205df88
0205ded0  mov r0,r1, lsl #0x1d
0205ded4  movs r0,r0, asr #0x1f
0205ded8  beq 0x0205df08
0205dedc  ldr r0,[r5,#0x118]
0205dee0  cmp r0,#0x0
0205dee4  beq 0x0205df08
0205dee8  mov r0,r5
0205deec  bl 0x0205bdd4
0205def0  ldr r0,[r5,#0x110]
0205def4  orr r0,r0,#0x2
0205def8  str r0,[r5,#0x110]
0205defc  ldr r0,[r5,#0x110]
0205df00  bic r0,r0,#0x4
0205df04  str r0,[r5,#0x110]
0205df08  ldr r0,[r5,#0x110]
0205df0c  mov r0,r0, lsl #0x1e
0205df10  movs r0,r0, asr #0x1f
0205df14  beq 0x0205df88
0205df18  add r0,r5,#0xe8
0205df1c  bl 0x0205e044
0205df20  ldr r1,[r5,#0x154]
0205df24  add r0,r5,#0xe8
0205df28  mov r1,r1, lsl #0x1
0205df2c  ldrsh r6,[r4,r1]
0205df30  bl 0x0205e05c
0205df34  mov r0,r0, asr #0x8
0205df38  mov r0,r0, lsl #0x1
0205df3c  ldrsh r1,[r4,r0]
0205df40  ldr r0,[r5,#0x158]
0205df44  add r6,r1,r6
0205df48  cmp r6,r0
0205df4c  beq 0x0205df60
0205df50  mov r0,r5
0205df54  mov r1,r6
0205df58  bl 0x0205bd40
0205df5c  str r6,[r5,#0x158]
0205df60  ldr r0,[r5,#0x110]
0205df64  mov r0,r0, lsl #0x1c
0205df68  movs r0,r0, asr #0x1f
0205df6c  beq 0x0205df88
0205df70  add r0,r5,#0xe8
0205df74  bl 0x0205e02c
0205df78  cmp r0,#0x0
0205df7c  beq 0x0205df88
0205df80  mov r0,r5
0205df84  bl 0x0205dd64
0205df88  add r7,r7,#0x1
0205df8c  cmp r7,#0x4
0205df90  add r5,r5,#0x170
0205df94  blt 0x0205dea8
0205df98  add sp,sp,#0x4
0205df9c  ldmia sp!,{r4,r5,r6,r7,pc}
