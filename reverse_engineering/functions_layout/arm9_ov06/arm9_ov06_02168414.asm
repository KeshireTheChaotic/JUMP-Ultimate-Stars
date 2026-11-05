02168414  stmdb sp!,{r3,r4,lr}
02168418  sub sp,sp,#0x4
0216841c  ldr r0,[r0,#0x4]
02168420  add r1,sp,#0x0
02168424  ldr r4,[r0,#0x10]
02168428  ldrb r0,[r4,#0x24]
0216842c  mov r2,r0, lsl #0xb
02168430  mov r0,r2, asr #0x3
02168434  add r0,r2,r0, lsr #0x1c
02168438  mov r0,r0, asr #0x4
0216843c  add r0,r0,#0x1800
02168440  str r0,[r4,#0x0]
02168444  str r0,[sp,#0x0]
02168448  ldr r0,[r4,#0x8]
0216844c  bl 0x02168488
02168450  ldrb r1,[r4,#0x24]
02168454  add r0,r1,#0x1
02168458  strb r0,[r4,#0x24]
0216845c  cmp r1,#0x10
02168460  bcc 0x0216847c
02168464  mov r0,#0x10
02168468  strb r0,[r4,#0x24]
0216846c  ldr r0,[r4,#0x8]
02168470  ldr r1,[0x2168484]
02168474  ldr r0,[r0,#0x4]
02168478  bl 0x02028384
0216847c  add sp,sp,#0x4
02168480  ldmia sp!,{r3,r4,pc}
