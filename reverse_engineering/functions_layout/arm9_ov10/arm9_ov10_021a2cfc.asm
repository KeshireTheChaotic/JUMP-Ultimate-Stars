021a2cfc  stmdb sp!,{r3,r4,r5,lr}
021a2d00  mov r5,r0
021a2d04  ldr r0,[r5,#0x28]
021a2d08  cmp r0,#0x0
021a2d0c  moveq r0,#0x1
021a2d10  ldmiaeq sp!,{r3,r4,r5,pc}
021a2d14  blx 0x0217668c
021a2d18  mov r4,r0
021a2d1c  bl 0x0219b614
021a2d20  mov r2,#0x1
021a2d24  mvn r0,r2, lsl r0
021a2d28  and r1,r4,r0
021a2d2c  ldrb r0,[r5,#0x33]
021a2d30  and r1,r1,#0xf
021a2d34  cmp r1,r0
021a2d38  movne r2,#0x0
021a2d3c  mov r0,r2
021a2d40  ldmia sp!,{r3,r4,r5,pc}
