021617a0  stmdb sp!,{r3,r4,r5,lr}
021617a4  mov r5,r0
021617a8  ldr r3,[r5,#0x4]
021617ac  ldr r0,[r5,#0x14]
021617b0  ldr r3,[r3,#0x14]
021617b4  mov r4,r2
021617b8  ldr r1,[r3,r1,lsl #0x3]
021617bc  cmp r0,r1
021617c0  beq 0x021617d4
021617c4  str r1,[r5,#0x14]
021617c8  ldr r0,[r5,#0x8]
021617cc  ldr r0,[r0,#0x4]
021617d0  bl 0x02028330
021617d4  ldr r1,[r5,#0x4]
021617d8  ldr r0,[r5,#0x1c]
021617dc  ldr r1,[r1,#0x14]
021617e0  ldr r1,[r1,r4,lsl #0x3]
021617e4  cmp r0,r1
021617e8  ldmiaeq sp!,{r3,r4,r5,pc}
021617ec  str r1,[r5,#0x1c]
021617f0  ldr r0,[r5,#0x8]
021617f4  ldr r0,[r0,#0x4]
021617f8  bl 0x02028330
021617fc  ldmia sp!,{r3,r4,r5,pc}
