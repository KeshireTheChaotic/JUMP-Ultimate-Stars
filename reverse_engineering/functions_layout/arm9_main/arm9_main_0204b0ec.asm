0204b0ec  stmdb sp!,{r3,lr}
0204b0f0  ldr r0,[r0,#0x4]
0204b0f4  ldr r2,[r0,#0x0]
0204b0f8  ldr r2,[r2,#0x124]
0204b0fc  blx r2
0204b100  bl 0x02011b38
0204b104  ldmia sp!,{r3,pc}
