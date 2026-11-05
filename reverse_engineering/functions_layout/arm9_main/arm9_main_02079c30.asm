02079c30  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02079c34  sub sp,sp,#0x8
02079c38  mov r8,r1
02079c3c  mov r4,r0
02079c40  mov r7,r8, lsl #0xc
02079c44  mov r6,#0x0
02079c48  add r5,sp,#0x4
02079c4c  add r1,r4,r6, lsl #0x2
02079c50  ldr r0,[r1,#0x64]
02079c54  cmp r0,#0x0
02079c58  beq 0x02079c6c
02079c5c  str r7,[sp,#0x4]
02079c60  ldr r0,[r1,#0x64]
02079c64  mov r1,r5
02079c68  bl 0x0206c4d4
02079c6c  add r6,r6,#0x1
02079c70  cmp r6,#0x5
02079c74  blt 0x02079c4c
02079c78  sub r0,r8,#0x1
02079c7c  mov r6,r0, lsl #0xc
02079c80  mov r7,#0x0
02079c84  add r5,sp,#0x0
02079c88  add r1,r4,r7, lsl #0x2
02079c8c  ldr r0,[r1,#0x78]
02079c90  cmp r0,#0x0
02079c94  beq 0x02079ca8
02079c98  str r6,[sp,#0x0]
02079c9c  ldr r0,[r1,#0x78]
02079ca0  mov r1,r5
02079ca4  bl 0x0206c4d4
02079ca8  add r7,r7,#0x1
02079cac  cmp r7,#0x10
02079cb0  blt 0x02079c88
02079cb4  add sp,sp,#0x8
02079cb8  ldmia sp!,{r4,r5,r6,r7,r8,pc}
