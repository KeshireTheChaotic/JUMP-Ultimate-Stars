02027b94  stmdb sp!,{r4,r5,r6,lr}
02027b98  mov r6,r0
02027b9c  ldr r2,[r6,#0x30]
02027ba0  mov r5,r1
02027ba4  ldr r1,[r2,#0x8]
02027ba8  mov r1,r1, lsl #0x14
02027bac  movs r1,r1, lsr #0x1f
02027bb0  ldmiaeq sp!,{r4,r5,r6,pc}
02027bb4  bl 0x0201b45c
02027bb8  mov r4,r0
02027bbc  mov r0,r5
02027bc0  bl 0x02012318
02027bc4  mov r2,r0
02027bc8  ldr r0,[r6,#0x30]
02027bcc  mov r1,r4
02027bd0  ldr r3,[r0,#0x0]
02027bd4  ldr r3,[r3,#0x3c]
02027bd8  blx r3
02027bdc  ldmia sp!,{r4,r5,r6,pc}
