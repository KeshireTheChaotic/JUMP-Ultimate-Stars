02089b54  stmdb sp!,{r3,r4,r5,lr}
02089b58  ldr r1,[0x2089cb0]
02089b5c  mov r0,#0x0
02089b60  strh r0,[r1,#0x12]
02089b64  mov r0,#0x65
02089b68  strh r0,[r1,#0x6]
02089b6c  mov r2,#0x4
02089b70  mov r0,#0x1
02089b74  str r2,[r1,#0x64]
02089b78  blx 0x02089d44
02089b7c  cmp r0,#0x18
02089b80  bne 0x02089b9c
02089b84  mov r0,#0x18
02089b88  ldr r1,[0x2089cb4]
02089b8c  add r2,r0,#0x7c0
02089b90  blx 0x02088904
02089b94  mov r0,#0x0
02089b98  ldmia sp!,{r3,r4,r5,pc}
02089b9c  cmp r0,#0x2
02089ba0  beq 0x02089bb8
02089ba4  ldr r1,[0x2089cb4]
02089ba8  ldr r2,[0x2089cb8]
02089bac  blx 0x02088904
02089bb0  mov r0,#0x0
02089bb4  ldmia sp!,{r3,r4,r5,pc}
02089bb8  ldr r5,[0x2089cbc]
02089bbc  ldr r4,[0x2089cb0]
02089bc0  b 0x02089bd8
02089bc4  cmp r0,#0x4
02089bc8  movne r0,#0x0
02089bcc  ldmiane sp!,{r3,r4,r5,pc}
02089bd0  ldr r0,[r5,#0x0]
02089bd4  blx r0
02089bd8  ldr r0,[r4,#0x64]
02089bdc  cmp r0,#0x7
02089be0  bne 0x02089bc4
02089be4  ldr r0,[0x2089cb0]
02089be8  mov r1,#0x2
02089bec  str r1,[r0,#0x64]
02089bf0  ldrh r5,[r0,#0x8]
02089bf4  mov r3,#0x0
02089bf8  mov r4,r3
02089bfc  mov r12,r3
02089c00  mov r2,#0x1
02089c04  tst r5,r2, lsl r12
02089c08  beq 0x02089c24
02089c0c  add r0,r12,#0x1
02089c10  add r1,r4,#0x1
02089c14  mov r0,r0, lsl #0x10
02089c18  mov r1,r1, lsl #0x10
02089c1c  mov r3,r0, asr #0x10
02089c20  mov r4,r1, lsr #0x10
02089c24  add r0,r12,#0x1
02089c28  mov r0,r0, lsl #0x10
02089c2c  mov r12,r0, asr #0x10
02089c30  cmp r12,#0x10
02089c34  blt 0x02089c04
02089c38  cmp r4,#0x1
02089c3c  bls 0x02089ca0
02089c40  ldr r0,[0x2089cc0]
02089c44  ldr r0,[r0,#0x0]
02089c48  ldr r0,[r0,#0x4]
02089c4c  bl 0x02031070
02089c50  mov r1,r4
02089c54  bl 0x0200d338
02089c58  mov r0,#0x0
02089c5c  b 0x02089c94
02089c60  tst r5,#0x1
02089c64  beq 0x02089c80
02089c68  cmp r1,#0x0
02089c6c  addeq r0,r0,#0x1
02089c70  moveq r0,r0, lsl #0x10
02089c74  moveq r3,r0, asr #0x10
02089c78  beq 0x02089ca0
02089c7c  sub r1,r1,#0x1
02089c80  add r2,r0,#0x1
02089c84  mov r0,r5, lsl #0xf
02089c88  mov r2,r2, lsl #0x10
02089c8c  mov r5,r0, lsr #0x10
02089c90  mov r0,r2, asr #0x10
02089c94  cmp r0,#0x10
02089c98  blt 0x02089c60
02089c9c  mov r3,#0x0
02089ca0  ldr r0,[0x2089cb0]
02089ca4  strh r3,[r0,#0x12]
02089ca8  ldrh r0,[r0,#0x12]
02089cac  ldmia sp!,{r3,r4,r5,pc}
