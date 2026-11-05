0215fb3c  stmdb sp!,{r3,lr}
0215fb40  ldrb lr,[r1,#0x1]
0215fb44  add r12,r0,#0x8
0215fb48  mov r1,#0x1
0215fb4c  mov r3,lr, asr #0x5
0215fb50  ldr r2,[r12,r3,lsl #0x2]
0215fb54  and r0,lr,#0x1f
0215fb58  orr r0,r2,r1, lsl r0
0215fb5c  str r0,[r12,r3,lsl #0x2]
0215fb60  ldmia sp!,{r3,pc}
