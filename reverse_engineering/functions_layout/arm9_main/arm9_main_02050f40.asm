02050f40  stmdb sp!,{r4,lr}
02050f44  mov lr,#0x0
02050f48  mov r3,lr
02050f4c  mov r4,lr
02050f50  mov r12,r3
02050f54  ands r2,r4,#0x1
02050f58  eorne r4,r1,r4, lsr #0x1
02050f5c  add r12,r12,#0x1
02050f60  moveq r4,r4, lsr #0x1
02050f64  cmp r12,#0x8
02050f68  bcc 0x02050f54
02050f6c  str r4,[r0,lr,lsl #0x2]
02050f70  add lr,lr,#0x1
02050f74  cmp lr,#0x100
02050f78  bcc 0x02050f4c
02050f7c  ldmia sp!,{r4,lr}
02050f80  bx lr
