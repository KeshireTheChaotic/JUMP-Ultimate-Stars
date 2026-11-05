02027b50  stmdb sp!,{r3,r4,r5,lr}
02027b54  mov r5,r0
02027b58  ldr r2,[r5,#0x30]
02027b5c  mov r4,r1
02027b60  ldr r1,[r2,#0x8]
02027b64  mov r1,r1, lsl #0x17
02027b68  movs r1,r1, lsr #0x1f
02027b6c  ldmiaeq sp!,{r3,r4,r5,pc}
02027b70  bl 0x0201b45c
02027b74  mov r1,r0
02027b78  ldr r0,[r5,#0x30]
02027b7c  mov r2,r4
02027b80  ldr r3,[r0,#0x0]
02027b84  ldr r3,[r3,#0x38]
02027b88  blx r3
02027b8c  ldmia sp!,{r3,r4,r5,pc}
