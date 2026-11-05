0215898c  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02158990  sub sp,sp,#0x18
02158994  mov r8,r0
02158998  mov r7,r1
0215899c  ldr r0,[0x2158bb4]
021589a0  mov r6,r2
021589a4  add r1,r7,#0x20
021589a8  ldrb r2,[r8,#0x4]
021589ac  ldrsh r3,[r8,#0x6]
021589b0  smlabb r4,r6,r0,r1
021589b4  mov r0,#0xc
021589b8  mla r1,r2,r0,r4
021589bc  mov r2,r3, lsl #0xc
021589c0  str r2,[r1,#0x370]
021589c4  ldrb r2,[r8,#0x4]
021589c8  ldrsh r3,[r8,#0x8]
021589cc  ldr r1,[0x2158bb8]
021589d0  mla r0,r2,r0,r4
021589d4  mov r2,r3, lsl #0xc
021589d8  str r2,[r0,#0x374]
021589dc  ldrb r2,[r8,#0x4]
021589e0  ldrsb r0,[r1,r2]
021589e4  cmp r0,#0x0
021589e8  beq 0x02158b1c
021589ec  add r0,r4,r2, lsl #0x1
021589f0  add r0,r0,#0x400
021589f4  mov r1,#0x64
021589f8  strh r1,[r0,#0x8c]
021589fc  ldrsh r0,[r8,#0x8]
02158a00  add r1,sp,#0x14
02158a04  add r2,sp,#0x10
02158a08  mov r0,r0, lsl #0xc
02158a0c  str r0,[sp,#0x10]
02158a10  ldrsh r0,[r8,#0x6]
02158a14  mov r0,r0, lsl #0xc
02158a18  str r0,[sp,#0x14]
02158a1c  ldrb r0,[r8,#0x4]
02158a20  add r0,r4,r0, lsl #0x2
02158a24  ldr r0,[r0,#0x1c0]
02158a28  bl 0x0214d4c0
02158a2c  ldrb r0,[r8,#0x4]
02158a30  mov r1,#0x1
02158a34  add r0,r4,r0, lsl #0x2
02158a38  ldr r0,[r0,#0x1c0]
02158a3c  ldr r0,[r0,#0x4]
02158a40  ldr r2,[r0,#0x0]
02158a44  ldr r2,[r2,#0xd8]
02158a48  blx r2
02158a4c  mov r0,#0x1000
02158a50  str r0,[sp,#0xc]
02158a54  ldrb r0,[r8,#0x4]
02158a58  add r1,sp,#0xc
02158a5c  add r0,r4,r0, lsl #0x2
02158a60  ldr r0,[r0,#0x1c0]
02158a64  bl 0x02151858
02158a68  ldr r2,[r4,#0x34c]
02158a6c  ldrh r1,[r2,#0x2]
02158a70  ldrb r0,[r2,r1]
02158a74  add r2,r2,r1
02158a78  cmp r0,#0x4
02158a7c  bne 0x02158acc
02158a80  ldrb r0,[r8,#0x4]
02158a84  ldrh r1,[r2,#0x8]
02158a88  add r0,r4,r0, lsl #0x1
02158a8c  add r0,r0,#0x400
02158a90  strh r1,[r0,#0x8c]
02158a94  ldrh r0,[r2,#0x8]
02158a98  bl 0x0200c99c
02158a9c  ldr r1,[0x2158bbc]
02158aa0  bl 0x0200c5ac
02158aa4  mov r1,r0
02158aa8  ldr r0,[0x2158bc0]
02158aac  bl 0x0200c9e4
02158ab0  bl 0x0200c8e0
02158ab4  str r0,[sp,#0x8]
02158ab8  ldrb r0,[r8,#0x4]
02158abc  add r1,sp,#0x8
02158ac0  add r0,r4,r0, lsl #0x2
02158ac4  ldr r0,[r0,#0x1c0]
02158ac8  bl 0x02151858
02158acc  ldrb r0,[r8,#0x5]
02158ad0  tst r0,#0x2
02158ad4  ldrb r0,[r8,#0x4]
02158ad8  beq 0x02158afc
02158adc  add r0,r4,r0, lsl #0x2
02158ae0  ldr r0,[r0,#0x2f8]
02158ae4  mov r1,#0x1
02158ae8  ldr r0,[r0,#0x4]
02158aec  ldr r2,[r0,#0x0]
02158af0  ldr r2,[r2,#0x94]
02158af4  blx r2
02158af8  b 0x02158b6c
02158afc  add r0,r4,r0, lsl #0x2
02158b00  ldr r0,[r0,#0x2f8]
02158b04  mov r1,#0x0
02158b08  ldr r0,[r0,#0x4]
02158b0c  ldr r2,[r0,#0x0]
02158b10  ldr r2,[r2,#0x94]
02158b14  blx r2
02158b18  b 0x02158b6c
02158b1c  ldrsh r1,[r8,#0x8]
02158b20  sub r0,r2,#0x4
02158b24  and r5,r0,#0xff
02158b28  mov r0,r1, lsl #0xc
02158b2c  str r0,[sp,#0x0]
02158b30  ldrsh r2,[r8,#0x6]
02158b34  add r0,r4,r5, lsl #0x2
02158b38  add r1,sp,#0x4
02158b3c  mov r2,r2, lsl #0xc
02158b40  str r2,[sp,#0x4]
02158b44  ldr r0,[r0,#0x1d0]
02158b48  add r2,sp,#0x0
02158b4c  bl 0x0214d4c0
02158b50  add r0,r4,r5, lsl #0x2
02158b54  ldr r0,[r0,#0x1d0]
02158b58  mov r1,#0x1
02158b5c  ldr r0,[r0,#0x4]
02158b60  ldr r2,[r0,#0x0]
02158b64  ldr r2,[r2,#0xd8]
02158b68  blx r2
02158b6c  ldrb r0,[r8,#0x5]
02158b70  tst r0,#0x1
02158b74  moveq r0,#0x0
02158b78  beq 0x02158bac
02158b7c  ldr r5,[r4,#0x34c]
02158b80  add r0,r4,#0x400
02158b84  ldrh r3,[r5,#0x2]
02158b88  mov r1,r7
02158b8c  mov r2,r6
02158b90  add r3,r5,r3
02158b94  str r3,[r4,#0x34c]
02158b98  ldrsh r3,[r0,#0x6c]
02158b9c  add r3,r3,#0x1
02158ba0  strh r3,[r0,#0x6c]
02158ba4  ldr r0,[r4,#0x34c]
02158ba8  bl 0x02158bc4
02158bac  add sp,sp,#0x18
02158bb0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
