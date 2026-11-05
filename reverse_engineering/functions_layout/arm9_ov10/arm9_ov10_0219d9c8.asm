0219d9c8  stmdb sp!,{r4,lr}
0219d9cc  mov r4,r0
0219d9d0  blx 0x021766fc
0219d9d4  ldr r2,[0x219da08]
0219d9d8  ldr r1,[0x219da0c]
0219d9dc  ldr r3,[r2,#0x0]
0219d9e0  and r1,r4,r1
0219d9e4  add r0,r3,r0, lsl #0x1
0219d9e8  add r0,r0,#0x1c00
0219d9ec  strh r1,[r0,#0x30]
0219d9f0  ldr r0,[r2,#0x0]
0219d9f4  mov r1,r4
0219d9f8  add r0,r0,#0x24
0219d9fc  add r0,r0,#0xc00
0219da00  bl 0x021a2eb0
0219da04  ldmia sp!,{r4,pc}
