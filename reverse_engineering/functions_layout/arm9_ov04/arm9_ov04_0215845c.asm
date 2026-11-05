0215845c  stmdb sp!,{r3,r4,r5,lr}
02158460  movs r5,r0
02158464  ldmiaeq sp!,{r3,r4,r5,pc}
02158468  mov r4,#0x0
0215846c  add r0,r5,r4, lsl #0x2
02158470  ldr r0,[r0,#0x4]
02158474  bl 0x0215812c
02158478  add r4,r4,#0x1
0215847c  cmp r4,#0x4
02158480  blt 0x0215846c
02158484  ldmia sp!,{r3,r4,r5,pc}
