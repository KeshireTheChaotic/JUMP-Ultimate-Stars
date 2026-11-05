02153a24  stmdb sp!,{r4,lr}
02153a28  mov r4,#0x0
02153a2c  mov r3,#0x1
02153a30  mvn r2,#0x0
02153a34  ldr r12,[r1,r4,lsl #0x2]
02153a38  add lr,r0,r4, lsl #0x2
02153a3c  str r12,[lr,#0x43c]
02153a40  add r12,r1,r4, lsl #0x2
02153a44  ldr r12,[r12,#0x18]
02153a48  str r12,[lr,#0x454]
02153a4c  ldr r12,[lr,#0x43c]
02153a50  cmp r12,r2
02153a54  addne r12,r0,r4
02153a58  strbne r3,[r12,#0x546]
02153a5c  add r4,r4,#0x1
02153a60  strbne r3,[r12,#0x54c]
02153a64  cmp r4,#0x5
02153a68  ble 0x02153a34
02153a6c  ldr r1,[r1,#0x30]
02153a70  cmp r1,#0x0
02153a74  strbne r1,[r0,#0x438]
02153a78  ldmia sp!,{r4,pc}
