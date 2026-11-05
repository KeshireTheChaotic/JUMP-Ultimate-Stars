01ff9b90  stmdb sp!,{r6,r7,r8,lr}
01ff9b94  ldr r9,[r0,#-0x8]
01ff9b98  cmp r8,#0x0
01ff9b9c  add r9,r9,r8
01ff9ba0  moveq r6,#0x80
01ff9ba4  beq 0x01ff9bc4
01ff9ba8  mov r6,#0x0
01ff9bac  mov r7,#0x1
01ff9bb0  movs r10,r8, lsl #0x18
01ff9bb4  blne 0x01ff9b64
01ff9bb8  movs r10,r8, lsr #0x8
01ff9bbc  blne 0x01ff9b38
01ff9bc0  mov r6,r6, lsr r7
01ff9bc4  orr r6,r6,r6, lsl #0x8
01ff9bc8  orr r6,r6,r6, lsl #0x10
01ff9bcc  str r6,[r9,#0x0]
01ff9bd0  str r6,[r9,#0x100]
01ff9bd4  str r6,[r9,#0x200]
01ff9bd8  str r6,[r9,#0x300]
01ff9bdc  ldmia sp!,{r6,r7,r8,pc}
