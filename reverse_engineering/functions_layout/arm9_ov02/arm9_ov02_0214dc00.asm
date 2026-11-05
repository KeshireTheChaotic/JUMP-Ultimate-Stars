0214dc00  blt 0x0214db38
0214dc04  cmp r4,#0x0
0214dc08  mvnne r0,#0x0
0214dc0c  strb r0,[r8,#0x0]
0214dc10  add sp,sp,#0xc
0214dc14  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
