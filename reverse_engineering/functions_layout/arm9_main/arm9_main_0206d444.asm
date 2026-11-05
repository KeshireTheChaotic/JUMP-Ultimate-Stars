0206d444  stmdb sp!,{r3,r4,r5,lr}
0206d448  mov r5,r0
0206d44c  mov r4,#0x0
0206d450  b 0x0206d46c
0206d454  ldr r0,[r5,r4,lsl #0x2]
0206d458  bl 0x0201b244
0206d45c  add r0,r5,r4, lsl #0x2
0206d460  ldr r0,[r0,#0x20]
0206d464  bl 0x0201b244
0206d468  add r4,r4,#0x1
0206d46c  ldr r0,[r5,#0x48]
0206d470  cmp r4,r0
0206d474  blt 0x0206d454
0206d478  mov r0,r5
0206d47c  bl 0x0201b244
0206d480  ldmia sp!,{r3,r4,r5,pc}
