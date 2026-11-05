03804a54  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
03804a58  sub sp,sp,#0x10
03804a5c  mov r10,r0
03804a60  ldr r1,[r10,#0x4]
03804a64  cmp r1,#0x2
03804a68  bhi 0x03804a88
03804a6c  cmp r1,#0x0
03804a70  beq 0x03804aa0
03804a74  cmp r1,#0x1
03804a78  beq 0x03804b68
03804a7c  cmp r1,#0x2
03804a80  beq 0x03804c14
03804a84  b 0x03804c60
03804a88  cmp r1,#0x10
03804a8c  bne 0x03804c60
03804a90  ldr r0,[0x3804c6c]
03804a94  ldr r0,[r0,#0x20]
03804a98  cmp r0,#0x2
03804a9c  bne 0x03804c60
03804aa0  bl 0x037fe3a4
03804aa4  mov r4,r0
03804aa8  mov r0,#0x0
03804aac  bl 0x038046b8
03804ab0  cmp r0,#0x0
03804ab4  bne 0x03804ad8
03804ab8  mov r0,r4
03804abc  bl 0x037fe3b8
03804ac0  ldr r0,[r10,#0x4]
03804ac4  mov r0,r0, lsl #0x10
03804ac8  mov r0,r0, lsr #0x10
03804acc  mov r1,#0x4
03804ad0  bl 0x038046d4
03804ad4  b 0x03804c60
03804ad8  mov r0,#0x0
03804adc  bl 0x038046a0
03804ae0  mov r0,r4
03804ae4  bl 0x037fe3b8
03804ae8  add r0,sp,#0x8
03804aec  ldr r1,[0x3804c6c]
03804af0  ldr r1,[r1,#0x24]
03804af4  add r2,sp,#0x4
03804af8  bl 0x0380504c
03804afc  add r0,sp,#0x8
03804b00  ldrh r1,[sp,#0x4]
03804b04  bl 0x03804c88
03804b08  ldrh r1,[sp,#0x8]
03804b0c  ldr r0,[0x3804c70]
03804b10  strh r1,[r0,#0x0]
03804b14  ldrh r1,[sp,#0xa]
03804b18  ldr r0,[0x3804c74]
03804b1c  strh r1,[r0,#0x0]
03804b20  ldr r0,[r10,#0x4]
03804b24  cmp r0,#0x0
03804b28  bne 0x03804b40
03804b2c  mov r0,r0, lsl #0x10
03804b30  mov r0,r0, lsr #0x10
03804b34  mov r1,#0x0
03804b38  bl 0x038046d4
03804b3c  b 0x03804b5c
03804b40  mov r0,r0, lsl #0x10
03804b44  mov r0,r0, lsr #0x10
03804b48  ldr r1,[r10,#0x8]
03804b4c  and r1,r1,#0xff
03804b50  mov r1,r1, lsl #0x10
03804b54  mov r1,r1, lsr #0x10
03804b58  bl 0x038046d4
03804b5c  mov r0,#0x0
03804b60  bl 0x0380465c
03804b64  b 0x03804c60
03804b68  ldr r7,[0x3804c6c]
03804b6c  ldr r0,[r7,#0x20]
03804b70  cmp r0,#0x1
03804b74  bne 0x03804c00
03804b78  mov r9,#0x0
03804b7c  ldr r8,[0x3804c78]
03804b80  ldr r6,[0x3804c7c]
03804b84  mov r5,#0xa
03804b88  ldr r4,[0x3804c80]
03804b8c  b 0x03804bd0
03804b90  mul r0,r9,r8
03804b94  bl 0x03807acc
03804b98  ldr r1,[r10,#0xc]
03804b9c  add r0,r1,r0
03804ba0  mov r1,r8
03804ba4  bl 0x03807acc
03804ba8  add r2,r7,r9, lsl #0x1
03804bac  strh r1,[r2,#0xcc]
03804bb0  str r9,[sp,#0x0]
03804bb4  mov r0,#0x28
03804bb8  mla r0,r9,r0,r6
03804bbc  ldrsh r1,[r2,#0xcc]
03804bc0  mov r2,r5
03804bc4  mov r3,r4
03804bc8  bl 0x037fe0d0
03804bcc  add r9,r9,#0x1
03804bd0  ldr r1,[r10,#0x8]
03804bd4  cmp r9,r1
03804bd8  bcc 0x03804b90
03804bdc  ldr r0,[r10,#0x4]
03804be0  mov r0,r0, lsl #0x10
03804be4  mov r0,r0, lsr #0x10
03804be8  mov r1,#0x0
03804bec  bl 0x038046d4
03804bf0  mov r1,#0x2
03804bf4  ldr r0,[0x3804c6c]
03804bf8  str r1,[r0,#0x20]
03804bfc  b 0x03804c60
03804c00  mov r0,r1, lsl #0x10
03804c04  mov r0,r0, lsr #0x10
03804c08  mov r1,#0x3
03804c0c  bl 0x038046d4
03804c10  b 0x03804c60
03804c14  ldr r0,[0x3804c6c]
03804c18  ldr r0,[r0,#0x20]
03804c1c  cmp r0,#0x3
03804c20  bne 0x03804c50
03804c24  ldr r0,[0x3804c84]
03804c28  bl 0x037fdf78
03804c2c  ldr r0,[r10,#0x4]
03804c30  mov r0,r0, lsl #0x10
03804c34  mov r0,r0, lsr #0x10
03804c38  mov r1,#0x0
03804c3c  bl 0x038046d4
03804c40  mov r1,#0x0
03804c44  ldr r0,[0x3804c6c]
03804c48  str r1,[r0,#0x20]
03804c4c  b 0x03804c60
03804c50  mov r0,r1, lsl #0x10
03804c54  mov r0,r0, lsr #0x10
03804c58  mov r1,#0x3
03804c5c  bl 0x038046d4
03804c60  add sp,sp,#0x10
03804c64  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,lr}
03804c68  bx lr
