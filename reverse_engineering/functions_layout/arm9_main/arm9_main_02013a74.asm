02013a74  stmdb sp!,{r3,r4,r5,lr}
02013a78  mov r5,r0
02013a7c  ldr r0,[r5,#0x40]
02013a80  mov r4,r1
02013a84  tst r0,#0x2
02013a88  addeq r0,r4,#0x1
02013a8c  ldr r1,[r5,#0x38]
02013a90  moveq r4,r0, lsr #0x1
02013a94  cmp r1,r4
02013a98  ldmiaeq sp!,{r3,r4,r5,pc}
02013a9c  ldr r2,[r5,#0x3c]
02013aa0  mul r0,r2,r4
02013aa4  bl 0x0200d338
02013aa8  str r0,[r5,#0x3c]
02013aac  str r4,[r5,#0x38]
02013ab0  ldr r0,[r5,#0x2c]
02013ab4  ldr r1,[r5,#0x30]
02013ab8  ldr r2,[r0,#0x0]
02013abc  ldr r2,[r2,#0x68]
02013ac0  blx r2
02013ac4  ldr r1,[r5,#0x48]
02013ac8  add r0,r0,#0x1
02013acc  mov r0,r0, lsr #0x1
02013ad0  ldrh r2,[r1,#0x4]
02013ad4  add r0,r0,#0x1
02013ad8  ldr r1,[r5,#0x34]
02013adc  add r0,r0,r2, lsr #0x1
02013ae0  mov r0,r0, lsl #0x1
02013ae4  strh r4,[r1,r0]
02013ae8  ldmia sp!,{r3,r4,r5,pc}
