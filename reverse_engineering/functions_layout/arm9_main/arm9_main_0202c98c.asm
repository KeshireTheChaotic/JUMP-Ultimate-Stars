0202c98c  stmdb sp!,{r4,lr}
0202c990  mov r4,r0
0202c994  mov r0,r1
0202c998  ldr r3,[r0,#0x0]
0202c99c  mov r1,r2
0202c9a0  ldr r3,[r3,#0x2c]
0202c9a4  blx r3
0202c9a8  mov r0,r0, lsl #0xc
0202c9ac  str r0,[r4,#0x0]
0202c9b0  ldmia sp!,{r4,pc}
