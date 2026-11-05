021543ac  stmdb sp!,{r4,lr}
021543b0  mov r4,r0
021543b4  cmp r1,#0x0
021543b8  bge 0x021543c4
021543bc  bl 0x0214f704
021543c0  mov r1,r0
021543c4  add r0,r4,r1, lsl #0x2
021543c8  ldr r0,[r0,#0x44]
021543cc  cmp r0,#0x0
021543d0  movge r0,#0x1
021543d4  movlt r0,#0x0
021543d8  ldmia sp!,{r4,pc}
