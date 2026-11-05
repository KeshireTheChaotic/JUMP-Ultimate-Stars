01ffde00  ldrb r6,[r4,#0x701]
01ffde04  ldrb r7,[r4,#0x6ff]
01ffde08  add r7,r7,r6
01ffde0c  mov r7,r7, asr #0x1
01ffde10  strb r7,[r4,#0x700]
01ffde14  ldrb r8,[r4,#-0xff]
01ffde18  add r8,r8,r6
01ffde1c  mov r8,r8, asr #0x1
01ffde20  strb r8,[r4,#0x301]
01ffde24  ldrb r6,[r4,#-0x100]
01ffde28  add r7,r7,r6
01ffde2c  mov r6,r7, asr #0x1
01ffde30  strb r6,[r4,#0x300]
01ffde34  ldrb r7,[r4,#-0x100]
01ffde38  ldrb r8,[r4,#0x300]
01ffde3c  add r8,r8,r7
01ffde40  mov r8,r8, asr #0x1
01ffde44  strb r8,[r4,#0x100]
01ffde48  ldrb r7,[r4,#-0xff]
01ffde4c  ldrb r8,[r4,#0x301]
01ffde50  add r8,r8,r7
01ffde54  mov r8,r8, asr #0x1
01ffde58  strb r8,[r4,#0x101]
01ffde5c  ldrb r7,[r4,#-0x100]
01ffde60  ldrb r8,[r4,#0x100]
01ffde64  add r8,r8,r7
01ffde68  mov r8,r8, asr #0x1
01ffde6c  strb r8,[r4,#0x0]
01ffde70  ldrb r7,[r4,#-0xff]
01ffde74  ldrb r8,[r4,#0x101]
01ffde78  add r8,r8,r7
01ffde7c  mov r8,r8, asr #0x1
01ffde80  strb r8,[r4,#0x1]
01ffde84  ldrb r7,[r4,#0x100]
01ffde88  ldrb r8,[r4,#0x300]
01ffde8c  add r8,r8,r7
01ffde90  mov r8,r8, asr #0x1
01ffde94  strb r8,[r4,#0x200]
01ffde98  ldrb r7,[r4,#0x101]
01ffde9c  ldrb r8,[r4,#0x301]
01ffdea0  add r8,r8,r7
01ffdea4  mov r8,r8, asr #0x1
01ffdea8  strb r8,[r4,#0x201]
01ffdeac  ldrb r7,[r4,#0x300]
01ffdeb0  ldrb r8,[r4,#0x700]
01ffdeb4  add r8,r8,r7
01ffdeb8  mov r8,r8, asr #0x1
01ffdebc  strb r8,[r4,#0x500]
01ffdec0  ldrb r7,[r4,#0x301]
01ffdec4  ldrb r8,[r4,#0x701]
01ffdec8  add r8,r8,r7
01ffdecc  mov r8,r8, asr #0x1
01ffded0  strb r8,[r4,#0x501]
01ffded4  ldrb r7,[r4,#0x300]
01ffded8  ldrb r8,[r4,#0x500]
01ffdedc  add r8,r8,r7
01ffdee0  mov r8,r8, asr #0x1
01ffdee4  strb r8,[r4,#0x400]
01ffdee8  ldrb r7,[r4,#0x301]
01ffdeec  ldrb r8,[r4,#0x501]
01ffdef0  add r8,r8,r7
01ffdef4  mov r8,r8, asr #0x1
01ffdef8  strb r8,[r4,#0x401]
01ffdefc  ldrb r7,[r4,#0x500]
01ffdf00  ldrb r8,[r4,#0x700]
01ffdf04  add r8,r8,r7
01ffdf08  mov r8,r8, asr #0x1
01ffdf0c  strb r8,[r4,#0x600]
01ffdf10  ldrb r7,[r4,#0x501]
01ffdf14  ldrb r8,[r4,#0x701]
01ffdf18  add r8,r8,r7
01ffdf1c  mov r8,r8, asr #0x1
01ffdf20  strb r8,[r4,#0x601]
01ffdf24  mov pc,lr
