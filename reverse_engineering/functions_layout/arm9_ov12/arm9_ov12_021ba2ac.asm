021ba2ac  stmdb sp!,{r4,lr}
021ba2b0  mov r0,r1, lsl #0x3
021ba2b4  bl 0x0201b22c
021ba2b8  movs r4,r0
021ba2bc  bne 0x021ba2cc
021ba2c0  ldr r0,[0x21ba2d4]
021ba2c4  blx 0x02003bd8
021ba2c8  blx 0x02001f18
021ba2cc  mov r0,r4
021ba2d0  ldmia sp!,{r4,pc}
