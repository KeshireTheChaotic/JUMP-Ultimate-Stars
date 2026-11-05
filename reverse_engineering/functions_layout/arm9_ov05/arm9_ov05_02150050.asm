02150050  stmdb sp!,{r4,lr}
02150054  ldr r0,[r0,#0x4]
02150058  ldr r4,[r0,#0x10]
0215005c  bl 0x02073840
02150060  cmp r0,#0x0
02150064  movne r0,#0x1
02150068  strbne r0,[r4,#0x552]
0215006c  ldmia sp!,{r4,pc}
