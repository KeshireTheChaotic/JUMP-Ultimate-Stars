01ffafe4  stmdb sp!,{lr}
01ffafe8  ldrb r7,[r4,#0x2ff]
01ffafec  add r7,r7,r6
01ffaff0  mov r7,r7, asr #0x1
01ffaff4  strb r7,[r4,#0x307]
01ffaff8  ldrb r8,[r4,#-0xf1]
01ffaffc  add r8,r8,r6
01ffb000  mov r8,r8, asr #0x1
01ffb004  strb r8,[r4,#0x10f]
01ffb008  ldrb r6,[r4,#-0xf9]
01ffb00c  add r7,r7,r6
01ffb010  mov r6,r7, asr #0x1
01ffb014  strb r6,[r4,#0x107]
01ffb018  bl 0x01ffc628
01ffb01c  add r4,r4,#0x8
01ffb020  bl 0x01ffc628
01ffb024  add r4,r4,#0x1f8
01ffb028  bl 0x01ffc628
01ffb02c  add r4,r4,#0x8
01ffb030  bl 0x01ffc628
01ffb034  ldmia sp!,{pc}
