0215dffc  stmdb sp!,{r4,r5,r6,lr}
0215e000  mov r6,r0
0215e004  ldr r4,[r6,#0x4]
0215e008  ldr r0,[r4,#0x94]
0215e00c  cmp r0,#0x0
0215e010  moveq r5,#0x0
0215e014  beq 0x0215e020
0215e018  bl 0x021504fc
0215e01c  mov r5,r0
0215e020  ldr r0,[r6,#0x4]
0215e024  ldrsh r1,[r4,#0xa0]
0215e028  ldrsh r2,[r4,#0xa2]
0215e02c  ldr r0,[r0,#0x50]
0215e030  mov r1,r1, lsl #0xc
0215e034  str r1,[r0,#0xc]
0215e038  mov r1,r2, lsl #0xc
0215e03c  str r1,[r0,#0x10]
0215e040  mov r1,#0x1
0215e044  bl 0x02150090
0215e048  ldr r0,[r5,#0x4]
0215e04c  blx 0x021b712c
0215e050  cmp r0,#0x0
0215e054  ldmiane sp!,{r4,r5,r6,pc}
0215e058  mov r0,#0x78
0215e05c  mov r1,#0x3
0215e060  bl 0x0207342c
0215e064  ldmia sp!,{r4,r5,r6,pc}
