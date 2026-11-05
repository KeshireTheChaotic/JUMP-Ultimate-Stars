0204ae4c  stmdb sp!,{r3,lr}
0204ae50  ldr r0,[r0,#0x54]
0204ae54  ldr r1,[r0,#0x0]
0204ae58  ldr r1,[r1,#0x100]
0204ae5c  blx r1
0204ae60  ldmia sp!,{r3,pc}
