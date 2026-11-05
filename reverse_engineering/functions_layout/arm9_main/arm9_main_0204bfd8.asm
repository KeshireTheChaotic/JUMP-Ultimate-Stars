0204bfd8  stmdb sp!,{r4,lr}
0204bfdc  mov r4,r0
0204bfe0  mov r0,r1
0204bfe4  ldr r1,[r0,#0x0]
0204bfe8  ldr r1,[r1,#0x70]
0204bfec  blx r1
0204bff0  sub r0,r0,#0x1
0204bff4  mov r0,r0, lsl #0xc
0204bff8  str r0,[r4,#0x0]
0204bffc  ldmia sp!,{r4,pc}
