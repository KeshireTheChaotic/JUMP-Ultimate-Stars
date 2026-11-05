021543dc  stmdb sp!,{r4,lr}
021543e0  mov r4,r0
021543e4  cmp r1,#0x0
021543e8  bge 0x021543f4
021543ec  bl 0x0214f704
021543f0  mov r1,r0
021543f4  add r0,r4,r1, lsl #0x2
021543f8  ldr r0,[r0,#0x44]
021543fc  ldmia sp!,{r4,pc}
