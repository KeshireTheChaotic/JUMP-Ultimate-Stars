02027c34  stmdb sp!,{r4,lr}
02027c38  mov r4,r0
02027c3c  ldr r1,[r4,#0x30]
02027c40  ldr r1,[r1,#0x8]
02027c44  mov r1,r1, lsl #0x12
02027c48  movs r1,r1, lsr #0x1f
02027c4c  ldmiaeq sp!,{r4,pc}
02027c50  bl 0x0201b45c
02027c54  mov r1,r0
02027c58  ldr r0,[r4,#0x30]
02027c5c  ldr r2,[r0,#0x0]
02027c60  ldr r2,[r2,#0x44]
02027c64  blx r2
02027c68  ldmia sp!,{r4,pc}
