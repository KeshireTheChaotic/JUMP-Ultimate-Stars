02085034  stmdb sp!,{r4,lr}
02085038  ldr r0,[r0,#0x4]
0208503c  ldr r3,[r0,#0x10]
02085040  ldrb r0,[r3,#0x15]
02085044  ldr r1,[r3,#0xc]
02085048  ldr r2,[r3,#0x10]
0208504c  add r12,r1,#0x8
02085050  mov r4,r0, lsl #0x3
02085054  add r0,r12,r0, lsl #0x3
02085058  ldrsh r12,[r12,r4]
0208505c  ldr lr,[r2,#0x4]
02085060  ldrsh r4,[r0,#0x2]
02085064  add r12,lr,r12
02085068  str r12,[r2,#0x4]
0208506c  ldr r12,[r2,#0x8]
02085070  add r12,r12,r4
02085074  str r12,[r2,#0x8]
02085078  ldrb r12,[r1,#0x6]
0208507c  cmp r12,#0x1
02085080  ldmiaeq sp!,{r4,pc}
02085084  ldrh r12,[r3,#0x16]
02085088  add r12,r12,#0x1
0208508c  strh r12,[r3,#0x16]
02085090  ldrh r12,[r0,#0x4]
02085094  ldrh r0,[r3,#0x16]
02085098  cmp r12,r0
0208509c  ldmiacs sp!,{r4,pc}
020850a0  mov lr,#0x0
020850a4  strh lr,[r3,#0x16]
020850a8  ldrb r0,[r3,#0x15]
020850ac  add r0,r0,#0x1
020850b0  strb r0,[r3,#0x15]
020850b4  ldrb r12,[r1,#0x6]
020850b8  and r0,r0,#0xff
020850bc  cmp r12,r0
020850c0  ldmiahi sp!,{r4,pc}
020850c4  strb lr,[r3,#0x15]
020850c8  ldrsh r0,[r1,#0x0]
020850cc  mov r0,r0, lsl #0xc
020850d0  str r0,[r2,#0x4]
020850d4  ldrsh r3,[r1,#0x2]
020850d8  ldrh r0,[r1,#0x4]
020850dc  add r0,r3,r0, lsl #0x3
020850e0  mov r0,r0, lsl #0xc
020850e4  str r0,[r2,#0x8]
020850e8  ldmia sp!,{r4,pc}
