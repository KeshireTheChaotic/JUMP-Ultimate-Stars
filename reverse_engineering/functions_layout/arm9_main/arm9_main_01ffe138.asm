01ffe138  stmdb sp!,{lr}
01ffe13c  ldr r4,[r0,#-0x8]
01ffe140  ldr r9,[r0,#0x0]
01ffe144  add r4,r4,r9
01ffe148  ldrb r9,[r4,#-0xff]
01ffe14c  ldrb r10,[r4,#0x2ff]
01ffe150  add r9,r9,r10
01ffe154  add r9,r9,#0x1
01ffe158  mov r5,r9, lsr #0x1
01ffe15c  bl 0x01ff9450
01ffe160  add r6,r5,r6, lsl #0x1
01ffe164  strb r6,[r4,#0x301]
01ffe168  bl 0x01ffe0b0
01ffe16c  ldr r4,[r0,#-0x4]
01ffe170  ldr r9,[r0,#0x4]
01ffe174  add r4,r4,r9
01ffe178  bl 0x01ffe078
01ffe17c  add r4,r4,#0x1
01ffe180  bl 0x01ffe078
01ffe184  ldmia sp!,{pc}
