03801b88  stmdb sp!,{r4,r5,r6,lr}
03801b8c  mov r6,r0
03801b90  mov r5,#0x0
03801b94  add r4,r6,#0x28
03801b98  ldr r0,[r6,#0x28]
03801b9c  bl 0x03801c78
03801ba0  ldr r1,[r4,#0x0]
03801ba4  add r1,r1,#0x1
03801ba8  str r1,[r4,#0x0]
03801bac  and r1,r0,#0x7f
03801bb0  orr r5,r1,r5, lsl #0x7
03801bb4  ands r0,r0,#0x80
03801bb8  bne 0x03801b98
03801bbc  mov r0,r5
03801bc0  ldmia sp!,{r4,r5,r6,lr}
03801bc4  bx lr
