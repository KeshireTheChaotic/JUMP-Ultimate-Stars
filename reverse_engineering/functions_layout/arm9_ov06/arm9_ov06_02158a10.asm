02158a10  stmdb sp!,{r3,lr}
02158a14  ldr r3,[r1,#0x56c]
02158a18  ldr r2,[0x2158a60]
02158a1c  ldrsb lr,[r3,#0x10]
02158a20  ldr r12,[0x2158a64]
02158a24  mov r3,#0x1
02158a28  mov lr,lr, lsl #0x1
02158a2c  ldrsh r2,[r2,lr]
02158a30  strh r2,[r0,#0xb8]
02158a34  ldr r1,[r1,#0x56c]
02158a38  ldrsb r1,[r1,#0x11]
02158a3c  mov r2,r1, lsr #0x1f
02158a40  rsb r1,r2,r1, lsl #0x1d
02158a44  add r1,r2,r1, ror #0x1d
02158a48  mov r1,r1, lsl #0x18
02158a4c  mov r1,r1, asr #0x17
02158a50  ldrsh r1,[r12,r1]
02158a54  strh r1,[r0,#0xba]
02158a58  strb r3,[r0,#0xd8]
02158a5c  ldmia sp!,{r3,pc}
