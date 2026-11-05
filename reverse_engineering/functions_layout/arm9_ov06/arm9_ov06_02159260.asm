02159260  stmdb sp!,{r3,lr}
02159264  ldr r1,[r1,#0x4]
02159268  ldr r0,[r0,#0x1b4]
0215926c  ldrsh r1,[r1,#0x4]
02159270  mov r1,r1, lsl #0x6
02159274  bl 0x020783cc
02159278  mov r0,#0x0
0215927c  ldmia sp!,{r3,pc}
