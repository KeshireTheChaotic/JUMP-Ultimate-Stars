021ba304  stmdb sp!,{r4,lr}
021ba308  mov r0,r1, lsl #0x2
021ba30c  bl 0x0201b22c
021ba310  movs r4,r0
021ba314  bne 0x021ba324
021ba318  ldr r0,[0x21ba32c]
021ba31c  blx 0x02003bd8
021ba320  blx 0x02001f18
021ba324  mov r0,r4
021ba328  ldmia sp!,{r4,pc}
