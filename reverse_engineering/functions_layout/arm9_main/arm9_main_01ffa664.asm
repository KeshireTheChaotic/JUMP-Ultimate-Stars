01ffa664  stmdb sp!,{lr}
01ffa668  ldrb r7,[r4,#0xeff]
01ffa66c  add r7,r7,r6
01ffa670  mov r7,r7, asr #0x1
01ffa674  strb r7,[r4,#0xf07]
01ffa678  ldrb r8,[r4,#-0xf1]
01ffa67c  add r8,r8,r6
01ffa680  mov r8,r8, asr #0x1
01ffa684  strb r8,[r4,#0x70f]
01ffa688  ldrb r6,[r4,#-0xf9]
01ffa68c  add r7,r7,r6
01ffa690  mov r6,r7, asr #0x1
01ffa694  strb r6,[r4,#0x707]
01ffa698  bl 0x01ffbfa0
01ffa69c  add r4,r4,#0x8
01ffa6a0  bl 0x01ffbfa0
01ffa6a4  add r4,r4,#0x800
01ffa6a8  sub r4,r4,#0x8
01ffa6ac  bl 0x01ffbfa0
01ffa6b0  add r4,r4,#0x8
01ffa6b4  bl 0x01ffbfa0
01ffa6b8  ldmia sp!,{pc}
