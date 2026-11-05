0202cc38  stmdb sp!,{r4,lr}
0202cc3c  ldr r2,[0x202cc7c]
0202cc40  ldr r3,[r0,#0x0]
0202cc44  ldr lr,[r2,#0x70]
0202cc48  ldr r12,[0x202cc80]
0202cc4c  add lr,lr,#0x1
0202cc50  and r4,lr,#0x7
0202cc54  str r4,[r2,#0x70]
0202cc58  mov r4,lr, lsl #0x1d
0202cc5c  ldr r3,[r3,#0x20]
0202cc60  add r2,r12,r4, lsr #0x1c
0202cc64  blx r3
0202cc68  ldr r0,[0x202cc7c]
0202cc6c  ldr r1,[0x202cc80]
0202cc70  ldr r0,[r0,#0x70]
0202cc74  add r0,r1,r0, lsl #0x1
0202cc78  ldmia sp!,{r4,pc}
