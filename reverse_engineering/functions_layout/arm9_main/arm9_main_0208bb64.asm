0208bb64  stmdb sp!,{r4,r5,r6,lr}
0208bb68  ldr r0,[0x208bcbc]
0208bb6c  ldr r0,[r0,#0x8]
0208bb70  tst r0,#0x1
0208bb74  bne 0x0208bb90
0208bb78  bl 0x02089f04
0208bb7c  ldr r1,[0x208bcbc]
0208bb80  str r0,[r1,#0x4]
0208bb84  ldr r0,[r1,#0x8]
0208bb88  orr r0,r0,#0x1
0208bb8c  str r0,[r1,#0x8]
0208bb90  mov r0,#0x0
0208bb94  bl 0x020208ec
0208bb98  ldr r2,[0x208bcbc]
0208bb9c  ldr r1,[0x208bcc0]
0208bba0  ldr r3,[r2,#0x4]
0208bba4  ldr r1,[r1,#0x0]
0208bba8  mov r4,r0
0208bbac  strh r1,[r3,#0x0]
0208bbb0  ldr r0,[r2,#0xc]
0208bbb4  ldrsb r0,[r0,#0x48]
0208bbb8  cmp r0,#0x2
0208bbbc  movlt r0,#0x0
0208bbc0  strhlt r0,[r3,#0x2]
0208bbc4  strblt r0,[r3,#0x4]
0208bbc8  strblt r0,[r3,#0x5]
0208bbcc  blt 0x0208bc38
0208bbd0  ldr r0,[r4,#0x4]
0208bbd4  ldr r1,[r0,#0x0]
0208bbd8  ldr r1,[r1,#0x128]
0208bbdc  blx r1
0208bbe0  ldr r1,[0x208bcbc]
0208bbe4  mov r6,r0
0208bbe8  ldr r5,[r1,#0x4]
0208bbec  mov r0,#0x0
0208bbf0  bl 0x02028920
0208bbf4  bl 0x0208bcc4
0208bbf8  orr r0,r0,r6, lsl #0xc
0208bbfc  strh r0,[r5,#0x2]
0208bc00  ldr r0,[r4,#0x4]
0208bc04  ldr r0,[r0,#0x50]
0208bc08  ldr r1,[r0,#0xc]
0208bc0c  mov r0,r1, asr #0xb
0208bc10  add r0,r1,r0, lsr #0x14
0208bc14  mov r0,r0, asr #0xc
0208bc18  strb r0,[r5,#0x4]
0208bc1c  ldr r0,[r4,#0x4]
0208bc20  ldr r0,[r0,#0x50]
0208bc24  ldr r1,[r0,#0x10]
0208bc28  mov r0,r1, asr #0xb
0208bc2c  add r0,r1,r0, lsr #0x14
0208bc30  mov r0,r0, asr #0xc
0208bc34  strb r0,[r5,#0x5]
0208bc38  bl 0x0208a060
0208bc3c  cmp r0,#0x0
0208bc40  ldmiaeq sp!,{r4,r5,r6,pc}
0208bc44  ldr r0,[0x208bcbc]
0208bc48  ldr r0,[r0,#0xc]
0208bc4c  ldrsb r0,[r0,#0x48]
0208bc50  cmp r0,#0x1
0208bc54  ldmiane sp!,{r4,r5,r6,pc}
0208bc58  mov r0,#0x0
0208bc5c  bl 0x02089f10
0208bc60  ldr r1,[0x208bcc0]
0208bc64  ldrh r2,[r0,#0x0]
0208bc68  ldr r1,[r1,#0x0]
0208bc6c  cmp r1,#0x2
0208bc70  mov r0,r1, lsl #0x10
0208bc74  mov r1,r0, lsr #0x10
0208bc78  cmpcs r2,#0x2
0208bc7c  ldmiacc sp!,{r4,r5,r6,pc}
0208bc80  cmp r1,r2
0208bc84  subcs r0,r1,r2
0208bc88  cmpcs r0,#0x2
0208bc8c  bcs 0x0208bca8
0208bc90  cmp r1,r2
0208bc94  ldmiacs sp!,{r4,r5,r6,pc}
0208bc98  add r0,r1,#0x10000
0208bc9c  sub r0,r0,r2
0208bca0  cmp r0,#0x2
0208bca4  ldmiane sp!,{r4,r5,r6,pc}
0208bca8  ldr r0,[0x208bcbc]
0208bcac  mov r1,#0x2
0208bcb0  ldr r0,[r0,#0xc]
0208bcb4  strb r1,[r0,#0x48]
0208bcb8  ldmia sp!,{r4,r5,r6,pc}
