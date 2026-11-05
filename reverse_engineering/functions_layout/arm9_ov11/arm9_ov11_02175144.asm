02175144  stmdb sp!,{r3,r4,r5,lr}
02175148  mov r5,r0
0217514c  mov r4,r1
02175150  add r0,r5,r4, lsl #0x2
02175154  ldr r0,[r0,#0x14]
02175158  cmp r0,#0x0
0217515c  ldmiaeq sp!,{r3,r4,r5,pc}
02175160  bl 0x02083ab8
02175164  add r1,r5,r4, lsl #0x2
02175168  ldr r0,[r0,#0xec]
0217516c  ldr r1,[r1,#0x14]
02175170  bl 0x0207b000
02175174  mov r3,#0x0
02175178  add r2,r5,r4, lsl #0x2
0217517c  str r3,[r2,#0x14]
02175180  sub r1,r3,#0x1
02175184  add r0,r5,r4
02175188  strb r1,[r0,#0xc0]
0217518c  str r3,[r2,#0x6c]
02175190  ldr r0,[r5,#0xa8]
02175194  tst r0,#0x200
02175198  ldrne r0,[r2,#0x34]
0217519c  cmpne r0,#0x0
021751a0  ldmiaeq sp!,{r3,r4,r5,pc}
021751a4  ldr r0,[r0,#0x4]
021751a8  bl 0x020282f4
021751ac  add r0,r5,r4, lsl #0x2
021751b0  ldr r0,[r0,#0x34]
021751b4  mov r1,#0x0
021751b8  ldr r0,[r0,#0x4]
