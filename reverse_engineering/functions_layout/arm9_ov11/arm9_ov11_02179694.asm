02179694  stmdb sp!,{r4,lr}
02179698  ldr r0,[r0,#0x4]
0217969c  mov r2,#0x0
021796a0  ldr r4,[r0,#0x10]
021796a4  add r1,r4,r2, lsl #0x1
021796a8  ldrsh r0,[r1,#0x3c]
021796ac  add r2,r2,#0x1
021796b0  cmp r0,#0x0
021796b4  subne r0,r0,#0x1
021796b8  strhne r0,[r1,#0x3c]
021796bc  cmp r2,#0xd
021796c0  blt 0x021796a4
021796c4  ldr r0,[0x21796dc]
021796c8  ldr r0,[r0,#0x0]
021796cc  ldr r0,[r0,#0x4]
021796d0  bl 0x02031070
021796d4  str r0,[r4,#0x38]
021796d8  ldmia sp!,{r4,pc}
