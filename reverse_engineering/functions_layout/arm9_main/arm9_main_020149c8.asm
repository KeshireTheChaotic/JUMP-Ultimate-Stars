020149c8  stmdb sp!,{r4,r5,r6,r7,r8,lr}
020149cc  ldrb r2,[r0,#0x10]
020149d0  mov r1,r2, lsl #0x18
020149d4  movs r1,r1, lsr #0x1f
020149d8  beq 0x020149fc
020149dc  mov r1,r2, lsl #0x1e
020149e0  movs r1,r1, lsr #0x1f
020149e4  bne 0x020149f4
020149e8  mov r1,r2, lsl #0x1c
020149ec  movs r1,r1, lsr #0x1f
020149f0  bne 0x020149fc
020149f4  mov r7,#0x1
020149f8  b 0x02014a00
020149fc  mov r7,#0x0
02014a00  ldrb r2,[r0,#0x10]
02014a04  mov r1,r2, lsl #0x1a
02014a08  movs r1,r1, lsr #0x1f
02014a0c  beq 0x02014a30
02014a10  mov r1,r2, lsl #0x1d
02014a14  movs r1,r1, lsr #0x1f
02014a18  bne 0x02014a28
02014a1c  mov r1,r2, lsl #0x1b
02014a20  movs r1,r1, lsr #0x1f
02014a24  bne 0x02014a30
02014a28  mov r8,#0x1
02014a2c  b 0x02014a34
02014a30  mov r8,#0x0
02014a34  ldr r0,[r0,#0x38]
02014a38  cmp r0,#0x0
02014a3c  ldrne r4,[r0,#0x48]
02014a40  cmpne r4,#0x0
02014a44  ldmiaeq sp!,{r4,r5,r6,r7,r8,pc}
02014a48  ldr r0,[r4,#0x64]
02014a4c  ldrb r0,[r0,#0x10]
02014a50  mov r1,r0, lsl #0x1c
02014a54  mov r0,r0, lsl #0x1b
02014a58  movs r5,r1, lsr #0x1f
02014a5c  mov r6,r0, lsr #0x1f
02014a60  cmpeq r6,#0x0
02014a64  ldmiaeq sp!,{r4,r5,r6,r7,r8,pc}
02014a68  cmp r5,#0x0
02014a6c  beq 0x02014a7c
02014a70  ldr r0,[r4,#0x64]
02014a74  mov r1,r7
02014a78  bl 0x02014c34
02014a7c  cmp r6,#0x0
02014a80  beq 0x02014a90
02014a84  ldr r0,[r4,#0x64]
02014a88  mov r1,r8
02014a8c  bl 0x02014c64
02014a90  ldr r4,[r4,#0x4c]
02014a94  b 0x02014ad4
02014a98  ldr r0,[r4,#0x64]
02014a9c  ldrb r1,[r0,#0x10]
02014aa0  mov r1,r1, lsl #0x1c
02014aa4  tst r5,r1, lsr #0x1f
02014aa8  beq 0x02014ab4
02014aac  mov r1,r7
02014ab0  bl 0x02014c34
02014ab4  ldr r0,[r4,#0x64]
02014ab8  ldrb r1,[r0,#0x10]
02014abc  mov r1,r1, lsl #0x1b
02014ac0  tst r6,r1, lsr #0x1f
02014ac4  beq 0x02014ad0
02014ac8  mov r1,r8
02014acc  bl 0x02014c64
02014ad0  ldr r4,[r4,#0x4c]
02014ad4  cmp r4,#0x0
02014ad8  bne 0x02014a98
02014adc  ldmia sp!,{r4,r5,r6,r7,r8,pc}
