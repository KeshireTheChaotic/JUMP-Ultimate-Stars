02154588  stmdb sp!,{r4,r5,r6,lr}
0215458c  mov r1,#0x4
02154590  mov r2,r1
02154594  mov r6,r0
02154598  bl 0x02153ea0
0215459c  mov r5,#0x0
021545a0  mov r4,#0x1
021545a4  add r0,r6,r5, lsl #0x2
021545a8  ldr r0,[r0,#0x3cc]
021545ac  mov r1,r4
021545b0  ldr r0,[r0,#0x4]
021545b4  ldr r2,[r0,#0x0]
021545b8  ldr r2,[r2,#0xd8]
021545bc  blx r2
021545c0  add r5,r5,#0x1
021545c4  cmp r5,#0x4
021545c8  blt 0x021545a4
021545cc  ldmia sp!,{r4,r5,r6,pc}
