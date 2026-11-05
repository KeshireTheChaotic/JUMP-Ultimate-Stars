02077cb8  stmdb sp!,{r3,r4,r5,lr}
02077cbc  ldr r2,[0x2077d34]
02077cc0  ldr r3,[r1,#0x34]
02077cc4  ldr r2,[r2,#0x0]
02077cc8  ldrb r4,[r1,#0x41]
02077ccc  ldr r12,[r2,#0x48]
02077cd0  mov r2,#0x14
02077cd4  mla r5,r4,r2,r12
02077cd8  ldrsb r3,[r3,#0x8]
02077cdc  add r2,r0,#0x500
02077ce0  sub r4,r3,#0x1
02077ce4  add lr,r5,r4, lsl #0x3
02077ce8  ldrb r12,[lr,#0x5]
02077cec  add r3,r5,r4, lsl #0x1
02077cf0  mov r12,r12, lsl #0x6
02077cf4  strh r12,[r1,#0x16]
02077cf8  ldrsh r12,[r1,#0x16]
02077cfc  strh r12,[r1,#0x18]
02077d00  ldrb r12,[r5,r4,lsl #0x3]
02077d04  strb r12,[r1,#0x13]
02077d08  ldrsb r12,[lr,#0x4]
02077d0c  strb r12,[r1,#0x2a]
02077d10  ldrsb r12,[lr,#0x1]
02077d14  strb r12,[r1,#0x2b]
02077d18  ldrh r3,[r3,#0x10]
02077d1c  strh r3,[r1,#0x30]
02077d20  ldrsb r2,[r2,#0xe4]
02077d24  add r1,r2,#0x1
02077d28  strb r1,[r0,#0x5e4]
02077d2c  mov r0,r2
02077d30  ldmia sp!,{r3,r4,r5,pc}
