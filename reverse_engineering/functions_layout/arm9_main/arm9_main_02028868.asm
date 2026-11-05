02028868  stmdb sp!,{r3,lr}
0202886c  ldr r1,[r0,#0x34]
02028870  ldr r1,[r1,#0x224]
02028874  cmp r1,#0x0
02028878  ldmiane sp!,{r3,pc}
0202887c  ldrb r1,[r0,#0x29]
02028880  mov r1,r1, lsl #0x18
02028884  movs r1,r1, lsr #0x1f
02028888  beq 0x0202889c
0202888c  ldr r1,[r0,#0x0]
02028890  ldr r1,[r1,#0xc]
02028894  blx r1
02028898  ldmia sp!,{r3,pc}
0202889c  bl 0x02027560
020288a0  ldmia sp!,{r3,pc}
