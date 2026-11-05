01ffbb14  stmdb sp!,{lr}
01ffbb18  ldr r4,[r0,#-0x8]
01ffbb1c  ldr r9,[r0,#0x0]
01ffbb20  add r4,r4,r9
01ffbb24  ldrb r9,[r4,#-0xf9]
01ffbb28  ldrb r10,[r4,#0xeff]
01ffbb2c  add r9,r9,r10
01ffbb30  add r9,r9,#0x1
01ffbb34  mov r5,r9, lsr #0x1
01ffbb38  bl 0x01ff9450
01ffbb3c  add r6,r5,r6, lsl #0x1
01ffbb40  strb r6,[r4,#0xf07]
01ffbb44  bl 0x01ffbabc
01ffbb48  ldr r4,[r0,#-0x4]
01ffbb4c  ldr r9,[r0,#0x4]
01ffbb50  add r4,r4,r9
01ffbb54  bl 0x01ffba90
01ffbb58  add r4,r4,#0x1
01ffbb5c  bl 0x01ffba90
01ffbb60  ldmia sp!,{pc}
