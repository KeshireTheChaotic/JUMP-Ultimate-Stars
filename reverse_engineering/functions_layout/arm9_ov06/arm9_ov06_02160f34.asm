02160f34  stmdb sp!,{r3,lr}
02160f38  ldr r0,[0x2160f7c]
02160f3c  mov r3,#0x0
02160f40  ldr r12,[r0,#0x0]
02160f44  mov r2,#0x1
02160f48  ldr lr,[r12,#0x158]
02160f4c  b 0x02160f60
02160f50  add r0,r12,r2, lsl #0x2
02160f54  ldr r0,[r0,#0x9c]
02160f58  add r2,r2,#0x1
02160f5c  add r3,r3,r0
02160f60  cmp r2,lr
02160f64  blt 0x02160f50
02160f68  ldrh r0,[r1,#0x2]
02160f6c  cmp r3,r0
02160f70  movge r0,#0x1
02160f74  movlt r0,#0x0
02160f78  ldmia sp!,{r3,pc}
