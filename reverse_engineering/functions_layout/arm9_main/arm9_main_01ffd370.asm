01ffd370  stmdb sp!,{lr}
01ffd374  ldr r4,[r0,#-0x8]
01ffd378  ldr r9,[r0,#0x0]
01ffd37c  add r4,r4,r9
01ffd380  ldrb r9,[r4,#-0xfd]
01ffd384  ldrb r10,[r4,#0x2ff]
01ffd388  add r9,r9,r10
01ffd38c  add r9,r9,#0x1
01ffd390  mov r5,r9, lsr #0x1
01ffd394  bl 0x01ff9450
01ffd398  add r6,r5,r6, lsl #0x1
01ffd39c  strb r6,[r4,#0x303]
01ffd3a0  bl 0x01ffd26c
01ffd3a4  ldr r4,[r0,#-0x4]
01ffd3a8  ldr r9,[r0,#0x4]
01ffd3ac  add r4,r4,r9
01ffd3b0  bl 0x01ffd240
01ffd3b4  add r4,r4,#0x1
01ffd3b8  bl 0x01ffd240
01ffd3bc  ldmia sp!,{pc}
