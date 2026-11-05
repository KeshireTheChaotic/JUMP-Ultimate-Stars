02016d90  stmdb sp!,{r3,r4,r5,lr}
02016d94  ldr r12,[sp,#0x10]
02016d98  ldrh lr,[r0,#0x8]
02016d9c  ldrsh r5,[r12,#0x4]
02016da0  ldrsh r4,[r12,#0x0]
02016da4  sub r4,r5,r4
02016da8  add r4,r1,r4
02016dac  cmp r4,lr
02016db0  subgt r4,lr,r1
02016db4  strhgt r4,[r12,#0x4]
02016db8  ldrsh r4,[r12,#0x6]
02016dbc  ldrsh lr,[r12,#0x2]
02016dc0  ldrh r5,[r0,#0xa]
02016dc4  sub r0,r4,lr
02016dc8  add r0,r2,r0
02016dcc  cmp r0,r5
02016dd0  subgt r0,r5,r2
02016dd4  strhgt r0,[r12,#0x6]
02016dd8  ldrsh lr,[r12,#0x2]
02016ddc  adds r0,lr,r1
02016de0  movmi r0,r0, lsl #0x10
02016de4  submi r0,lr,r0, asr #0x10
02016de8  strhmi r0,[r12,#0x2]
02016dec  ldrsh r1,[r12,#0x0]
02016df0  adds r0,r1,r2
02016df4  movmi r0,r0, lsl #0x10
02016df8  submi r0,r1,r0, asr #0x10
02016dfc  strhmi r0,[r12,#0x0]
02016e00  ldrh r1,[r3,#0x8]
02016e04  ldrsh r0,[r12,#0x4]
02016e08  cmp r0,r1
02016e0c  strhgt r1,[r12,#0x4]
02016e10  ldrh r1,[r3,#0xa]
02016e14  ldrsh r0,[r12,#0x6]
02016e18  cmp r0,r1
02016e1c  strhgt r1,[r12,#0x6]
02016e20  ldrsh r0,[r12,#0x2]
02016e24  cmp r0,#0x0
02016e28  movlt r0,#0x0
02016e2c  strhlt r0,[r12,#0x2]
02016e30  ldrsh r0,[r12,#0x0]
02016e34  cmp r0,#0x0
02016e38  movlt r0,#0x0
02016e3c  strhlt r0,[r12,#0x0]
02016e40  ldmia sp!,{r3,r4,r5,pc}
