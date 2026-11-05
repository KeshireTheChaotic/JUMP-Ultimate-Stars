0215df14  stmdb sp!,{r4,lr}
0215df18  ldr r0,[r0,#0x4]
0215df1c  ldr r4,[r0,#0x10]
0215df20  bl 0x02073840
0215df24  cmp r0,#0x0
0215df28  movne r0,#0x1
0215df2c  strbne r0,[r4,#0xf0]
0215df30  ldmia sp!,{r4,pc}
