01ff940c  clz r10,r3
01ff9410  mov r3,r3, lsl r10
01ff9414  add r3,r3,r3
01ff9418  rsb r9,r10,#0x20
01ff941c  mov r6,r3, lsr r9
01ff9420  mov r9,#0x1
01ff9424  add r6,r6,r9, lsl r10
01ff9428  sub r6,r6,#0x1
01ff942c  mov r3,r3, lsl r10
01ff9430  sub r2,r2,r10, lsl #0x1
01ff9434  subs r2,r2,#0x1
01ff9438  movge pc,lr
