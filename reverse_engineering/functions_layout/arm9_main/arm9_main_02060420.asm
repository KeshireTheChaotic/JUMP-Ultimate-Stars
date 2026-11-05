02060420  stmdb sp!,{r4,r5,r6,r7,lr}
02060424  sub sp,sp,#0xc
02060428  ldr r12,[sp,#0x28]
0206042c  mov r7,r0
02060430  mov r6,r1
02060434  mov r5,r2
02060438  mov r4,r3
0206043c  ands r0,r12,#0x100
02060440  beq 0x02060464
02060444  ldr r0,[r7,#0x4]
02060448  ldr r1,[r7,#0xc]
0206044c  ldr r2,[sp,#0x2c]
02060450  bl 0x0205ee0c
02060454  ldr r1,[sp,#0x20]
02060458  sub r0,r1,r0
0206045c  add r5,r5,r0
02060460  b 0x0206049c
02060464  ands r0,r12,#0x80
02060468  beq 0x0206049c
0206046c  ldr r0,[r7,#0x4]
02060470  ldr r1,[r7,#0xc]
02060474  ldr r2,[sp,#0x2c]
02060478  bl 0x0205ee0c
0206047c  ldr r2,[sp,#0x20]
02060480  add r1,r0,#0x1
02060484  add r0,r2,#0x1
02060488  add r0,r0,r0, lsr #0x1f
0206048c  mov r2,r0, asr #0x1
02060490  add r0,r1,r1, lsr #0x1f
02060494  sub r0,r2,r0, asr #0x1
02060498  add r5,r5,r0
0206049c  ldr r1,[sp,#0x24]
020604a0  ldr r0,[sp,#0x28]
020604a4  str r1,[sp,#0x0]
020604a8  ldr r12,[sp,#0x2c]
020604ac  str r0,[sp,#0x4]
020604b0  mov r0,r7
020604b4  mov r1,r6
020604b8  mov r2,r5
020604bc  mov r3,r4
020604c0  str r12,[sp,#0x8]
020604c4  bl 0x0206057c
020604c8  add sp,sp,#0xc
020604cc  ldmia sp!,{r4,r5,r6,r7,pc}
