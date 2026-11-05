021ca838  stmdb sp!,{r4,lr}
021ca83c  mov r4,r0
021ca840  mov r0,r1
021ca844  bl 0x021c997c
021ca848  add r1,r4,#0x100
021ca84c  strh r0,[r1,#0x70]
021ca850  ldmia sp!,{r4,pc}
