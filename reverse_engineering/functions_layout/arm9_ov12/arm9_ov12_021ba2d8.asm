021ba2d8  stmdb sp!,{r4,lr}
021ba2dc  mov r0,r1, lsl #0x3
021ba2e0  bl 0x0201b22c
021ba2e4  movs r4,r0
021ba2e8  bne 0x021ba2f8
021ba2ec  ldr r0,[0x21ba300]
021ba2f0  blx 0x02003bd8
021ba2f4  blx 0x02001f18
021ba2f8  mov r0,r4
021ba2fc  ldmia sp!,{r4,pc}
