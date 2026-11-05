020854a4  stmdb sp!,{r4,lr}
020854a8  mov r4,r0
020854ac  ldrb r0,[r4,#0x15]
020854b0  bl 0x0203b414
020854b4  ldrb r1,[r4,#0x18]
020854b8  ldr r0,[r0,#0x88]
020854bc  bl 0x02084eec
020854c0  ldmia sp!,{r4,pc}
