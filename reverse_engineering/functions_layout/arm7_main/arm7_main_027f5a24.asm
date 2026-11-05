027f5a24  stmdb sp!,{r4,r5,lr}
027f5a28  sub sp,sp,#0x4
027f5a2c  mov r4,r0
027f5a30  bl 0x037fe3a4
027f5a34  mov r5,r0
027f5a38  mov r0,#0x1
027f5a3c  bl 0x038046b8
027f5a40  cmp r0,#0x0
027f5a44  bne 0x027f5a68
027f5a48  mov r0,r5
027f5a4c  bl 0x037fe3b8
027f5a50  ldr r0,[r4,#0x4]
027f5a54  mov r0,r0, lsl #0x10
027f5a58  mov r0,r0, lsr #0x10
027f5a5c  mov r1,#0x4
027f5a60  bl 0x038046d4
027f5a64  b 0x027f5cf4
027f5a68  mov r0,#0x1
027f5a6c  bl 0x038046a0
027f5a70  mov r0,r5
027f5a74  bl 0x037fe3b8
027f5a78  ldr r0,[r4,#0x4]
027f5a7c  sub r0,r0,#0x20
027f5a80  cmp r0,#0xd
027f5a84  addls pc,pc,r0, lsl #0x2
027f5a88  b 0x027f5cb8
027f5a8c  b 0x027f5ac4
027f5a90  b 0x027f5acc
027f5a94  b 0x027f5ad4
027f5a98  b 0x027f5ae0
027f5a9c  b 0x027f5b20
027f5aa0  b 0x027f5b60
027f5aa4  b 0x027f5ba8
027f5aa8  b 0x027f5bf0
027f5aac  b 0x027f5c28
027f5ab0  b 0x027f5c60
027f5ab4  b 0x027f5c68
027f5ab8  b 0x027f5c70
027f5abc  b 0x027f5ca4
027f5ac0  b 0x027f5cb0
027f5ac4  bl 0x027f6758
027f5ac8  b 0x027f5cd8
027f5acc  bl 0x027f6718
027f5ad0  b 0x027f5cd8
027f5ad4  ldr r0,[r4,#0x10]
027f5ad8  bl 0x027f66a4
027f5adc  b 0x027f5cd8
027f5ae0  bl 0x027f59f8
027f5ae4  cmp r0,#0x0
027f5ae8  bne 0x027f5b0c
027f5aec  ldr r0,[r4,#0x4]
027f5af0  mov r0,r0, lsl #0x10
027f5af4  mov r0,r0, lsr #0x10
027f5af8  mov r1,#0x3
027f5afc  bl 0x038046d4
027f5b00  mov r0,#0x1
027f5b04  bl 0x0380465c
027f5b08  b 0x027f5cf4
027f5b0c  ldr r0,[r4,#0x8]
027f5b10  ldr r1,[r4,#0xc]
027f5b14  ldr r2,[r4,#0x10]
027f5b18  bl 0x027f6584
027f5b1c  b 0x027f5cd8
027f5b20  bl 0x027f59f8
027f5b24  cmp r0,#0x0
027f5b28  bne 0x027f5b4c
027f5b2c  ldr r0,[r4,#0x4]
027f5b30  mov r0,r0, lsl #0x10
027f5b34  mov r0,r0, lsr #0x10
027f5b38  mov r1,#0x3
027f5b3c  bl 0x038046d4
027f5b40  mov r0,#0x1
027f5b44  bl 0x0380465c
027f5b48  b 0x027f5cf4
027f5b4c  ldr r0,[r4,#0x8]
027f5b50  ldr r1,[r4,#0xc]
027f5b54  ldr r2,[r4,#0x10]
027f5b58  bl 0x027f6448
027f5b5c  b 0x027f5cd8
027f5b60  bl 0x027f59c0
027f5b64  cmp r0,#0x0
027f5b68  bne 0x027f5b8c
027f5b6c  ldr r0,[r4,#0x4]
027f5b70  mov r0,r0, lsl #0x10
027f5b74  mov r0,r0, lsr #0x10
027f5b78  mov r1,#0x3
027f5b7c  bl 0x038046d4
027f5b80  mov r0,#0x1
027f5b84  bl 0x0380465c
027f5b88  b 0x027f5cf4
027f5b8c  ldr r0,[r4,#0x8]
027f5b90  ldr r1,[r4,#0xc]
027f5b94  mov r1,r1, lsl #0x10
027f5b98  mov r1,r1, lsr #0x10
027f5b9c  ldr r2,[r4,#0x10]
027f5ba0  bl 0x027f631c
027f5ba4  b 0x027f5cd8
027f5ba8  bl 0x027f59c0
027f5bac  cmp r0,#0x0
027f5bb0  bne 0x027f5bd4
027f5bb4  ldr r0,[r4,#0x4]
027f5bb8  mov r0,r0, lsl #0x10
027f5bbc  mov r0,r0, lsr #0x10
027f5bc0  mov r1,#0x3
027f5bc4  bl 0x038046d4
027f5bc8  mov r0,#0x1
027f5bcc  bl 0x0380465c
027f5bd0  b 0x027f5cf4
027f5bd4  ldr r0,[r4,#0x8]
027f5bd8  ldr r1,[r4,#0xc]
027f5bdc  mov r1,r1, lsl #0x10
027f5be0  mov r1,r1, lsr #0x10
027f5be4  ldr r2,[r4,#0x10]
027f5be8  bl 0x027f61f0
027f5bec  b 0x027f5cd8
027f5bf0  bl 0x027f59c0
027f5bf4  cmp r0,#0x0
027f5bf8  bne 0x027f5c1c
027f5bfc  ldr r0,[r4,#0x4]
027f5c00  mov r0,r0, lsl #0x10
027f5c04  mov r0,r0, lsr #0x10
027f5c08  mov r1,#0x3
027f5c0c  bl 0x038046d4
027f5c10  mov r0,#0x1
027f5c14  bl 0x0380465c
027f5c18  b 0x027f5cf4
027f5c1c  ldr r0,[r4,#0x8]
027f5c20  bl 0x027f612c
027f5c24  b 0x027f5cd8
027f5c28  bl 0x027f59c0
027f5c2c  cmp r0,#0x0
027f5c30  bne 0x027f5c54
027f5c34  ldr r0,[r4,#0x4]
027f5c38  mov r0,r0, lsl #0x10
027f5c3c  mov r0,r0, lsr #0x10
027f5c40  mov r1,#0x3
027f5c44  bl 0x038046d4
027f5c48  mov r0,#0x1
027f5c4c  bl 0x0380465c
027f5c50  b 0x027f5cf4
027f5c54  ldr r0,[r4,#0x8]
027f5c58  bl 0x027f6068
027f5c5c  b 0x027f5cd8
027f5c60  bl 0x027f6028
027f5c64  b 0x027f5cd8
027f5c68  bl 0x027f5fe8
027f5c6c  b 0x027f5cd8
027f5c70  bl 0x027f59c0
027f5c74  cmp r0,#0x0
027f5c78  bne 0x027f5c9c
027f5c7c  ldr r0,[r4,#0x4]
027f5c80  mov r0,r0, lsl #0x10
027f5c84  mov r0,r0, lsr #0x10
027f5c88  mov r1,#0x3
027f5c8c  bl 0x038046d4
027f5c90  mov r0,#0x1
027f5c94  bl 0x0380465c
027f5c98  b 0x027f5cf4
027f5c9c  bl 0x027f5fa8
027f5ca0  b 0x027f5cd8
027f5ca4  ldr r0,[r4,#0x10]
027f5ca8  bl 0x027f5f0c
027f5cac  b 0x027f5cd8
027f5cb0  bl 0x027f5ecc
027f5cb4  b 0x027f5cd8
027f5cb8  mov r0,#0x1
027f5cbc  bl 0x0380465c
027f5cc0  ldr r0,[r4,#0x4]
027f5cc4  mov r0,r0, lsl #0x10
027f5cc8  mov r0,r0, lsr #0x10
027f5ccc  mov r1,#0x1
027f5cd0  bl 0x038046d4
027f5cd4  b 0x027f5cf4
027f5cd8  ldr r0,[r4,#0x4]
027f5cdc  mov r0,r0, lsl #0x10
027f5ce0  mov r0,r0, lsr #0x10
027f5ce4  mov r1,#0x0
027f5ce8  bl 0x038046d4
027f5cec  mov r0,#0x1
027f5cf0  bl 0x0380465c
027f5cf4  add sp,sp,#0x4
027f5cf8  ldmia sp!,{r4,r5,lr}
027f5cfc  bx lr
