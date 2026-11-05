02014cc4  stmdb sp!,{r3,r4,r5,lr}
02014cc8  mov r4,r0
02014ccc  ldr r0,[r4,#0x38]
02014cd0  ldr r5,[r0,#0x44]
02014cd4  cmp r5,#0x0
02014cd8  moveq r0,#0x1
02014cdc  moveq r5,r0
02014ce0  beq 0x02014d14
02014ce4  ldr r0,[r5,#0x64]
02014ce8  bl 0x02014d6c
02014cec  ldr r1,[r5,#0x64]
02014cf0  ldrb r1,[r1,#0x10]
02014cf4  mov r2,r1, lsl #0x1a
02014cf8  movs r2,r2, lsr #0x1f
02014cfc  beq 0x02014d10
02014d00  mov r1,r1, lsl #0x1d
02014d04  movs r1,r1, lsr #0x1f
02014d08  movne r5,#0x1
02014d0c  bne 0x02014d14
02014d10  mov r5,#0x0
02014d14  ldrb r1,[r4,#0x10]
02014d18  mov r3,#0x0
02014d1c  mov r2,r1, lsl #0x1e
02014d20  cmp r0,r2, lsr #0x1f
02014d24  bicne r1,r1,#0x2
02014d28  movne r0,r0, lsl #0x1f
02014d2c  orrne r0,r1,r0, lsr #0x1e
02014d30  strbne r0,[r4,#0x10]
02014d34  ldrb r0,[r4,#0x10]
02014d38  movne r3,#0x1
02014d3c  mov r1,r0, lsl #0x1d
02014d40  cmp r5,r1, lsr #0x1f
02014d44  bicne r1,r0,#0x2
02014d48  movne r0,r5, lsl #0x1f
02014d4c  orrne r0,r1,r0, lsr #0x1e
02014d50  movne r3,#0x1
02014d54  strbne r0,[r4,#0x10]
02014d58  cmp r3,#0x0
02014d5c  ldmiaeq sp!,{r3,r4,r5,pc}
02014d60  mov r0,r4
02014d64  bl 0x02014ae0
02014d68  ldmia sp!,{r3,r4,r5,pc}
