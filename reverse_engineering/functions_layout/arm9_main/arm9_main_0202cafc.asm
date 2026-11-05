0202cafc  stmdb sp!,{r4,lr}
0202cb00  ldr r2,[0x202cb40]
0202cb04  ldr r3,[r0,#0x0]
0202cb08  ldr lr,[r2,#0x38]
0202cb0c  ldr r12,[0x202cb44]
0202cb10  add lr,lr,#0x1
0202cb14  and r4,lr,#0x7
0202cb18  str r4,[r2,#0x38]
0202cb1c  mov r4,lr, lsl #0x1d
0202cb20  ldr r3,[r3,#0x20]
0202cb24  add r2,r12,r4, lsr #0x1b
0202cb28  blx r3
0202cb2c  ldr r0,[0x202cb40]
0202cb30  ldr r1,[0x202cb44]
0202cb34  ldr r0,[r0,#0x38]
0202cb38  add r0,r1,r0, lsl #0x2
0202cb3c  ldmia sp!,{r4,pc}
