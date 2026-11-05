02027de8  stmdb sp!,{r4,lr}
02027dec  mov r4,r0
02027df0  ldrb r2,[r4,#0x28]
02027df4  mov r3,r2, lsl #0x1c
02027df8  mov r3,r3, lsr #0x1f
02027dfc  cmp r3,r1
02027e00  ldmiaeq sp!,{r4,pc}
02027e04  bic r2,r2,#0x8
02027e08  mov r1,r1, lsl #0x1f
02027e0c  orr r3,r2,r1, lsr #0x1c
02027e10  and r1,r3,#0xff
02027e14  mov r2,r1, lsl #0x1c
02027e18  strb r3,[r4,#0x28]
02027e1c  movs r2,r2, lsr #0x1f
02027e20  mov r1,r1, lsl #0x1d
02027e24  beq 0x02027e48
02027e28  movs r1,r1, lsr #0x1f
02027e2c  beq 0x02027e6c
02027e30  ldr r2,[r4,#0x40]
02027e34  mov r1,#0x0
02027e38  bl 0x02027834
02027e3c  ldr r0,[0x2027e78]
02027e40  str r0,[r4,#0x40]
02027e44  b 0x02027e6c
02027e48  movs r1,r1, lsr #0x1f
02027e4c  beq 0x02027e6c
02027e50  mov r1,#0x0
02027e54  bl 0x02027808
02027e58  mov r1,#0x0
02027e5c  str r0,[r4,#0x40]
02027e60  mov r0,r4
02027e64  mov r2,r1
02027e68  bl 0x02027834
02027e6c  mov r0,r4
02027e70  bl 0x02027edc
02027e74  ldmia sp!,{r4,pc}
