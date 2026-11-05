0219db44  stmdb sp!,{r4,lr}
0219db48  blx 0x021766fc
0219db4c  ldr r1,[0x219db80]
0219db50  mov r2,#0x1
0219db54  ldr r1,[r1,#0x0]
0219db58  add r1,r1,#0x1000
0219db5c  ldr r1,[r1,#0xc38]
0219db60  orr r4,r1,r2, lsl r0
0219db64  blx 0x0217668c
0219db68  and r4,r4,r0
0219db6c  blx 0x0217668c
0219db70  cmp r4,r0
0219db74  moveq r0,#0x1
0219db78  movne r0,#0x0
0219db7c  ldmia sp!,{r4,pc}
