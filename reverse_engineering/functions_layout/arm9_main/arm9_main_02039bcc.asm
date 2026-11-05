02039bcc  stmdb sp!,{r4,lr}
02039bd0  ldrh r12,[r0,#0x8]
02039bd4  mov r4,r1, lsr #0x1
02039bd8  mov lr,r2, lsr #0x3
02039bdc  mov r12,r12, lsr #0x3
02039be0  mul r12,lr,r12
02039be4  and r4,r4,#0x3
02039be8  add r12,r12,r1, lsr #0x3
02039bec  mov lr,r2, lsl #0x1d
02039bf0  add r2,r4,r12, lsl #0x5
02039bf4  tst r1,#0x1
02039bf8  add r1,r2,lr, lsr #0x1b
02039bfc  ldr r2,[r0,#0xc]
02039c00  ldrb r0,[r2,r1]
02039c04  andeq r0,r0,#0xf0
02039c08  orreq r0,r3,r0
02039c0c  andne r0,r0,#0xf
02039c10  orrne r0,r0,r3, lsl #0x4
02039c14  strb r0,[r2,r1]
02039c18  ldmia sp!,{r4,pc}
