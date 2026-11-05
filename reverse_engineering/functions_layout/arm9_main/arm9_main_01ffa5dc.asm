01ffa5dc  stmdb sp!,{lr}
01ffa5e0  ldrb r7,[r4,#0x6fe]
01ffa5e4  add r7,r7,r6
01ffa5e8  mov r7,r7, asr #0x1
01ffa5ec  strb r7,[r4,#0x706]
01ffa5f0  ldrb r8,[r4,#-0xf2]
01ffa5f4  add r8,r8,r6
01ffa5f8  mov r8,r8, asr #0x1
01ffa5fc  strb r8,[r4,#0x30e]
01ffa600  ldrb r6,[r4,#-0xfa]
01ffa604  add r7,r7,r6
01ffa608  mov r6,r7, asr #0x1
01ffa60c  strb r6,[r4,#0x306]
01ffa610  bl 0x01ffbe70
01ffa614  add r4,r4,#0x8
01ffa618  bl 0x01ffbe70
01ffa61c  add r4,r4,#0x3f8
01ffa620  bl 0x01ffbe70
01ffa624  add r4,r4,#0x8
01ffa628  bl 0x01ffbe70
01ffa62c  sub r4,r4,#0x400
01ffa630  sub r4,r4,#0x8
01ffa634  ldmia sp!,{pc}
