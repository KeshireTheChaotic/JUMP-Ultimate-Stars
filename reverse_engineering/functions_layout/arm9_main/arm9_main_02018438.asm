02018438  stmdb sp!,{r3,r4,r5,lr}
0201843c  mov r5,r0
02018440  ldr r0,[r5,#0x20]
02018444  ldrsh r3,[r5,#0x26]
02018448  ldr r2,[r0,#0x0]
0201844c  ldr r2,[r2,#0x38]
02018450  add r1,r1,r3
02018454  blx r2
02018458  mov r4,r0
0201845c  ldr r0,[r5,#0x20]
02018460  ldr r1,[r0,#0x0]
02018464  ldr r1,[r1,#0x18]
02018468  blx r1
0201846c  ldrsh r1,[r5,#0x24]
02018470  mul r0,r1,r0
02018474  add r0,r4,r0, lsr #0x3
02018478  ldmia sp!,{r3,r4,r5,pc}
