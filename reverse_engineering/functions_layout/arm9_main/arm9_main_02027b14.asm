02027b14  stmdb sp!,{r4,lr}
02027b18  mov r4,r0
02027b1c  ldr r1,[r4,#0x30]
02027b20  ldr r1,[r1,#0x8]
02027b24  mov r1,r1, lsl #0x19
02027b28  movs r1,r1, lsr #0x1f
02027b2c  ldmiaeq sp!,{r4,pc}
02027b30  bl 0x0201b45c
02027b34  mov r1,r0
02027b38  ldr r0,[r4,#0x30]
02027b3c  ldr r2,[r0,#0x0]
02027b40  ldr r2,[r2,#0x34]
02027b44  blx r2
02027b48  ldmia sp!,{r4,pc}
