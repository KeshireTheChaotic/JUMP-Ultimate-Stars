02017a30  stmdb sp!,{r3,lr}
02017a34  ldrh lr,[r0,#0x8]
02017a38  and r12,r1,#0x1
02017a3c  cmp r12,#0x1
02017a40  mul r12,r2,lr
02017a44  mov r2,r12, lsr #0x1
02017a48  add r1,r2,r1, lsr #0x1
02017a4c  ldr r2,[r0,#0xc]
02017a50  ldrb r0,[r2,r1]
02017a54  andeq r0,r0,#0xf0
02017a58  orreq r0,r3,r0
02017a5c  andne r0,r0,#0xf
02017a60  orrne r0,r0,r3, lsl #0x4
02017a64  strb r0,[r2,r1]
02017a68  ldmia sp!,{r3,pc}
