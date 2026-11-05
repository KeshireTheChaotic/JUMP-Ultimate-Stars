02153ea0  stmdb sp!,{r4,lr}
02153ea4  mov r4,#0x0
02153ea8  mov r12,r4
02153eac  mov lr,r4
02153eb0  cmp r2,r1
02153eb4  bgt 0x02153ed0
02153eb8  sub r1,r1,r2
02153ebc  add r3,r0,r4
02153ec0  mov r1,r1, lsl #0x18
02153ec4  strb r2,[r3,#0x46e]
02153ec8  mov r1,r1, asr #0x18
02153ecc  b 0x02153ee4
02153ed0  add r3,r0,r4
02153ed4  cmp r1,#0x0
02153ed8  strbne r1,[r3,#0x46e]
02153edc  movne r1,lr
02153ee0  strbeq r12,[r3,#0x46e]
02153ee4  add r4,r4,#0x1
02153ee8  cmp r4,#0x4
02153eec  blt 0x02153eb0
02153ef0  ldmia sp!,{r4,pc}
