0207e018  stmdb sp!,{r4,lr}
0207e01c  ldr r4,[r0,#0xf8]
0207e020  mov r0,r4
0207e024  bl 0x02161bac
0207e028  ldr r2,[r4,#0x14]
0207e02c  ldr r1,[0x207e04c]
0207e030  add r0,r2,r0, lsl #0x3
0207e034  ldrb r0,[r0,#0x2]
0207e038  ldrsb r0,[r1,r0]
0207e03c  cmp r0,#0x0
0207e040  moveq r0,#0x1
0207e044  movne r0,#0x0
0207e048  ldmia sp!,{r4,pc}
