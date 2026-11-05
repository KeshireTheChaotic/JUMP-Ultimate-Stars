02161d94  stmdb sp!,{r4,lr}
02161d98  ldr r0,[r0,#0x4]
02161d9c  ldr r1,[r0,#0x0]
02161da0  ldr r4,[r0,#0x10]
02161da4  ldr r1,[r1,#0x194]
02161da8  blx r1
02161dac  strb r0,[r4,#0xaf]
02161db0  ldrsb r1,[r4,#0xaf]
02161db4  mvn r0,#0x0
02161db8  cmp r1,r0
02161dbc  ldmiaeq sp!,{r4,pc}
02161dc0  ldrb r0,[r4,#0xb2]
02161dc4  mov r0,r0, lsl #0x1d
02161dc8  movs r0,r0, lsr #0x1f
02161dcc  bne 0x02161de0
02161dd0  add r0,r4,r1
02161dd4  ldrb r1,[r0,#0x88]
02161dd8  ldr r0,[r4,#0x30]
02161ddc  blx 0x021c3430
02161de0  ldrsb r0,[r4,#0xaf]
02161de4  add r0,r4,r0
02161de8  ldrb r0,[r0,#0x88]
02161dec  bl 0x02161e18
02161df0  ldmia sp!,{r4,pc}
