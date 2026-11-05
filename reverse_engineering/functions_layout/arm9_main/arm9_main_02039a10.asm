02039a10  stmdb sp!,{r3,lr}
02039a14  ldrh lr,[r0,#0x8]
02039a18  ldrh r12,[r0,#0xa]
02039a1c  mov r3,#0x0
02039a20  ldr r2,[r0,#0xc]
02039a24  mul r12,lr,r12
02039a28  add r12,r12,r12, lsr #0x1f
02039a2c  mov r12,r12, asr #0x1
02039a30  cmp r12,#0x0
02039a34  ldmiale sp!,{r3,pc}
02039a38  orr r1,r1,r1, lsl #0x4
02039a3c  and lr,r1,#0xff
02039a40  b 0x02039a4c
02039a44  strb lr,[r2],#0x1
02039a48  add r3,r3,#0x1
02039a4c  ldrh r12,[r0,#0x8]
02039a50  ldrh r1,[r0,#0xa]
02039a54  mul r1,r12,r1
02039a58  add r1,r1,r1, lsr #0x1f
02039a5c  cmp r3,r1, asr #0x1
02039a60  blt 0x02039a44
02039a64  ldmia sp!,{r3,pc}
