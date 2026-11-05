020183f4  stmdb sp!,{r3,r4,r5,lr}
020183f8  mov r5,r0
020183fc  ldr r0,[r5,#0x20]
02018400  ldrsh r3,[r5,#0x26]
02018404  ldr r2,[r0,#0x0]
02018408  ldr r2,[r2,#0x38]
0201840c  add r1,r1,r3
02018410  blx r2
02018414  mov r4,r0
02018418  ldr r0,[r5,#0x20]
0201841c  ldr r1,[r0,#0x0]
02018420  ldr r1,[r1,#0x18]
02018424  blx r1
02018428  ldrsh r1,[r5,#0x24]
0201842c  mul r0,r1,r0
02018430  add r0,r4,r0, lsr #0x3
02018434  ldmia sp!,{r3,r4,r5,pc}
