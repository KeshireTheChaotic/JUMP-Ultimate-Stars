021c7880  stmdb sp!,{r4,lr}
021c7884  mov r0,r1, lsl #0x3
021c7888  bl 0x0201b22c
021c788c  movs r4,r0
021c7890  bne 0x021c78a0
021c7894  ldr r0,[0x21c78a8]
021c7898  blx 0x02003bd8
021c789c  blx 0x02001f18
021c78a0  mov r0,r4
021c78a4  ldmia sp!,{r4,pc}
