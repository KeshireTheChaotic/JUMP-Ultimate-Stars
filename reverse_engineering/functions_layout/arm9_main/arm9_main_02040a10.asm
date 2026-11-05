02040a10  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02040a14  sub sp,sp,#0x14
02040a18  mov r10,r0
02040a1c  ldr r4,[r10,#0x34]
02040a20  mov r9,r1
02040a24  add r0,r4,#0x800
02040a28  ldrh r5,[r0,#0xc8]
02040a2c  ldrh r0,[r0,#0xca]
02040a30  mov r6,#0x0
02040a34  str r0,[sp,#0x8]
02040a38  mov r0,r5, lsr #0x5
02040a3c  str r0,[sp,#0x0]
02040a40  b 0x02040b24
02040a44  mov r0,r9
02040a48  mov r1,r6
02040a4c  blx 0x0203be48
02040a50  mov r7,r0
02040a54  sub r0,r5,#0x1
02040a58  str r0,[sp,#0xc]
02040a5c  ldr r0,[sp,#0x8]
02040a60  ldrsh r8,[r7,#0x2]
02040a64  sub r0,r0,#0x1
02040a68  str r0,[sp,#0x10]
02040a6c  b 0x02040b14
02040a70  ldrsh r0,[r10,#0x66]
02040a74  ldrh r1,[r10,#0x4e]
02040a78  ldr r2,[r10,#0x54]
02040a7c  sub r0,r8,r0
02040a80  mul r0,r1,r0
02040a84  add r0,r2,r0, lsr #0x1
02040a88  str r0,[sp,#0x4]
02040a8c  ldr r0,[r4,#0x948]
02040a90  ldrsh r11,[r7,#0x0]
02040a94  blx r0
02040a98  mov r3,r8, lsl #0x1b
02040a9c  ldr r1,[sp,#0xc]
02040aa0  mov r2,r11, lsl #0x1b
02040aa4  mov r3,r3, lsr #0x15
02040aa8  add r2,r3,r2, lsr #0x1a
02040aac  ldr r3,[sp,#0x10]
02040ab0  and r1,r11,r1
02040ab4  and r3,r8,r3
02040ab8  mov r11,r3, lsr #0x5
02040abc  ldr r3,[sp,#0x0]
02040ac0  mul r11,r3,r11
02040ac4  add r1,r11,r1, lsr #0x5
02040ac8  add r1,r2,r1, lsl #0xb
02040acc  add r1,r1,r0
02040ad0  mov r2,#0x0
02040ad4  b 0x02040afc
02040ad8  add r11,r2,r3
02040adc  ldrsh r3,[r10,#0x64]
02040ae0  ldrh r0,[r10,#0x60]
02040ae4  add r2,r2,#0x1
02040ae8  sub r11,r11,r3
02040aec  ldr r3,[sp,#0x4]
02040af0  ldrb r3,[r3,r11]
02040af4  add r0,r0,r3
02040af8  strh r0,[r1],#0x2
02040afc  ldrsh r3,[r7,#0x0]
02040b00  ldrsh r0,[r7,#0x4]
02040b04  sub r0,r0,r3
02040b08  cmp r2,r0
02040b0c  bcc 0x02040ad8
02040b10  add r8,r8,#0x1
02040b14  ldrsh r0,[r7,#0x6]
02040b18  cmp r8,r0
02040b1c  bcc 0x02040a70
02040b20  add r6,r6,#0x1
02040b24  ldr r0,[r9,#0x8]
02040b28  ldrh r0,[r0,#0x14]
02040b2c  cmp r6,r0
02040b30  bcc 0x02040a44
02040b34  add sp,sp,#0x14
02040b38  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
