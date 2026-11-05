01ffbfa0  stmdb sp!,{lr}
01ffbfa4  ldrb r6,[r4,#0x707]
01ffbfa8  ldrb r7,[r4,#0x6ff]
01ffbfac  add r7,r7,r6
01ffbfb0  mov r7,r7, asr #0x1
01ffbfb4  strb r7,[r4,#0x703]
01ffbfb8  ldrb r8,[r4,#-0xf9]
01ffbfbc  add r8,r8,r6
01ffbfc0  mov r8,r8, asr #0x1
01ffbfc4  strb r8,[r4,#0x307]
01ffbfc8  ldrb r6,[r4,#-0xfd]
01ffbfcc  add r7,r7,r6
01ffbfd0  mov r6,r7, asr #0x1
01ffbfd4  strb r6,[r4,#0x303]
01ffbfd8  bl 0x01ffd26c
01ffbfdc  add r4,r4,#0x4
01ffbfe0  bl 0x01ffd26c
01ffbfe4  add r4,r4,#0x3fc
01ffbfe8  bl 0x01ffd26c
01ffbfec  add r4,r4,#0x4
01ffbff0  bl 0x01ffd26c
01ffbff4  sub r4,r4,#0x400
01ffbff8  sub r4,r4,#0x4
01ffbffc  ldmia sp!,{pc}
