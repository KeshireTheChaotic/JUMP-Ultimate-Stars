02040b3c  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02040b40  sub sp,sp,#0x14
02040b44  mov r10,r0
02040b48  ldr r4,[r10,#0x34]
02040b4c  mov r9,r1
02040b50  add r0,r4,#0x800
02040b54  ldrh r5,[r0,#0xc8]
02040b58  ldrh r0,[r0,#0xca]
02040b5c  mov r6,#0x0
02040b60  str r0,[sp,#0x8]
02040b64  mov r0,r5, lsr #0x5
02040b68  str r0,[sp,#0x0]
02040b6c  b 0x02040c50
02040b70  mov r0,r9
02040b74  mov r1,r6
02040b78  blx 0x0203be48
02040b7c  mov r7,r0
02040b80  sub r0,r5,#0x1
02040b84  str r0,[sp,#0xc]
02040b88  ldr r0,[sp,#0x8]
02040b8c  ldrsh r8,[r7,#0x2]
02040b90  sub r0,r0,#0x1
02040b94  str r0,[sp,#0x10]
02040b98  b 0x02040c40
02040b9c  ldrsh r0,[r10,#0x66]
02040ba0  ldrh r1,[r10,#0x4e]
02040ba4  ldr r2,[r10,#0x54]
02040ba8  sub r0,r8,r0
02040bac  mla r0,r1,r0,r2
02040bb0  str r0,[sp,#0x4]
02040bb4  ldr r0,[r4,#0x948]
02040bb8  ldrsh r11,[r7,#0x0]
02040bbc  blx r0
02040bc0  mov r3,r8, lsl #0x1b
02040bc4  ldr r1,[sp,#0xc]
02040bc8  mov r2,r11, lsl #0x1b
02040bcc  mov r3,r3, lsr #0x15
02040bd0  add r2,r3,r2, lsr #0x1a
02040bd4  ldr r3,[sp,#0x10]
02040bd8  and r1,r11,r1
02040bdc  and r3,r8,r3
02040be0  mov r11,r3, lsr #0x5
02040be4  ldr r3,[sp,#0x0]
02040be8  mul r11,r3,r11
02040bec  add r1,r11,r1, lsr #0x5
02040bf0  add r1,r2,r1, lsl #0xb
02040bf4  add r1,r1,r0
02040bf8  mov r2,#0x0
02040bfc  b 0x02040c28
02040c00  add r11,r2,r3
02040c04  ldrsh r3,[r10,#0x64]
02040c08  ldrh r0,[r10,#0x60]
02040c0c  add r2,r2,#0x1
02040c10  sub r3,r11,r3
02040c14  mov r11,r3, lsl #0x1
02040c18  ldr r3,[sp,#0x4]
02040c1c  ldrh r3,[r3,r11]
02040c20  add r0,r0,r3
02040c24  strh r0,[r1],#0x2
02040c28  ldrsh r3,[r7,#0x0]
02040c2c  ldrsh r0,[r7,#0x4]
02040c30  sub r0,r0,r3
02040c34  cmp r2,r0
02040c38  bcc 0x02040c00
02040c3c  add r8,r8,#0x1
02040c40  ldrsh r0,[r7,#0x6]
02040c44  cmp r8,r0
02040c48  bcc 0x02040b9c
02040c4c  add r6,r6,#0x1
02040c50  ldr r0,[r9,#0x8]
02040c54  ldrh r0,[r0,#0x14]
02040c58  cmp r6,r0
02040c5c  bcc 0x02040b70
02040c60  add sp,sp,#0x14
02040c64  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
