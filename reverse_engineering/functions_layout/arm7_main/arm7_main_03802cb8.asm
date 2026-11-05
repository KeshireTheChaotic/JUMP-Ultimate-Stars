03802cb8  stmdb sp!,{r4,r5,r6,lr}
03802cbc  mov r6,r0
03802cc0  mov r5,r1
03802cc4  mov r4,#0x0
03802cc8  b 0x03802ce8
03802ccc  ands r0,r6,#0x1
03802cd0  beq 0x03802ce0
03802cd4  mov r0,r4
03802cd8  mov r1,r5
03802cdc  bl 0x037ff068
03802ce0  add r4,r4,#0x1
03802ce4  mov r6,r6, lsr #0x1
03802ce8  cmp r4,#0x10
03802cec  bge 0x03802cf8
03802cf0  cmp r6,#0x0
03802cf4  bne 0x03802ccc
03802cf8  ldmia sp!,{r4,r5,r6,lr}
03802cfc  bx lr
