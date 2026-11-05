0214d434  stmdb sp!,{r3,r4,r5,lr}
0214d438  sub sp,sp,#0x8
0214d43c  mov r5,r0
0214d440  ldr r4,[r5,#0x4]
0214d444  ldr r0,[r4,#0x94]
0214d448  cmp r0,#0x0
0214d44c  beq 0x0214d454
0214d450  bl 0x0214d498
0214d454  ldr r0,[r5,#0x4]
0214d458  ldr r0,[r0,#0x9c]
0214d45c  cmp r0,#0x0
0214d460  beq 0x0214d468
0214d464  bl 0x0214d498
0214d468  ldrsh r0,[r4,#0xa2]
0214d46c  add r1,sp,#0x4
0214d470  add r2,sp,#0x0
0214d474  mov r0,r0, lsl #0xc
0214d478  str r0,[sp,#0x0]
0214d47c  ldrsh r3,[r4,#0xa0]
0214d480  mov r0,r5
0214d484  mov r3,r3, lsl #0xc
0214d488  str r3,[sp,#0x4]
0214d48c  bl 0x0214d4c0
0214d490  add sp,sp,#0x8
0214d494  ldmia sp!,{r3,r4,r5,pc}
