02030f24  stmdb sp!,{r3,lr}
02030f28  str r1,[r0,#0x4]
02030f2c  ldr r1,[0x2030f64]
02030f30  mov lr,#0x1
02030f34  ldr r2,[r0,lr,lsl #0x2]
02030f38  add r12,r0,lr, lsl #0x2
02030f3c  eor r2,r2,r2, lsr #0x1e
02030f40  mla r3,r2,r1,lr
02030f44  add lr,lr,#0x1
02030f48  str r3,[r12,#0x4]
02030f4c  cmp lr,#0x270
02030f50  blt 0x02030f34
02030f54  mov r1,#0x1
02030f58  str r1,[r0,#0x9c4]
02030f5c  str r1,[r0,#0x9c8]
02030f60  ldmia sp!,{r3,pc}
