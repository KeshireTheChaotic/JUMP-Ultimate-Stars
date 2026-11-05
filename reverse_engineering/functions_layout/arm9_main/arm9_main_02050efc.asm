02050efc  stmdb sp!,{r4,lr}
02050f00  cmp r3,#0x0
02050f04  ldr r4,[r1,#0x0]
02050f08  mov lr,#0x0
02050f0c  bls 0x02050f34
02050f10  ldrb r12,[r2,#0x0]
02050f14  add lr,lr,#0x1
02050f18  cmp lr,r3
02050f1c  eor r12,r4,r12
02050f20  and r12,r12,#0xff
02050f24  ldr r12,[r0,r12,lsl #0x2]
02050f28  add r2,r2,#0x1
02050f2c  eor r4,r12,r4, lsr #0x8
02050f30  bcc 0x02050f10
02050f34  str r4,[r1,#0x0]
02050f38  ldmia sp!,{r4,lr}
02050f3c  bx lr
