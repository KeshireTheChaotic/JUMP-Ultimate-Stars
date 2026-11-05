01ffcf60  ldrb r6,[r4,#0x302]
01ffcf64  ldrb r7,[r4,#0x2fe]
01ffcf68  add r7,r7,r6
01ffcf6c  mov r7,r7, asr #0x1
01ffcf70  strb r7,[r4,#0x300]
01ffcf74  ldrb r8,[r4,#-0xfe]
01ffcf78  add r8,r8,r6
01ffcf7c  mov r8,r8, asr #0x1
01ffcf80  strb r8,[r4,#0x102]
01ffcf84  ldrb r6,[r4,#0xfe]
01ffcf88  add r8,r8,r6
01ffcf8c  mov r6,r8, asr #0x1
01ffcf90  strb r6,[r4,#0x100]
01ffcf94  ldrb r7,[r4,#-0x100]
01ffcf98  ldrb r8,[r4,#0x100]
01ffcf9c  add r8,r8,r7
01ffcfa0  mov r8,r8, asr #0x1
01ffcfa4  strb r8,[r4,#0x0]
01ffcfa8  ldrb r7,[r4,#-0xfe]
01ffcfac  ldrb r8,[r4,#0x102]
01ffcfb0  add r8,r8,r7
01ffcfb4  mov r8,r8, asr #0x1
01ffcfb8  strb r8,[r4,#0x2]
01ffcfbc  ldrb r7,[r4,#0x100]
01ffcfc0  ldrb r8,[r4,#0x300]
01ffcfc4  add r8,r8,r7
01ffcfc8  mov r8,r8, asr #0x1
01ffcfcc  strb r8,[r4,#0x200]
01ffcfd0  ldrb r7,[r4,#0x102]
01ffcfd4  ldrb r8,[r4,#0x302]
01ffcfd8  add r8,r8,r7
01ffcfdc  mov r8,r8, asr #0x1
01ffcfe0  strb r8,[r4,#0x202]
01ffcfe4  mov pc,lr
