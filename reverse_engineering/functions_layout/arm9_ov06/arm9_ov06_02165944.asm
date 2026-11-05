02165944  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02165948  sub sp,sp,#0x1c
0216594c  mov r10,r0
02165950  ldr r0,[r10,#0xc]
02165954  mov r9,r1
02165958  ldr r0,[r0,#0x4]
0216595c  ldr r0,[r0,#0x68]
02165960  ldr r1,[r0,#0x0]
02165964  ldr r1,[r1,#0xfc]
02165968  blx r1
0216596c  ldr r3,[r10,#0x10]
02165970  ldr r4,[r9,#0xc]
02165974  ldr r0,[r3,#0x150]
02165978  ldrb r1,[r9,#0x22]
0216597c  ldr r2,[r4,#0x28]
02165980  and r0,r0,#0xf
02165984  add r1,r2,r1, lsl #0x2
02165988  mov r0,r0, lsl #0x10
0216598c  movs r2,r0, lsr #0x10
02165990  ldr r0,[r3,#0x5c]
02165994  ldrb r8,[r1,#0x1]
02165998  str r0,[sp,#0x14]
0216599c  mov r0,#0x0
021659a0  mov r7,#0x1
021659a4  str r0,[sp,#0xc]
021659a8  beq 0x021659c8
021659ac  ldr r1,[0x2165bd0]
021659b0  ldr r0,[0x2165bd4]
021659b4  ldrb r1,[r1,r2]
021659b8  ldr r0,[r0,#0x0]
021659bc  add r0,r0,r1, lsl #0x2
021659c0  ldr r0,[r0,#0x4c]
021659c4  str r0,[sp,#0xc]
021659c8  add r1,sp,#0x18
021659cc  mov r0,r10
021659d0  bl 0x02165eb0
021659d4  ldrsh r0,[sp,#0x18]
021659d8  cmp r8,#0x1
021659dc  str r0,[sp,#0x8]
021659e0  bls 0x02165a08
021659e4  ldr r0,[0x2165bd8]
021659e8  ldr r0,[r0,#0x0]
021659ec  ldr r0,[r0,#0x4]
021659f0  bl 0x02031070
021659f4  ldr r1,[0x2165bdc]
021659f8  and r0,r0,r1
021659fc  mov r0,r0, lsl #0x10
02165a00  mov r0,r0, asr #0x10
02165a04  str r0,[sp,#0x8]
02165a08  ldr r0,[0x2165bd8]
02165a0c  ldr r0,[r0,#0x0]
02165a10  ldr r0,[r0,#0x4]
02165a14  bl 0x02031070
02165a18  ldr r1,[0x2165be0]
02165a1c  mov r2,#0x500
02165a20  and r0,r0,r1
02165a24  rsb r2,r2,#0x0
02165a28  sub r0,r2,r0
02165a2c  mov r0,r0, lsl #0x10
02165a30  mov r11,r0, asr #0x10
02165a34  mov r6,#0x0
02165a38  b 0x02165b94
02165a3c  ldr r0,[sp,#0xc]
02165a40  ldr r1,[0x2165bd8]
02165a44  and r0,r0,#0xff
02165a48  str r0,[sp,#0x10]
02165a4c  ldr r0,[r1,#0x0]
02165a50  ldr r0,[r0,#0x4]
02165a54  bl 0x02031070
02165a58  ldr r1,[0x2165be4]
02165a5c  bl 0x0200d338
02165a60  add r0,r4,#0x100
02165a64  ldrsb r2,[r0,#0x53]
02165a68  mov r5,#0x0
02165a6c  sub r0,r5,#0x1
02165a70  cmp r2,r0
02165a74  andne r0,r2,#0xff
02165a78  bne 0x02165af0
02165a7c  ldr r0,[0x2165bd4]
02165a80  ldr r2,[0x2165be8]
02165a84  ldr r3,[r0,#0x0]
02165a88  mov r0,r5
02165a8c  ldr r12,[r3,#0x158]
02165a90  mov r3,#0x30
02165a94  add r12,r2,r12, lsl #0x2
02165a98  ldr r2,[sp,#0x10]
02165a9c  add r2,r2,r12
02165aa0  ldrb r12,[r2,#-0x8]
02165aa4  mla r2,r12,r3,r4
02165aa8  b 0x02165acc
02165aac  add r3,r2,r0, lsl #0x2
02165ab0  ldr r3,[r3,#0x88]
02165ab4  cmp r1,r3
02165ab8  movcc r5,r0
02165abc  bcc 0x02165ad4
02165ac0  sub r1,r1,r3
02165ac4  add r0,r0,#0x1
02165ac8  and r0,r0,#0xff
02165acc  cmp r0,#0xc
02165ad0  bcc 0x02165aac
02165ad4  ldr r0,[0x2165bec]
02165ad8  ldrb r0,[r0,r5]
02165adc  bl 0x0215b3e0
02165ae0  ldr r1,[0x2165bf0]
02165ae4  ldrb r1,[r1,r5]
02165ae8  add r0,r1,r0, lsl #0x1
02165aec  and r0,r0,#0xff
02165af0  str r11,[sp,#0x0]
02165af4  mov r1,#0x0
02165af8  str r1,[sp,#0x4]
02165afc  ldr r1,[sp,#0x14]
02165b00  ldr r2,[sp,#0x14]
02165b04  ldr r1,[r1,#0xc]
02165b08  ldr r2,[r2,#0x10]
02165b0c  ldr r3,[sp,#0x8]
02165b10  bl 0x02164d48
02165b14  ldr r0,[0x2165bd8]
02165b18  ldr r0,[r0,#0x0]
02165b1c  ldr r0,[r0,#0x4]
02165b20  bl 0x02031070
02165b24  ldr r1,[0x2165bdc]
02165b28  ldr r2,[0x2165bd8]
02165b2c  and r0,r0,r1
02165b30  mul r0,r7,r0
02165b34  mov r5,r0, lsl #0x10
02165b38  ldr r0,[r2,#0x0]
02165b3c  ldr r0,[r0,#0x4]
02165b40  bl 0x02031070
02165b44  ldr r1,[0x2165be0]
02165b48  mov r2,#0x500
02165b4c  rsb r2,r2,#0x0
02165b50  and r0,r0,r1
02165b54  mov r1,r2, asr #0xb
02165b58  sub r0,r2,r0
02165b5c  mul r1,r7,r1
02165b60  mov r1,r1, lsl #0x18
02165b64  ldrsh r2,[sp,#0x18]
02165b68  mov r7,r1, asr #0x18
02165b6c  ldrsh r1,[sp,#0x1a]
02165b70  mov r0,r0, lsl #0x10
02165b74  add r2,r2,r5, asr #0x10
02165b78  add r1,r1,r0, asr #0x10
02165b7c  mov r0,r2, lsl #0x10
02165b80  mov r0,r0, asr #0x10
02165b84  str r0,[sp,#0x8]
02165b88  mov r0,r1, lsl #0x10
02165b8c  add r6,r6,#0x1
02165b90  mov r11,r0, asr #0x10
02165b94  cmp r6,r8
02165b98  blt 0x02165a3c
02165b9c  ldr r0,[0x2165bf4]
02165ba0  ldr r2,[0x2165bf8]
02165ba4  str r0,[r9,#0x10]
02165ba8  mov r0,#0x7a
02165bac  mov r1,#0x38
02165bb0  str r2,[r9,#0x14]
02165bb4  bl 0x0207342c
02165bb8  ldr r1,[0x2165bfc]
02165bbc  mov r0,r10
02165bc0  mov r2,#0x1
02165bc4  bl 0x02083b74
02165bc8  add sp,sp,#0x1c
02165bcc  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
