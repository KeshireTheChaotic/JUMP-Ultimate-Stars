020277a0  stmdb sp!,{r4,lr}
020277a4  mov r4,r0
020277a8  ldrb r1,[r4,#0x28]
020277ac  mov r1,r1, lsl #0x1b
020277b0  movs r1,r1, lsr #0x1f
020277b4  ldmiane sp!,{r4,pc}
020277b8  bl 0x020347bc
020277bc  ldrb r0,[r4,#0x28]
020277c0  orr r1,r0,#0x10
020277c4  bic r0,r1,#0x1
020277c8  orr r0,r0,#0x1
020277cc  strb r0,[r4,#0x28]
020277d0  ldmia sp!,{r4,pc}
