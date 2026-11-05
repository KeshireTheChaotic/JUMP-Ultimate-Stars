0215b20c  stmdb sp!,{r3,lr}
0215b210  ldr r0,[r0,#0x4]
0215b214  ldr r1,[r1,#0x4]
0215b218  ldr r0,[r0,#0x64]
0215b21c  ldr r2,[r0,#0x0]
0215b220  ldr r2,[r2,#0x60]
0215b224  blx r2
0215b228  ldmia sp!,{r3,pc}
