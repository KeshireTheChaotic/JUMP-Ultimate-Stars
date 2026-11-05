037fbcb8  stmdb sp!,{r4,lr}
037fbcbc  mov r3,#0xc
037fbcc0  mul r4,r0,r3
037fbcc4  ldr r3,[0x37fbcf8]
037fbcc8  str r1,[r3,r4]
037fbccc  ldr r1,[0x37fbcfc]
037fbcd0  str r2,[r1,r4]
037fbcd4  mov r1,#0x1
037fbcd8  add r0,r0,#0x3
037fbcdc  mov r0,r1, lsl r0
037fbce0  bl 0x037fbc4c
037fbce4  mov r1,#0x1
037fbce8  ldr r0,[0x37fbd00]
037fbcec  str r1,[r0,r4]
037fbcf0  ldmia sp!,{r4,lr}
037fbcf4  bx lr
