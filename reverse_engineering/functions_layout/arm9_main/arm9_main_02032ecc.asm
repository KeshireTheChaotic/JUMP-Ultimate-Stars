02032ecc  stmdb sp!,{r4,r5,r6,lr}
02032ed0  strh r1,[r0,#0x4a]
02032ed4  ldr r0,[r0,#0x38]
02032ed8  ldr r4,[0x2032f1c]
02032edc  ldr r6,[r0,#0x4c]
02032ee0  mov r0,r1, lsl #0x10
02032ee4  mov r5,r0, asr #0x10
02032ee8  b 0x02032f10
02032eec  mov r0,r6
02032ef0  ldr r1,[r0,#0x0]
02032ef4  ldr r1,[r1,#0x9c]
02032ef8  blx r1
02032efc  mov r0,r0, lsl #0x10
02032f00  cmp r4,r0, lsr #0x10
02032f04  ldreq r0,[r6,#0x64]
02032f08  strheq r5,[r0,#0x4a]
02032f0c  ldr r6,[r6,#0x4c]
02032f10  cmp r6,#0x0
02032f14  bne 0x02032eec
02032f18  ldmia sp!,{r4,r5,r6,pc}
