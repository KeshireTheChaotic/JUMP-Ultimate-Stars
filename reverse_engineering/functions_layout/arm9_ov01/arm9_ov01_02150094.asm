02150094  stmdb sp!,{r3,lr}
02150098  ldr r0,[r0,#0x4]
0215009c  mov r1,#0x10
021500a0  ldr r2,[r0,#0x0]
021500a4  ldr r2,[r2,#0x148]
021500a8  blx r2
021500ac  ldmia sp!,{r3,pc}
