01ffcd74  stmdb sp!,{lr}
01ffcd78  ldrb r7,[r4,#0xeff]
01ffcd7c  add r7,r7,r6
01ffcd80  mov r7,r7, asr #0x1
01ffcd84  strb r7,[r4,#0xf01]
01ffcd88  ldrb r8,[r4,#-0xfd]
01ffcd8c  add r8,r8,r6
01ffcd90  mov r8,r8, asr #0x1
01ffcd94  strb r8,[r4,#0x703]
01ffcd98  ldrb r6,[r4,#-0xff]
01ffcd9c  add r7,r7,r6
01ffcda0  mov r6,r7, asr #0x1
01ffcda4  strb r6,[r4,#0x701]
01ffcda8  bl 0x01ffde00
01ffcdac  add r4,r4,#0x2
01ffcdb0  bl 0x01ffde00
01ffcdb4  add r4,r4,#0x800
01ffcdb8  sub r4,r4,#0x2
01ffcdbc  bl 0x01ffde00
01ffcdc0  add r4,r4,#0x2
01ffcdc4  bl 0x01ffde00
01ffcdc8  ldmia sp!,{pc}
