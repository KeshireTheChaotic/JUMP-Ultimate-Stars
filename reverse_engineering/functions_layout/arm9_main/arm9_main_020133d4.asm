020133d4  stmdb sp!,{r4,r5,r6,lr}
020133d8  mov r5,r0
020133dc  mov r4,r1
020133e0  bl 0x0201347c
020133e4  ldr r1,[0x2013478]
020133e8  mov r0,#0x0
020133ec  str r1,[r5,#0x0]
020133f0  ldr r1,[r4,#0x38]
020133f4  str r1,[r5,#0x38]
020133f8  ldr r1,[r4,#0x3c]
020133fc  str r1,[r5,#0x3c]
02013400  ldr r1,[r4,#0x40]
02013404  str r1,[r5,#0x40]
02013408  ldrb r1,[r4,#0x44]
0201340c  strb r1,[r5,#0x44]
02013410  strb r0,[r5,#0x45]
02013414  ldr r0,[r4,#0x48]
02013418  str r0,[r5,#0x48]
0201341c  ldr r0,[r5,#0x2c]
02013420  ldr r1,[r5,#0x30]
02013424  ldr r2,[r0,#0x0]
02013428  ldr r2,[r2,#0x68]
0201342c  blx r2
02013430  ldr r1,[r5,#0x48]
02013434  add r0,r0,#0x1
02013438  mov r0,r0, lsr #0x1
0201343c  ldrh r1,[r1,#0x4]
02013440  add r0,r0,#0x1
02013444  add r0,r0,r1, lsr #0x1
02013448  mov r0,r0, lsl #0x1
0201344c  add r0,r0,#0x1
02013450  mov r6,r0, lsl #0x1
02013454  mov r0,r6
02013458  bl 0x0201a228
0201345c  str r0,[r5,#0x34]
02013460  ldr r0,[r4,#0x34]
02013464  ldr r1,[r5,#0x34]
02013468  mov r2,r6
0201346c  bl 0x02051730
02013470  mov r0,r5
02013474  ldmia sp!,{r4,r5,r6,pc}
