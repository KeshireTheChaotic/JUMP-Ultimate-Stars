02160ef0  stmdb sp!,{r3,lr}
02160ef4  ldr r1,[0x2160f30]
02160ef8  mov r0,#0x1
02160efc  ldr r12,[r1,#0x0]
02160f00  mov r3,r0
02160f04  ldr lr,[r12,#0x158]
02160f08  mov r1,#0x0
02160f0c  b 0x02160f24
02160f10  add r2,r12,r3, lsl #0x2
02160f14  ldr r2,[r2,#0x6c]
02160f18  add r3,r3,#0x1
02160f1c  cmp r2,#0x0
02160f20  movne r0,r1
02160f24  cmp r3,lr
02160f28  blt 0x02160f10
02160f2c  ldmia sp!,{r3,pc}
