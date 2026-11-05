021c7a48  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
021c7a4c  sub sp,sp,#0x60
021c7a50  mov r10,r0
021c7a54  add r0,sp,#0x50
021c7a58  bl 0x021c6f9c
021c7a5c  ldr r5,[r10,#0x5c]
021c7a60  cmp r5,#0x0
021c7a64  beq 0x021c7f5c
021c7a68  ldr r0,[r10,#0x4c]
021c7a6c  cmp r0,#0x0
021c7a70  beq 0x021c7a90
021c7a74  ldr r1,[r0,#0x4]
021c7a78  mov r0,r10
021c7a7c  ldr r4,[r1,#0x4]
021c7a80  bl 0x021c7448
021c7a84  mul r0,r5,r0
021c7a88  cmp r0,r4
021c7a8c  bls 0x021c7b14
021c7a90  ldr r1,[r10,#0x5c]
021c7a94  ldr r0,[r10,#0x108]
021c7a98  cmp r0,r1
021c7a9c  movcc r0,r1, lsl #0x1
021c7aa0  strcc r0,[r10,#0x108]
021c7aa4  ldr r0,[r10,#0x4c]
021c7aa8  cmp r0,#0x0
021c7aac  mov r0,r10
021c7ab0  bne 0x021c7af4
021c7ab4  bl 0x021c7448
021c7ab8  mov r4,r0
021c7abc  ldr r0,[r10,#0x54]
021c7ac0  ldr r1,[r0,#0x0]
021c7ac4  ldr r1,[r1,#0x18]
021c7ac8  blx r1
021c7acc  mov r3,#0x0
021c7ad0  str r3,[sp,#0x0]
021c7ad4  str r3,[sp,#0x4]
021c7ad8  ldr r1,[r10,#0x108]
021c7adc  mov r2,r0
021c7ae0  mul r0,r1,r4
021c7ae4  mov r1,#0x1
021c7ae8  bl 0x020391e0
021c7aec  str r0,[r10,#0x4c]
021c7af0  b 0x021c7b14
021c7af4  bl 0x021c7448
021c7af8  ldr r3,[r10,#0x108]
021c7afc  ldr r2,[r10,#0x4c]
021c7b00  mul r1,r3,r0
021c7b04  ldr r0,[r2,#0x4]
021c7b08  ldr r2,[r0,#0x0]
021c7b0c  ldr r2,[r2,#0x44]
021c7b10  blx r2
021c7b14  ldr r0,[r10,#0x54]
021c7b18  ldr r1,[r0,#0x0]
021c7b1c  ldr r1,[r1,#0x18]
021c7b20  blx r1
021c7b24  mov r6,r0
021c7b28  mov r1,r6
021c7b2c  add r0,r10,#0x14
021c7b30  mov r2,#0x0
021c7b34  bl 0x020196c4
021c7b38  mov r0,r6
021c7b3c  ldr r2,[r0,#0x0]
021c7b40  mov r1,#0x0
021c7b44  ldr r2,[r2,#0x34]
021c7b48  blx r2
021c7b4c  add r0,r10,#0x14
021c7b50  bl 0x021c7f84
021c7b54  ldr r1,[r0,#0x0]
021c7b58  ldr r1,[r1,#0x18]
021c7b5c  blx r1
021c7b60  add r0,r10,#0x14
021c7b64  bl 0x021c7f84
021c7b68  ldrh r1,[r0,#0x8]
021c7b6c  cmp r1,#0x10
021c7b70  bls 0x021c7b90
021c7b74  ldrb r2,[r10,#0x173]
021c7b78  ldr r1,[r0,#0x20]
021c7b7c  ldr r0,[0x21c7f64]
021c7b80  add r2,r2,#0x1
021c7b84  add r1,r1,r2, lsl #0x5
021c7b88  mov r1,r1, lsr #0x4
021c7b8c  str r1,[r0,#0x0]
021c7b90  mov r0,#0x0
021c7b94  str r0,[sp,#0x54]
021c7b98  str r0,[sp,#0x50]
021c7b9c  ldr r0,[r10,#0x4c]
021c7ba0  ldr r0,[r0,#0x4]
021c7ba4  ldr r1,[r0,#0x0]
021c7ba8  ldr r1,[r1,#0x48]
021c7bac  blx r1
021c7bb0  ldr r0,[r10,#0x4c]
021c7bb4  mov r1,#0x5
021c7bb8  ldr r0,[r0,#0x4]
021c7bbc  ldr r2,[r0,#0x0]
021c7bc0  ldr r2,[r2,#0x50]
021c7bc4  blx r2
021c7bc8  ldr r0,[r10,#0x4c]
021c7bcc  ldr r0,[r0,#0x4]
021c7bd0  ldr r1,[r0,#0x0]
021c7bd4  ldr r1,[r1,#0xc]
021c7bd8  blx r1
021c7bdc  ldr r0,[r10,#0x20]
021c7be0  ldr r1,[r0,#0x0]
021c7be4  ldr r1,[r1,#0x20]
021c7be8  blx r1
021c7bec  str r0,[sp,#0x10]
021c7bf0  ldr r0,[r10,#0x20]
021c7bf4  ldr r1,[r0,#0x0]
021c7bf8  ldr r1,[r1,#0x24]
021c7bfc  blx r1
021c7c00  str r0,[sp,#0xc]
021c7c04  ldr r0,[r10,#0x38]
021c7c08  ldr r0,[r0,#0x50]
021c7c0c  ldr r1,[r0,#0x0]
021c7c10  ldr r1,[r1,#0x4c]
021c7c14  blx r1
021c7c18  ldr r1,[r0,#0x10]
021c7c1c  ldr r8,[r0,#0x14]
021c7c20  str r1,[sp,#0x8]
021c7c24  ldr r0,[r10,#0x4c]
021c7c28  ldrh r2,[r10,#0x24]
021c7c2c  ldr r1,[0x21c7f68]
021c7c30  ldr r4,[r0,#0x4]
021c7c34  and r1,r2,r1
021c7c38  mov r1,r1, lsl #0x10
021c7c3c  add r0,r4,#0x3c
021c7c40  mov r1,r1, lsr #0x10
021c7c44  blx 0x020661a8
021c7c48  mov r0,r6
021c7c4c  ldr r1,[r0,#0x0]
021c7c50  ldr r1,[r1,#0x20]
021c7c54  blx r1
021c7c58  mov r5,r0
021c7c5c  mov r0,r6
021c7c60  ldr r1,[r0,#0x0]
021c7c64  ldr r1,[r1,#0x24]
021c7c68  blx r1
021c7c6c  mov r6,r0
021c7c70  ldr r0,[r10,#0x5c]
021c7c74  mov r9,#0x0
021c7c78  cmp r0,#0x0
021c7c7c  bls 0x021c7e88
021c7c80  b 0x021c7e7c
021c7c84  ldr r7,[r10,#0x58]
021c7c88  mov r2,r9, lsl #0x3
021c7c8c  ldrh r1,[r7,r2]
021c7c90  ldr r0,[0x21c7f6c]
021c7c94  cmp r1,r0
021c7c98  bne 0x021c7cbc
021c7c9c  add r0,r7,r2
021c7ca0  ldrh r1,[r0,#0x2]
021c7ca4  ldr r0,[r10,#0x54]
021c7ca8  ldr r2,[r0,#0x0]
021c7cac  ldr r2,[r2,#0x1c]
021c7cb0  blx r2
021c7cb4  mov r1,r9, lsl #0x3
021c7cb8  strh r0,[r7,r1]
021c7cbc  ldr r0,[r10,#0x54]
021c7cc0  ldr r3,[r10,#0x58]
021c7cc4  mov r2,r9, lsl #0x3
021c7cc8  ldrh r2,[r3,r2]
021c7ccc  ldr r3,[r0,#0x0]
021c7cd0  add r1,sp,#0x14
021c7cd4  ldr r3,[r3,#0x40]
021c7cd8  blx r3
021c7cdc  ldr r0,[r10,#0x58]
021c7ce0  ldrsh r2,[sp,#0x18]
021c7ce4  add r0,r0,r9, lsl #0x3
021c7ce8  ldrh r3,[r0,#0x4]
021c7cec  ldr r0,[sp,#0x8]
021c7cf0  ldrsh r1,[sp,#0x1a]
021c7cf4  add r0,r0,r3, lsl #0xc
021c7cf8  str r0,[sp,#0x50]
021c7cfc  ldr r3,[r10,#0x58]
021c7d00  add r2,r0,r2, lsl #0xc
021c7d04  add r3,r3,r9, lsl #0x3
021c7d08  ldrh r3,[r3,#0x6]
021c7d0c  add r3,r8,r3, lsl #0xc
021c7d10  adds r1,r3,r1, lsl #0xc
021c7d14  str r1,[sp,#0x5c]
021c7d18  str r3,[sp,#0x54]
021c7d1c  str r2,[sp,#0x58]
021c7d20  bmi 0x021c7e78
021c7d24  cmp r2,#0x0
021c7d28  blt 0x021c7e78
021c7d2c  cmp r3,#0xc0000
021c7d30  cmplt r0,#0x100000
021c7d34  bge 0x021c7e78
021c7d38  add r0,sp,#0x40
021c7d3c  bl 0x021c6f9c
021c7d40  ldrsh r11,[sp,#0x14]
021c7d44  ldr r1,[sp,#0x10]
021c7d48  mov r0,r11, lsl #0xc
021c7d4c  bl 0x0200d12c
021c7d50  ldrsh r7,[sp,#0x16]
021c7d54  str r0,[sp,#0x40]
021c7d58  ldr r1,[sp,#0xc]
021c7d5c  mov r0,r7, lsl #0xc
021c7d60  bl 0x0200d12c
021c7d64  str r0,[sp,#0x44]
021c7d68  ldrsh r0,[sp,#0x18]
021c7d6c  ldr r1,[sp,#0x10]
021c7d70  add r0,r11,r0
021c7d74  mov r0,r0, lsl #0xc
021c7d78  bl 0x0200d12c
021c7d7c  str r0,[sp,#0x48]
021c7d80  ldrsh r0,[sp,#0x1a]
021c7d84  ldr r1,[sp,#0xc]
021c7d88  add r0,r7,r0
021c7d8c  mov r0,r0, lsl #0xc
021c7d90  bl 0x0200d12c
021c7d94  ldr r1,[sp,#0x40]
021c7d98  ldr r2,[sp,#0x44]
021c7d9c  str r0,[sp,#0x4c]
021c7da0  mul r1,r5,r1
021c7da4  mul r2,r6,r2
021c7da8  add r0,r4,#0x3c
021c7dac  blx 0x02066178
021c7db0  ldr r1,[sp,#0x50]
021c7db4  ldr r2,[sp,#0x54]
021c7db8  mov r1,r1, lsl #0xa
021c7dbc  mov r2,r2, lsl #0xa
021c7dc0  add r0,r4,#0x3c
021c7dc4  mov r1,r1, asr #0x10
021c7dc8  mov r2,r2, asr #0x10
021c7dcc  blx 0x02066124
021c7dd0  ldr r1,[sp,#0x48]
021c7dd4  ldr r2,[sp,#0x44]
021c7dd8  mul r1,r5,r1
021c7ddc  mul r2,r6,r2
021c7de0  add r0,r4,#0x3c
021c7de4  blx 0x02066178
021c7de8  ldr r1,[sp,#0x58]
021c7dec  ldr r2,[sp,#0x54]
021c7df0  mov r1,r1, lsl #0xa
021c7df4  mov r2,r2, lsl #0xa
021c7df8  add r0,r4,#0x3c
021c7dfc  mov r1,r1, asr #0x10
021c7e00  mov r2,r2, asr #0x10
021c7e04  blx 0x02066124
021c7e08  ldr r1,[sp,#0x48]
021c7e0c  ldr r2,[sp,#0x4c]
021c7e10  mul r1,r5,r1
021c7e14  mul r2,r6,r2
021c7e18  add r0,r4,#0x3c
021c7e1c  blx 0x02066178
021c7e20  ldr r1,[sp,#0x58]
021c7e24  ldr r2,[sp,#0x5c]
021c7e28  mov r1,r1, lsl #0xa
021c7e2c  mov r2,r2, lsl #0xa
021c7e30  add r0,r4,#0x3c
021c7e34  mov r1,r1, asr #0x10
021c7e38  mov r2,r2, asr #0x10
021c7e3c  blx 0x02066124
021c7e40  ldr r1,[sp,#0x40]
021c7e44  ldr r0,[sp,#0x4c]
021c7e48  mul r1,r5,r1
021c7e4c  mul r2,r6,r0
021c7e50  add r0,r4,#0x3c
021c7e54  blx 0x02066178
021c7e58  add r0,r4,#0x3c
021c7e5c  ldr r1,[sp,#0x50]
021c7e60  ldr r2,[sp,#0x5c]
021c7e64  mov r1,r1, lsl #0xa
021c7e68  mov r1,r1, asr #0x10
021c7e6c  mov r2,r2, lsl #0xa
021c7e70  mov r2,r2, asr #0x10
021c7e74  blx 0x02066124
021c7e78  add r9,r9,#0x1
021c7e7c  ldr r0,[r10,#0x5c]
021c7e80  cmp r9,r0
021c7e84  bcc 0x021c7c84
021c7e88  add r0,sp,#0x34
021c7e8c  mov r1,#0xc
021c7e90  bl 0x0200f69c
021c7e94  ldr r0,[0x21c7f70]
021c7e98  ldr r4,[0x21c7f74]
021c7e9c  add r5,sp,#0x28
021c7ea0  ldmia r0,{r0,r1,r2}
021c7ea4  stmia r5,{r0,r1,r2}
021c7ea8  add r3,sp,#0x1c
021c7eac  ldmia r4,{r0,r1,r2}
021c7eb0  stmia r3,{r0,r1,r2}
021c7eb4  mov r0,#0x0
021c7eb8  str r0,[sp,#0x0]
021c7ebc  mov r2,r3
021c7ec0  add r0,sp,#0x34
021c7ec4  mov r1,r5
021c7ec8  mov r3,#0x1
021c7ecc  blx 0x02066608
021c7ed0  ldr r0,[r10,#0x34]
021c7ed4  ldr r2,[0x21c7f78]
021c7ed8  ldr r0,[r0,#0x4bc]
021c7edc  mov r1,#0x0
021c7ee0  str r1,[r2,#0x0]
021c7ee4  str r1,[r2,#0x0]
021c7ee8  mov r0,r0, lsl #0x8
021c7eec  str r0,[r2,#0x0]
021c7ef0  ldr r1,[0x21c7f7c]
021c7ef4  ldr r0,[0x21c7f80]
021c7ef8  str r1,[r2,#0x50]
021c7efc  mov r1,r1, lsr #0x10
021c7f00  str r1,[r2,#0x54]
021c7f04  str r0,[r2,#0x34]
021c7f08  ldr r0,[r10,#0x4c]
021c7f0c  ldr r0,[r0,#0x4]
021c7f10  ldr r1,[r0,#0x0]
021c7f14  ldr r1,[r1,#0x4c]
021c7f18  blx r1
021c7f1c  ldr r4,[r10,#0x4c]
021c7f20  ldr r0,[r4,#0x4]
021c7f24  ldr r1,[r0,#0x0]
021c7f28  ldr r1,[r1,#0x78]
021c7f2c  blx r1
021c7f30  mov r1,r0
021c7f34  ldr r0,[r4,#0x4]
021c7f38  ldr r2,[r0,#0x0]
021c7f3c  ldr r2,[r2,#0x1c]
021c7f40  blx r2
021c7f44  ldr r2,[r10,#0x34]
021c7f48  mov r0,r10
021c7f4c  ldr r1,[r2,#0x4bc]
021c7f50  add r1,r1,#0x1
021c7f54  str r1,[r2,#0x4bc]
021c7f58  bl 0x0201593c
021c7f5c  add sp,sp,#0x60
021c7f60  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
