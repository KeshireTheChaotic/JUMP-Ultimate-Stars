037fe690  add r12,r1,r2
037fe694  cmp r1,r12
037fe698  ldmialt r0!,{r2}
037fe69c  stmialt r1!,{r2}
037fe6a0  blt 0x037fe694
037fe6a4  bx lr
