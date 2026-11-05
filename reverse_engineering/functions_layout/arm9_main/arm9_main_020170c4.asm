020170c4  stmdb sp!,{r4,lr}
020170c8  ldr r1,[r0,#0x0]
020170cc  ldr r4,[r0,#0xc]
020170d0  ldr r1,[r1,#0x5c]
020170d4  blx r1
020170d8  mov r2,#0x0
020170dc  b 0x020170f8
020170e0  ldr r1,[r4,#0x0]
020170e4  cmp r1,#0x0
020170e8  movne r0,#0x0
020170ec  ldmiane sp!,{r4,pc}
020170f0  add r4,r4,#0x4
020170f4  add r2,r2,#0x1
020170f8  cmp r2,r0, lsr #0x2
020170fc  bcc 0x020170e0
02017100  mov r0,#0x1
02017104  ldmia sp!,{r4,pc}
