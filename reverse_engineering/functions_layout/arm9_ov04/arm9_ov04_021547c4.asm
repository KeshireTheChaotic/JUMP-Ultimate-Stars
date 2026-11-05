021547c4  stmdb sp!,{r4,r5,r6,lr}
021547c8  mov r5,#0x0
021547cc  mov r6,r0
021547d0  mov r4,r5
021547d4  add r0,r6,r5, lsl #0x2
021547d8  ldr r0,[r0,#0x30]
021547dc  mov r1,r4
021547e0  bl 0x021545f8
021547e4  add r5,r5,#0x1
021547e8  cmp r5,#0x3
021547ec  blt 0x021547d4
021547f0  ldmia sp!,{r4,r5,r6,pc}
