021592a0  stmdb sp!,{r3,lr}
021592a4  ldr r1,[r1,#0x4]
021592a8  ldr r0,[r0,#0x1b4]
021592ac  ldrsh r1,[r1,#0x4]
021592b0  mov r1,r1, lsl #0x6
021592b4  bl 0x020783dc
021592b8  mov r0,#0x0
021592bc  ldmia sp!,{r3,pc}
