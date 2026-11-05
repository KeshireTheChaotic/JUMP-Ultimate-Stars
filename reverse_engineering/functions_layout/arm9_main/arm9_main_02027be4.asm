02027be4  stmdb sp!,{r4,r5,r6,lr}
02027be8  mov r6,r0
02027bec  ldr r2,[r6,#0x30]
02027bf0  mov r5,r1
02027bf4  ldr r1,[r2,#0x8]
02027bf8  mov r1,r1, lsl #0x13
02027bfc  movs r1,r1, lsr #0x1f
02027c00  ldmiaeq sp!,{r4,r5,r6,pc}
02027c04  bl 0x0201b45c
02027c08  mov r4,r0
02027c0c  mov r0,r5
02027c10  bl 0x02012318
02027c14  mov r2,r0
02027c18  ldr r0,[r6,#0x30]
02027c1c  mov r1,r4
02027c20  ldr r3,[r0,#0x0]
02027c24  ldr r3,[r3,#0x40]
02027c28  blx r3
02027c2c  ldmia sp!,{r4,r5,r6,pc}
