01ffab38  stmdb sp!,{lr}
01ffab3c  ldr r4,[r0,#-0x8]
01ffab40  ldr r9,[r0,#0x0]
01ffab44  add r4,r4,r9
01ffab48  ldrb r9,[r4,#-0xf1]
01ffab4c  ldrb r10,[r4,#0x6ff]
01ffab50  add r9,r9,r10
01ffab54  add r9,r9,#0x1
01ffab58  mov r5,r9, lsr #0x1
01ffab5c  bl 0x01ff9450
01ffab60  add r6,r5,r6, lsl #0x1
01ffab64  strb r6,[r4,#0x70f]
01ffab68  bl 0x01ffaae4
01ffab6c  ldr r4,[r0,#-0x4]
01ffab70  ldr r9,[r0,#0x4]
01ffab74  add r4,r4,r9
01ffab78  bl 0x01ffaab8
01ffab7c  add r4,r4,#0x1
01ffab80  bl 0x01ffaab8
01ffab84  ldmia sp!,{pc}
