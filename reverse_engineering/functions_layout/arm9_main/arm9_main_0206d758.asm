0206d758  ldmia r1,{r2,r3}
0206d75c  mov r1,r2, lsl #0x1b
0206d760  mov r2,r3, lsl #0x1b
0206d764  orr r0,r0,r1, lsr #0x16
0206d768  orr r0,r0,r2, lsr #0x11
0206d76c  mov r0,r0, lsl #0x10
0206d770  mov r0,r0, lsr #0x10
0206d774  bx lr
