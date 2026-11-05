02027ce0  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
02027ce4  sub sp,sp,#0x4
02027ce8  mov r6,r0
02027cec  ldr r4,[r6,#0x30]
02027cf0  mov r5,r1
02027cf4  ldr r1,[r4,#0x8]
02027cf8  mov r4,r2
02027cfc  mov r1,r1, lsl #0x15
02027d00  mov r8,r3
02027d04  movs r1,r1, lsr #0x1f
02027d08  beq 0x02027d3c
02027d0c  bl 0x0201b45c
02027d10  mov r7,r0
02027d14  mov r0,r5
02027d18  bl 0x02020ee4
02027d1c  str r8,[sp,#0x0]
02027d20  mov r2,r0
02027d24  ldr r0,[r6,#0x30]
02027d28  mov r1,r7
02027d2c  ldr r5,[r0,#0x0]
02027d30  mov r3,r4
02027d34  ldr r5,[r5,#0x4c]
02027d38  blx r5
02027d3c  add sp,sp,#0x4
02027d40  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
