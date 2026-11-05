02155ae8  stmdb sp!,{r3,lr}
02155aec  ldr r0,[r0,#0x4]
02155af0  mov r1,#0x10
02155af4  ldr r2,[r0,#0x0]
02155af8  ldr r2,[r2,#0x148]
02155afc  blx r2
02155b00  ldmia sp!,{r3,pc}
