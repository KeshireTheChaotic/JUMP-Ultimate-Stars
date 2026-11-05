021bcbb0  stmdb sp!,{r3,r4,lr}
021bcbb4  sub sp,sp,#0xc
021bcbb8  mov r1,#0xf
021bcbbc  str r1,[sp,#0x0]
021bcbc0  mov r1,#0x0
021bcbc4  str r1,[sp,#0x4]
021bcbc8  mov r4,r0
021bcbcc  str r1,[sp,#0x8]
021bcbd0  ldr r1,[r4,#0x1c]
021bcbd4  ldrb r0,[r4,#0x9b]
021bcbd8  ldr r2,[r1,#0x4]
021bcbdc  ldrsh lr,[r4,#0x58]
021bcbe0  mov r1,r0, asr #0x1
021bcbe4  ldr r0,[r2,#0x64]
021bcbe8  mov r2,r1, lsr #0x1f
021bcbec  rsb r1,r2,r1, lsl #0x1e
021bcbf0  ldr r12,[r0,#0x0]
021bcbf4  ldr r3,[0x21bcc24]
021bcbf8  add r1,r2,r1, ror #0x1e
021bcbfc  ldrsh r2,[r4,#0x5a]
021bcc00  ldr r3,[r3,r1,lsl #0x2]
021bcc04  ldr r12,[r12,#0x60]
021bcc08  sub r1,lr,#0x3
021bcc0c  blx r12
021bcc10  ldrb r0,[r4,#0x9b]
021bcc14  add r0,r0,#0x1
021bcc18  strb r0,[r4,#0x9b]
021bcc1c  add sp,sp,#0xc
021bcc20  ldmia sp!,{r3,r4,pc}
