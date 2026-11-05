021a2efc  stmdb sp!,{r4,lr}
021a2f00  mov r4,r0
021a2f04  blx 0x0217668c
021a2f08  orr r1,r0,#0x80
021a2f0c  mov r0,r4
021a2f10  strb r1,[r4,#0x34]
021a2f14  bl 0x021a2f1c
021a2f18  ldmia sp!,{r4,pc}
