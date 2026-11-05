0215074c  stmdb sp!,{r3,r4,r5,lr}
02150750  sub sp,sp,#0x8
02150754  mov r5,r0
02150758  ldr r4,[r5,#0x4]
0215075c  ldr r0,[r4,#0x94]
02150760  cmp r0,#0x0
02150764  beq 0x0215076c
02150768  bl 0x0214d498
0215076c  ldr r0,[r5,#0x4]
02150770  ldr r0,[r0,#0x9c]
02150774  cmp r0,#0x0
02150778  beq 0x02150780
0215077c  bl 0x0214d498
02150780  ldrsh r0,[r4,#0xa2]
02150784  add r1,sp,#0x4
02150788  add r2,sp,#0x0
0215078c  mov r0,r0, lsl #0xc
02150790  str r0,[sp,#0x0]
02150794  ldrsh r3,[r4,#0xa0]
02150798  mov r0,r5
0215079c  mov r3,r3, lsl #0xc
021507a0  str r3,[sp,#0x4]
021507a4  bl 0x0214d4c0
021507a8  add sp,sp,#0x8
021507ac  ldmia sp!,{r3,r4,r5,pc}
