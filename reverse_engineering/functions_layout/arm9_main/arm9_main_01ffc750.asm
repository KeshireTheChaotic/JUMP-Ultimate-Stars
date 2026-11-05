01ffc750  stmdb sp!,{lr}
01ffc754  ldr r4,[r0,#-0x8]
01ffc758  ldr r9,[r0,#0x0]
01ffc75c  add r4,r4,r9
01ffc760  ldrb r9,[r4,#-0xf9]
01ffc764  ldrb r10,[r4,#0xff]
01ffc768  add r9,r9,r10
01ffc76c  add r9,r9,#0x1
01ffc770  mov r5,r9, lsr #0x1
01ffc774  bl 0x01ff9450
01ffc778  add r6,r5,r6, lsl #0x1
01ffc77c  strb r6,[r4,#0x107]
01ffc780  bl 0x01ffc628
01ffc784  ldr r4,[r0,#-0x4]
01ffc788  ldr r9,[r0,#0x4]
01ffc78c  add r4,r4,r9
01ffc790  bl 0x01ffc5cc
01ffc794  add r4,r4,#0x1
01ffc798  bl 0x01ffc5cc
01ffc79c  ldmia sp!,{pc}
