020453b0  stmdb sp!,{r3,r4,r5,lr}
020453b4  mov r4,r1
020453b8  mov r5,r0
020453bc  bl 0x02043bb8
020453c0  mov r0,r4
020453c4  ldr r1,[r0,#0x0]
020453c8  ldr r4,[r4,#0xc]
020453cc  ldr r1,[r1,#0x18]
020453d0  blx r1
020453d4  ldrh r2,[r5,#0x2c]
020453d8  ldrh r1,[r5,#0x2e]
020453dc  mov r3,r0
020453e0  mov r0,r4
020453e4  mul r1,r2,r1
020453e8  mul r2,r1,r3
020453ec  mov r1,r2, lsr #0x3
020453f0  bl 0x0205401c
020453f4  ldmia sp!,{r3,r4,r5,pc}
