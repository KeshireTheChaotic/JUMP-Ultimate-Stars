02027ad8  stmdb sp!,{r4,lr}
02027adc  mov r4,r0
02027ae0  ldr r1,[r4,#0x30]
02027ae4  ldr r1,[r1,#0x8]
02027ae8  mov r1,r1, lsl #0x1a
02027aec  movs r1,r1, lsr #0x1f
02027af0  ldmiaeq sp!,{r4,pc}
02027af4  bl 0x0201b45c
02027af8  mov r1,r0
02027afc  ldr r0,[r4,#0x30]
02027b00  ldr r2,[r0,#0x0]
02027b04  ldr r2,[r2,#0x30]
02027b08  blx r2
02027b0c  ldmia sp!,{r4,pc}
