021539e8  stmdb sp!,{r3,lr}
021539ec  mov lr,#0x0
021539f0  add r12,r0,lr, lsl #0x2
021539f4  ldr r3,[r12,#0x43c]
021539f8  add r2,r1,lr, lsl #0x2
021539fc  str r3,[r1,lr,lsl #0x2]
02153a00  ldr r3,[r12,#0x454]
02153a04  add lr,lr,#0x1
02153a08  str r3,[r2,#0x18]
02153a0c  cmp lr,#0x5
02153a10  ble 0x021539f0
02153a14  add r0,r0,#0x400
02153a18  ldrsb r0,[r0,#0x38]
02153a1c  str r0,[r1,#0x30]
02153a20  ldmia sp!,{r3,pc}
