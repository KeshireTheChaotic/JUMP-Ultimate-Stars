01ffd078  stmdb sp!,{lr}
01ffd07c  ldr r4,[r0,#-0x8]
01ffd080  ldr r9,[r0,#0x0]
01ffd084  add r4,r4,r9
01ffd088  ldrb r9,[r4,#-0xfd]
01ffd08c  ldrb r10,[r4,#0x6ff]
01ffd090  add r9,r9,r10
01ffd094  add r9,r9,#0x1
01ffd098  mov r5,r9, lsr #0x1
01ffd09c  bl 0x01ff9450
01ffd0a0  add r6,r5,r6, lsl #0x1
01ffd0a4  strb r6,[r4,#0x703]
01ffd0a8  bl 0x01ffd014
01ffd0ac  ldr r4,[r0,#-0x4]
01ffd0b0  ldr r9,[r0,#0x4]
01ffd0b4  add r4,r4,r9
01ffd0b8  bl 0x01ffcfe8
01ffd0bc  add r4,r4,#0x1
01ffd0c0  bl 0x01ffcfe8
01ffd0c4  ldmia sp!,{pc}
