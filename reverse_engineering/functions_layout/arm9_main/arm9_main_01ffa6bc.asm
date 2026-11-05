01ffa6bc  stmdb sp!,{lr}
01ffa6c0  ldr r4,[r0,#-0x8]
01ffa6c4  ldr r9,[r0,#0x0]
01ffa6c8  add r4,r4,r9
01ffa6cc  ldrb r9,[r4,#-0xf1]
01ffa6d0  ldrb r10,[r4,#0xeff]
01ffa6d4  add r9,r9,r10
01ffa6d8  add r9,r9,#0x1
01ffa6dc  mov r5,r9, lsr #0x1
01ffa6e0  bl 0x01ff9450
01ffa6e4  add r6,r5,r6, lsl #0x1
01ffa6e8  strb r6,[r4,#0xf0f]
01ffa6ec  bl 0x01ffa664
01ffa6f0  ldr r4,[r0,#-0x4]
01ffa6f4  ldr r9,[r0,#0x4]
01ffa6f8  add r4,r4,r9
01ffa6fc  bl 0x01ffa638
01ffa700  add r4,r4,#0x1
01ffa704  bl 0x01ffa638
01ffa708  ldmia sp!,{pc}
