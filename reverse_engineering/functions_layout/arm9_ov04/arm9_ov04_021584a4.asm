021584a4  stmdb sp!,{r3,r4,r5,lr}
021584a8  movs r5,r0
021584ac  ldmiaeq sp!,{r3,r4,r5,pc}
021584b0  mov r4,#0x0
021584b4  add r0,r5,r4, lsl #0x2
021584b8  ldr r0,[r0,#0x4]
021584bc  bl 0x02158198
021584c0  add r4,r4,#0x1
021584c4  cmp r4,#0x4
021584c8  blt 0x021584b4
021584cc  ldmia sp!,{r3,r4,r5,pc}
