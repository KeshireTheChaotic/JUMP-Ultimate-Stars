02155634  stmdb sp!,{r3,lr}
02155638  ldr r0,[r0,#0x8c]
0215563c  mov r2,#0x1000
02155640  ldr r0,[r0,#0x4]
02155644  mov r1,r2, lsl r1
02155648  ldr r2,[r0,#0x0]
0215564c  ldr r2,[r2,#0x94]
02155650  blx r2
02155654  ldmia sp!,{r3,pc}
