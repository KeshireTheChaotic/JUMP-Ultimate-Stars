01ffc000  stmdb sp!,{lr}
01ffc004  ldr r4,[r0,#-0x8]
01ffc008  ldr r9,[r0,#0x0]
01ffc00c  add r4,r4,r9
01ffc010  ldrb r9,[r4,#-0xf9]
01ffc014  ldrb r10,[r4,#0x6ff]
01ffc018  add r9,r9,r10
01ffc01c  add r9,r9,#0x1
01ffc020  mov r5,r9, lsr #0x1
01ffc024  bl 0x01ff9450
01ffc028  add r6,r5,r6, lsl #0x1
01ffc02c  strb r6,[r4,#0x707]
01ffc030  bl 0x01ffbfa0
01ffc034  ldr r4,[r0,#-0x4]
01ffc038  ldr r9,[r0,#0x4]
01ffc03c  add r4,r4,r9
01ffc040  bl 0x01ffbf74
01ffc044  add r4,r4,#0x1
01ffc048  bl 0x01ffbf74
01ffc04c  ldmia sp!,{pc}
