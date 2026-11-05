02050acc  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02050ad0  sub sp,sp,#0x4
02050ad4  ldr r12,[r1,#0x8]
02050ad8  ldr r9,[r0,#0x4]
02050adc  ldr r3,[r0,#0x0]
02050ae0  ldr r11,[r1,#0x4]
02050ae4  ldr r0,[r0,#0x8]
02050ae8  ldr r10,[r1,#0x0]
02050aec  smull r4,r7,r9,r12
02050af0  smull r1,r6,r0,r11
02050af4  subs r8,r4,r1
02050af8  smull r5,r4,r0,r10
02050afc  smull lr,r12,r3,r12
02050b00  smull r1,r0,r3,r11
02050b04  smull r10,r3,r9,r10
02050b08  sbc r6,r7,r6
02050b0c  mov r9,#0x800
02050b10  adds r7,r8,r9
02050b14  adc r6,r6,#0x0
02050b18  subs r8,r5,lr
02050b1c  sbc r5,r4,r12
02050b20  adds r8,r8,r9
02050b24  mov r4,r7, lsr #0xc
02050b28  adc r5,r5,#0x0
02050b2c  subs r1,r1,r10
02050b30  orr r4,r4,r6, lsl #0x14
02050b34  mov r6,r8, lsr #0xc
02050b38  sbc r0,r0,r3
02050b3c  adds r1,r1,r9
02050b40  str r4,[r2,#0x0]
02050b44  orr r6,r6,r5, lsl #0x14
02050b48  adc r0,r0,#0x0
02050b4c  mov r1,r1, lsr #0xc
02050b50  str r6,[r2,#0x4]
02050b54  orr r1,r1,r0, lsl #0x14
02050b58  str r1,[r2,#0x8]
02050b5c  add sp,sp,#0x4
02050b60  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02050b64  bx lr
