02154048  stmdb sp!,{r3,r4,r5,lr}
0215404c  mov r5,r0
02154050  ldr r0,[r5,#0x4]
02154054  mov r1,#0x1
02154058  ldr r4,[r0,#0x10]
0215405c  ldr r2,[r0,#0x124]
02154060  ldr r3,[r4,#0x58]
02154064  tst r3,r1, lsl r2
02154068  ldmiaeq sp!,{r3,r4,r5,pc}
0215406c  ldr r2,[r0,#0x0]
02154070  ldr r2,[r2,#0xd8]
02154074  blx r2
02154078  ldr r0,[r5,#0x4]
0215407c  mov r1,#0x1
02154080  ldr r0,[r0,#0x124]
02154084  ldr r2,[r4,#0x58]
02154088  mvn r0,r1, lsl r0
0215408c  and r0,r2,r0
02154090  str r0,[r4,#0x58]
02154094  ldmia sp!,{r3,r4,r5,pc}
