02153a18  stmdb sp!,{r3,r4,r5,r6,r7,lr}
02153a1c  mov r6,r0
02153a20  mov r0,#0x0
02153a24  strb r0,[r6,#0x20]
02153a28  ldr r0,[r6,#0x0]
02153a2c  mov r5,r1
02153a30  ldr r0,[r0,#0x4]
02153a34  mov r4,#0x80
02153a38  bl 0x02028330
02153a3c  mov r0,#0x5a
02153a40  strh r0,[r6,#0x1c]
02153a44  ldr r0,[r6,#0x18]
02153a48  ldr r1,[0x2153b40]
02153a4c  ldr r0,[r0,#0x4]
02153a50  mov r2,#0x0
02153a54  bl 0x02023894
02153a58  ldr r0,[r6,#0x18]
02153a5c  ldr r0,[r0,#0x4]
02153a60  ldr r0,[r0,#0x68]
02153a64  ldr r1,[r0,#0x0]
02153a68  ldr r1,[r1,#0x6c]
02153a6c  blx r1
02153a70  ldr r0,[r6,#0x18]
02153a74  mov r1,#0x1
02153a78  ldr r0,[r0,#0x4]
02153a7c  ldr r2,[r0,#0x0]
02153a80  ldr r2,[r2,#0xd8]
02153a84  blx r2
02153a88  ldr r0,[r6,#0x18]
02153a8c  ldr r0,[r0,#0x4]
02153a90  bl 0x02028330
02153a94  add r0,r6,r5, lsl #0x2
02153a98  ldr r0,[r0,#0x8]
02153a9c  bl 0x02152d30
02153aa0  cmp r0,#0x0
02153aa4  ldmiane sp!,{r3,r4,r5,r6,r7,pc}
02153aa8  add r0,r6,r5, lsl #0x2
02153aac  ldr r0,[r0,#0x8]
02153ab0  mov r1,#0x1
02153ab4  ldr r0,[r0,#0x4]
02153ab8  ldr r2,[r0,#0x0]
02153abc  ldr r2,[r2,#0xd8]
02153ac0  blx r2
02153ac4  add r0,r6,r5, lsl #0x2
02153ac8  ldr r0,[r0,#0x8]
02153acc  ldr r0,[r0,#0x4]
02153ad0  bl 0x02028330
02153ad4  ldrh r2,[r6,#0x1e]
02153ad8  mov r0,#0x7a
02153adc  mov r1,#0x1
02153ae0  sub r3,r4,r2, lsl #0x4
02153ae4  add r2,r2,#0x1
02153ae8  strh r2,[r6,#0x1e]
02153aec  and r4,r3,#0xff
02153af0  bl 0x0207342c
02153af4  mov r5,#0x0
02153af8  add r7,sp,#0x0
02153afc  add r0,r6,r5, lsl #0x2
02153b00  ldr r0,[r0,#0x8]
02153b04  bl 0x02152d30
02153b08  cmp r0,#0x0
02153b0c  beq 0x02153b30
02153b10  mov r0,r4, lsl #0xc
02153b14  str r0,[sp,#0x0]
02153b18  add r0,r6,r5, lsl #0x2
02153b1c  ldr r0,[r0,#0x8]
02153b20  mov r1,r7
02153b24  bl 0x021536a4
02153b28  add r0,r4,#0x20
02153b2c  and r4,r0,#0xff
02153b30  add r5,r5,#0x1
02153b34  cmp r5,#0x3
02153b38  ble 0x02153afc
02153b3c  ldmia sp!,{r3,r4,r5,r6,r7,pc}
