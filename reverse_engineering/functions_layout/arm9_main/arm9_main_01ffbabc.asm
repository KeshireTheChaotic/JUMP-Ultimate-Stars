01ffbabc  stmdb sp!,{lr}
01ffbac0  ldrb r7,[r4,#0xeff]
01ffbac4  add r7,r7,r6
01ffbac8  mov r7,r7, asr #0x1
01ffbacc  strb r7,[r4,#0xf03]
01ffbad0  ldrb r8,[r4,#-0xf9]
01ffbad4  add r8,r8,r6
01ffbad8  mov r8,r8, asr #0x1
01ffbadc  strb r8,[r4,#0x707]
01ffbae0  ldrb r6,[r4,#0x6ff]
01ffbae4  add r8,r8,r6
01ffbae8  mov r6,r8, asr #0x1
01ffbaec  strb r6,[r4,#0x703]
01ffbaf0  bl 0x01ffd014
01ffbaf4  add r4,r4,#0x4
01ffbaf8  bl 0x01ffd014
01ffbafc  add r4,r4,#0x800
01ffbb00  sub r4,r4,#0x4
01ffbb04  bl 0x01ffd014
01ffbb08  add r4,r4,#0x4
01ffbb0c  bl 0x01ffd014
01ffbb10  ldmia sp!,{pc}
