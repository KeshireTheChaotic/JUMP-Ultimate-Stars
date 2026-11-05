02028384  stmdb sp!,{r3,lr}
02028388  ldrb r3,[r0,#0x28]
0202838c  mov r2,r1
02028390  mov r1,r3, lsl #0x1c
02028394  movs r1,r1, lsr #0x1f
02028398  beq 0x020283d8
0202839c  ldr r3,[r0,#0x40]
020283a0  ldr r1,[0x2028424]
020283a4  cmp r3,r1
020283a8  strne r1,[r0,#0x40]
020283ac  ldrb r12,[r0,#0x28]
020283b0  cmp r2,#0x0
020283b4  movne r1,#0x1
020283b8  moveq r1,#0x0
020283bc  mov r3,r1, lsl #0x1f
020283c0  bic r12,r12,#0x4
020283c4  orr r3,r12,r3, lsr #0x1d
020283c8  mov r1,#0x0
020283cc  strb r3,[r0,#0x28]
020283d0  bl 0x02027834
020283d4  ldmia sp!,{r3,pc}
020283d8  str r2,[r0,#0x40]
020283dc  ldrb r1,[r0,#0x28]
020283e0  cmp r2,#0x0
020283e4  movne r3,#0x1
020283e8  mov r1,r1, lsl #0x1d
020283ec  moveq r3,#0x0
020283f0  mov r1,r1, lsr #0x1f
020283f4  cmp r1,r3
020283f8  ldmiaeq sp!,{r3,pc}
020283fc  cmp r2,#0x0
02028400  ldrb r2,[r0,#0x28]
02028404  movne r1,#0x1
02028408  moveq r1,#0x0
0202840c  mov r1,r1, lsl #0x1f
02028410  bic r2,r2,#0x4
02028414  orr r1,r2,r1, lsr #0x1d
02028418  strb r1,[r0,#0x28]
0202841c  bl 0x02027edc
02028420  ldmia sp!,{r3,pc}
