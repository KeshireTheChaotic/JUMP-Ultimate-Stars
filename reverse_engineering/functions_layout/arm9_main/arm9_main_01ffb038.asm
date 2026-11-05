01ffb038  stmdb sp!,{lr}
01ffb03c  ldr r4,[r0,#-0x8]
01ffb040  ldr r9,[r0,#0x0]
01ffb044  add r4,r4,r9
01ffb048  ldrb r9,[r4,#-0xf1]
01ffb04c  ldrb r10,[r4,#0x2ff]
01ffb050  add r9,r9,r10
01ffb054  add r9,r9,#0x1
01ffb058  mov r5,r9, lsr #0x1
01ffb05c  bl 0x01ff9450
01ffb060  add r6,r5,r6, lsl #0x1
01ffb064  strb r6,[r4,#0x30f]
01ffb068  bl 0x01ffafe4
01ffb06c  ldr r4,[r0,#-0x4]
01ffb070  ldr r9,[r0,#0x4]
01ffb074  add r4,r4,r9
01ffb078  bl 0x01ffafb8
01ffb07c  add r4,r4,#0x1
01ffb080  bl 0x01ffafb8
01ffb084  ldmia sp!,{pc}
