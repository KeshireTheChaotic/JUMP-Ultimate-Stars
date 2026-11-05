021a1b3c  stmdb sp!,{r3,lr}
021a1b40  ldrsh r2,[r1,#0x0]
021a1b44  ldr r3,[r0,#0x0]
021a1b48  cmp r3,r2
021a1b4c  addgt r2,r2,#0x8000
021a1b50  sub r12,r2,r3
021a1b54  cmp r12,#0x0
021a1b58  ldmialt sp!,{r3,pc}
021a1b5c  cmp r12,#0x40
021a1b60  ldmiage sp!,{r3,pc}
021a1b64  ldrb r2,[r0,#0x8]
021a1b68  add r3,r0,#0xc
021a1b6c  mov r0,r1
021a1b70  add r1,r2,r12
021a1b74  mov r2,r1, lsr #0x1f
021a1b78  rsb r1,r2,r1, lsl #0x1a
021a1b7c  add r1,r2,r1, ror #0x1a
021a1b80  add r1,r3,r1, lsl #0x3
021a1b84  mov r2,#0x8
021a1b88  bl 0x02051890
021a1b8c  ldmia sp!,{r3,pc}
