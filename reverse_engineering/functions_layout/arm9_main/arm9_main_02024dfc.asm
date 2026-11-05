02024dfc  stmdb sp!,{r4,lr}
02024e00  ldr r0,[r1,#0x50]
02024e04  mov r4,r2
02024e08  ldr r1,[r0,#0x0]
02024e0c  ldr r1,[r1,#0x60]
02024e10  blx r1
02024e14  add r0,r0,r0, lsr #0x1f
02024e18  mov r0,r0, asr #0x1
02024e1c  strh r0,[r4,#0x0]
02024e20  ldmia sp!,{r4,pc}
