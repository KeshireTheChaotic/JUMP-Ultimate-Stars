021ca280  stmdb sp!,{r4,lr}
021ca284  mov r4,r0
021ca288  blx 0x021c5ef0
021ca28c  ldr r1,[0x21ca29c]
021ca290  mov r0,r4
021ca294  str r1,[r4,#0x0]
021ca298  ldmia sp!,{r4,pc}
