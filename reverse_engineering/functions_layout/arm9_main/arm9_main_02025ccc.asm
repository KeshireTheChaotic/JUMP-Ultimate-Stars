02025ccc  stmdb sp!,{r4,lr}
02025cd0  mov r4,r0
02025cd4  bl 0x02025d14
02025cd8  ldr r1,[0x2025d0c]
02025cdc  ldr r0,[0x2025d10]
02025ce0  str r1,[r4,#0x0]
02025ce4  str r0,[r4,#0xc]
02025ce8  mov r2,#0x1
02025cec  ldr r1,[r4,#0xc]
02025cf0  add r0,r4,r2, lsl #0x2
02025cf4  add r2,r2,#0x1
02025cf8  str r1,[r0,#0xc]
02025cfc  cmp r2,#0xe
02025d00  blt 0x02025cec
02025d04  mov r0,r4
02025d08  ldmia sp!,{r4,pc}
