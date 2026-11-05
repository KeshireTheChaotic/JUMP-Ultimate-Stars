021b3a70  stmdb sp!,{r4,lr}
021b3a74  mov r4,r0
021b3a78  ldr r0,[r4,#0x4]
021b3a7c  cmp r0,#0x0
021b3a80  beq 0x021b3a88
021b3a84  bl 0x0201b244
021b3a88  mov r0,r4
021b3a8c  ldmia sp!,{r4,pc}
