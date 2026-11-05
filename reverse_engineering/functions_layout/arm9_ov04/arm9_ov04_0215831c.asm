0215831c  stmdb sp!,{r4,r5,r6,lr}
02158320  movs r6,r0
02158324  ldmiaeq sp!,{r4,r5,r6,pc}
02158328  mov r5,#0x0
0215832c  mov r4,r5
02158330  add r0,r6,r5, lsl #0x2
02158334  ldr r0,[r0,#0x4]
02158338  mov r1,r4
0215833c  bl 0x02157ed0
02158340  add r5,r5,#0x1
02158344  cmp r5,#0x4
02158348  blt 0x02158330
0215834c  ldmia sp!,{r4,r5,r6,pc}
