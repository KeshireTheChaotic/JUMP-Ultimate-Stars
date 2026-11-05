021550e0  stmdb sp!,{r4,lr}
021550e4  ldr r0,[r0,#0x4]
021550e8  ldr r4,[r0,#0x10]
021550ec  bl 0x02073840
021550f0  cmp r0,#0x0
021550f4  movne r0,#0x1
021550f8  strbne r0,[r4,#0x469]
021550fc  ldmia sp!,{r4,pc}
