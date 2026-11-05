0215438c  stmdb sp!,{r4,lr}
02154390  mov r4,r0
02154394  ldr r0,[r4,#0xc]
02154398  ldr r0,[r0,#0x4]
0215439c  blx 0x021b65d8
021543a0  mov r0,#0x0
021543a4  strb r0,[r4,#0x41]
021543a8  ldmia sp!,{r4,pc}
