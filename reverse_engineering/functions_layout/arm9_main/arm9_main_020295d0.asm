020295d0  stmdb sp!,{r4,lr}
020295d4  mov r0,#0x4
020295d8  mov r4,r1
020295dc  bl 0x0201a228
020295e0  cmp r0,#0x0
020295e4  strne r4,[r0,#0x0]
020295e8  strne r0,[r4,#0xdc]
020295ec  ldmia sp!,{r4,pc}
