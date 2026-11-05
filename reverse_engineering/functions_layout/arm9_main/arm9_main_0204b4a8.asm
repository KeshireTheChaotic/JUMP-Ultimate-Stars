0204b4a8  stmdb sp!,{r4,lr}
0204b4ac  ldr r1,[r0,#0x0]
0204b4b0  mov r4,r0
0204b4b4  ldr r1,[r1,#0x18]
0204b4b8  blx r1
0204b4bc  ldrh r2,[r4,#0x8]
0204b4c0  ldrh r1,[r4,#0xa]
0204b4c4  mul r1,r2,r1
0204b4c8  mul r0,r1,r0
0204b4cc  mov r0,r0, lsr #0x3
0204b4d0  ldmia sp!,{r4,pc}
