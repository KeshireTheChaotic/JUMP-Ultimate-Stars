0204adb4  stmdb sp!,{r3,lr}
0204adb8  ldr r0,[r0,#0x54]
0204adbc  ldr r1,[r0,#0x0]
0204adc0  ldr r1,[r1,#0x68]
0204adc4  blx r1
0204adc8  ldmia sp!,{r3,pc}
