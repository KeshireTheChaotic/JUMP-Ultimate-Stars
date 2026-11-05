020277d4  stmdb sp!,{r4,lr}
020277d8  mov r4,r0
020277dc  ldrb r1,[r4,#0x28]
020277e0  mov r1,r1, lsl #0x1b
020277e4  movs r1,r1, lsr #0x1f
020277e8  ldmiaeq sp!,{r4,pc}
020277ec  bl 0x020347fc
020277f0  ldrb r0,[r4,#0x28]
020277f4  bic r1,r0,#0x10
020277f8  and r0,r1,#0xff
020277fc  bic r0,r0,#0x1
02027800  strb r0,[r4,#0x28]
02027804  ldmia sp!,{r4,pc}
