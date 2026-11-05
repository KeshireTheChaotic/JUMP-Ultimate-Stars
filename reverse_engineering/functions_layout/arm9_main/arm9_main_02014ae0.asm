02014ae0  stmdb sp!,{r4,lr}
02014ae4  mov r4,r0
02014ae8  ldrb r2,[r4,#0x10]
02014aec  mov r0,#0x0
02014af0  mov r1,r2, lsl #0x18
02014af4  movs r1,r1, lsr #0x1f
02014af8  beq 0x02014b40
02014afc  mov r1,r2, lsl #0x1a
02014b00  movs r1,r1, lsr #0x1f
02014b04  beq 0x02014b40
02014b08  mov r1,r2, lsl #0x1e
02014b0c  movs r1,r1, lsr #0x1f
02014b10  bne 0x02014b20
02014b14  mov r1,r2, lsl #0x1c
02014b18  movs r1,r1, lsr #0x1f
02014b1c  bne 0x02014b40
02014b20  ldrb r1,[r4,#0x10]
02014b24  mov r2,r1, lsl #0x1d
02014b28  movs r2,r2, lsr #0x1f
02014b2c  bne 0x02014b3c
02014b30  mov r1,r1, lsl #0x1b
02014b34  movs r1,r1, lsr #0x1f
02014b38  bne 0x02014b40
02014b3c  mov r0,#0x1
02014b40  ldrb r1,[r4,#0x10]
02014b44  mov r1,r1, lsl #0x1f
02014b48  movs r1,r1, lsr #0x1f
02014b4c  ldrb r1,[r4,#0x11]
02014b50  bne 0x02014bd4
02014b54  mov r1,r1, lsl #0x1f
02014b58  cmp r0,r1, lsr #0x1f
02014b5c  ldmiaeq sp!,{r4,pc}
02014b60  cmp r0,#0x0
02014b64  ldr r0,[r4,#0x34]
02014b68  mov r1,r4
02014b6c  beq 0x02014ba0
02014b70  add r0,r0,#0x8c
02014b74  bl 0x0201cca0
02014b78  ldrb r2,[r4,#0x11]
02014b7c  mov r0,r4
02014b80  mov r1,#0x1
02014b84  bic r2,r2,#0x1
02014b88  orr r2,r2,#0x1
02014b8c  strb r2,[r4,#0x11]
02014b90  ldr r2,[r0,#0x0]
02014b94  ldr r2,[r2,#0x14]
02014b98  blx r2
02014b9c  b 0x02014bc8
02014ba0  add r0,r0,#0x8c
02014ba4  bl 0x0201cdb4
02014ba8  ldrb r2,[r4,#0x11]
02014bac  mov r0,r4
02014bb0  mov r1,#0x0
02014bb4  bic r2,r2,#0x1
02014bb8  strb r2,[r4,#0x11]
02014bbc  ldr r2,[r0,#0x0]
02014bc0  ldr r2,[r2,#0x14]
02014bc4  blx r2
02014bc8  mov r0,r4
02014bcc  bl 0x020149c8
02014bd0  ldmia sp!,{r4,pc}
02014bd4  mov r2,r1, lsl #0x1f
02014bd8  cmp r0,r2, lsr #0x1f
02014bdc  beq 0x02014c28
02014be0  cmp r0,#0x0
02014be4  beq 0x02014c0c
02014be8  bic r0,r1,#0x1
02014bec  orr r1,r0,#0x1
02014bf0  mov r0,r4
02014bf4  strb r1,[r4,#0x11]
02014bf8  ldr r2,[r0,#0x0]
02014bfc  mov r1,#0x1
02014c00  ldr r2,[r2,#0x14]
02014c04  blx r2
02014c08  b 0x02014c28
02014c0c  bic r1,r1,#0x1
02014c10  mov r0,r4
02014c14  strb r1,[r4,#0x11]
02014c18  ldr r2,[r0,#0x0]
02014c1c  mov r1,#0x0
02014c20  ldr r2,[r2,#0x14]
02014c24  blx r2
02014c28  mov r0,r4
02014c2c  bl 0x020149c8
02014c30  ldmia sp!,{r4,pc}
