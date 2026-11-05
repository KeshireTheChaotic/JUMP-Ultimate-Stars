02025bcc  stmdb sp!,{r3,lr}
02025bd0  ldr r1,[0x2025c20]
02025bd4  mov r0,r0, lsl #0x10
02025bd8  ldr r12,[r1,#0x548]
02025bdc  mov r2,r0, lsr #0x10
02025be0  ldr r1,[r1,#0x54c]
02025be4  mov r3,#0x0
02025be8  b 0x02025c10
02025bec  ldr r0,[r12,r3,lsl #0x3]
02025bf0  mov r0,r0, lsl #0x10
02025bf4  cmp r2,r0, lsr #0x10
02025bf8  bne 0x02025c0c
02025bfc  add r0,r12,r3, lsl #0x3
02025c00  ldr r0,[r0,#0x4]
02025c04  blx r0
02025c08  ldmia sp!,{r3,pc}
02025c0c  add r3,r3,#0x1
02025c10  cmp r3,r1
02025c14  bcc 0x02025bec
02025c18  mov r0,#0x0
02025c1c  ldmia sp!,{r3,pc}
