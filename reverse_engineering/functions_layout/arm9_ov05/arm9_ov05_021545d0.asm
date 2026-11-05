021545d0  stmdb sp!,{r4,r5,r6,lr}
021545d4  mov r5,#0x0
021545d8  mov r6,r0
021545dc  mov r4,r5
021545e0  add r0,r6,r5, lsl #0x2
021545e4  ldr r0,[r0,#0x3cc]
021545e8  mov r1,r4
021545ec  ldr r0,[r0,#0x4]
021545f0  ldr r2,[r0,#0x0]
021545f4  ldr r2,[r2,#0xd8]
021545f8  blx r2
021545fc  add r5,r5,#0x1
02154600  cmp r5,#0x4
02154604  blt 0x021545e0
02154608  ldmia sp!,{r4,r5,r6,pc}
