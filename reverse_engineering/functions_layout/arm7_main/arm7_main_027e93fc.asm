027e93fc  stmdb sp!,{r4,r5,r6,lr}
027e9400  mov r6,r0
027e9404  mov r5,r2
027e9408  mov r4,r3
027e940c  mov r2,#0x12
027e9410  bl 0x027e9488
027e9414  cmp r4,#0x0
027e9418  beq 0x027e9430
027e941c  add r0,r6,#0x28
027e9420  mov r1,r5
027e9424  add r2,r4,#0x1
027e9428  mov r2,r2, lsr #0x1
027e942c  bl 0x027e9488
027e9430  ldmia sp!,{r4,r5,r6,lr}
027e9434  bx lr
