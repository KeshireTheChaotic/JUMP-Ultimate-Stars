021582c8  stmdb sp!,{r3,r4,r5,lr}
021582cc  movs r5,r0
021582d0  ldmiaeq sp!,{r3,r4,r5,pc}
021582d4  mov r4,#0x0
021582d8  add r0,r5,r4, lsl #0x2
021582dc  ldr r0,[r0,#0x4]
021582e0  bl 0x02157e3c
021582e4  add r4,r4,#0x1
021582e8  cmp r4,#0x4
021582ec  blt 0x021582d8
021582f0  mov r0,r5
021582f4  bl 0x0201b244
021582f8  ldmia sp!,{r3,r4,r5,pc}
