037fe47c  stmdb sp!,{r4,r5,r6,lr}
037fe480  mov r6,r0, lsl #0x8
037fe484  mov r5,#0xc
037fe488  mov r4,#0x0
037fe48c  mov r0,r5
037fe490  mov r1,r6
037fe494  mov r2,r4
037fe498  bl 0x037fe9ec
037fe49c  cmp r0,#0x0
037fe4a0  bne 0x037fe48c
037fe4a4  ldmia sp!,{r4,r5,r6,lr}
037fe4a8  bx lr
