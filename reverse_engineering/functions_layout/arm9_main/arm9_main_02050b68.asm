02050b68  stmdb sp!,{r4,lr}
02050b6c  ldr r3,[r0,#0x4]
02050b70  ldr r2,[r1,#0x4]
02050b74  ldr r12,[r0,#0x0]
02050b78  smull r4,lr,r3,r2
02050b7c  ldr r2,[r1,#0x0]
02050b80  ldr r3,[r0,#0x8]
02050b84  smlal r4,lr,r12,r2
02050b88  ldr r1,[r1,#0x8]
02050b8c  mov r0,#0x800
02050b90  smlal r4,lr,r3,r1
02050b94  adds r0,r4,r0
02050b98  adc r1,lr,#0x0
02050b9c  mov r0,r0, lsr #0xc
02050ba0  orr r0,r0,r1, lsl #0x14
02050ba4  ldmia sp!,{r4,lr}
02050ba8  bx lr
