021598e0  stmdb sp!,{r3,lr}
021598e4  ldrb r3,[r0,#0x4]
021598e8  ldr r0,[0x2159920]
021598ec  smlabb r1,r2,r0,r1
021598f0  sub r0,r3,#0x4
021598f4  add r0,r1,r0, lsl #0x2
021598f8  ldr r0,[r0,#0x1f0]
021598fc  ldr r0,[r0,#0x4]
02159900  ldr r0,[r0,#0x68]
02159904  ldr r1,[r0,#0x0]
02159908  ldr r1,[r1,#0x68]
0215990c  blx r1
02159910  cmp r0,#0x0
02159914  moveq r0,#0x1
02159918  movne r0,#0x0
0215991c  ldmia sp!,{r3,pc}
