02045fa0  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
02045fa4  mov r9,r0
02045fa8  mov r8,r1
02045fac  mov r7,r2
02045fb0  blx 0x02045bbc
02045fb4  ldr r1,[r9,#0x10]
02045fb8  mov r5,r0
02045fbc  sub r4,r7,r1
02045fc0  mov r0,r8
02045fc4  ldr r2,[r0,#0x0]
02045fc8  ldr r1,[r9,#0x18]
02045fcc  mov r6,r4, lsr #0x2
02045fd0  mul r1,r6,r1
02045fd4  ldr r2,[r2,#0x0]
02045fd8  blx r2
02045fdc  ldr r1,[r9,#0x10]
02045fe0  add r0,r5,r4, lsr #0x2
02045fe4  add r2,r1,r6, lsl #0x2
02045fe8  ldrh r1,[r2,#0x2]
02045fec  sub r0,r0,#0x1
02045ff0  bic r1,r1,#0x8000
02045ff4  strh r1,[r2,#0x2]
02045ff8  ldr r1,[r9,#0x10]
02045ffc  add r1,r1,r0, lsl #0x2
02046000  ldrh r0,[r1,#0x2]
02046004  bic r0,r0,#0x8000
02046008  strh r0,[r1,#0x2]
0204600c  ldr r0,[r9,#0x0]
02046010  ldr r0,[r0,#0x8]
02046014  str r0,[r8,#0x8]
02046018  ldr r0,[r9,#0x0]
0204601c  str r0,[r8,#0x4]
02046020  ldr r0,[r8,#0x8]
02046024  str r8,[r0,#0x4]
02046028  ldr r0,[r9,#0x0]
0204602c  str r8,[r0,#0x8]
02046030  ldrh r0,[r7,#0x2]
02046034  mov r0,r0, lsl #0x11
02046038  cmp r5,r0, lsr #0x11
0204603c  bne 0x020460a4
02046040  ldr r2,[r9,#0x14]
02046044  ldr r0,[0x20461b8]
02046048  ldrsh r1,[r2,#0x0]
0204604c  cmp r1,r0
02046050  moveq r0,#0x0
02046054  streq r0,[r9,#0x14]
02046058  beq 0x020461a4
0204605c  cmp r2,r7
02046060  bne 0x02046078
02046064  ldrsh r0,[r7,#0x0]
02046068  ldr r1,[r9,#0x10]
0204606c  add r0,r1,r0, lsl #0x2
02046070  str r0,[r9,#0x14]
02046074  b 0x020461a4
02046078  ldr r4,[r9,#0x10]
0204607c  sub r1,r7,r4
02046080  b 0x02046088
02046084  add r2,r4,r3, lsl #0x2
02046088  ldrsh r3,[r2,#0x0]
0204608c  cmp r3,r0
02046090  cmpne r3,r1, lsr #0x2
02046094  bne 0x02046084
02046098  ldrsh r0,[r7,#0x0]
0204609c  strh r0,[r2,#0x0]
020460a0  b 0x020461a4
020460a4  ldr r2,[r9,#0x10]
020460a8  mov r1,#0x8000
020460ac  sub r0,r7,r2
020460b0  add r0,r5,r0, lsr #0x2
020460b4  add r0,r2,r0, lsl #0x2
020460b8  ldrh r2,[r0,#0x2]
020460bc  rsb r1,r1,#0x0
020460c0  mov r3,r1, lsr #0x11
020460c4  orr r2,r2,#0x8000
020460c8  strh r2,[r0,#0x2]
020460cc  ldrh r2,[r7,#0x2]
020460d0  ldrh r4,[r0,#0x2]
020460d4  mov r2,r2, lsl #0x11
020460d8  rsb r2,r5,r2, lsr #0x11
020460dc  mov r2,r2, lsl #0x10
020460e0  and r4,r4,r1
020460e4  and r2,r3,r2, lsr #0x10
020460e8  orr r2,r4,r2
020460ec  strh r2,[r0,#0x2]
020460f0  ldr r3,[r9,#0x14]
020460f4  cmp r3,#0x0
020460f8  bne 0x0204610c
020460fc  mov r1,r1, lsr #0x11
02046100  strh r1,[r0,#0x0]
02046104  str r0,[r9,#0x14]
02046108  b 0x0204615c
0204610c  cmp r3,r7
02046110  bne 0x02046124
02046114  ldrsh r1,[r3,#0x0]
02046118  strh r1,[r0,#0x0]
0204611c  str r0,[r9,#0x14]
02046120  b 0x0204615c
02046124  ldr r4,[r9,#0x10]
02046128  ldrsh r12,[r3,#0x0]
0204612c  sub r1,r7,r4
02046130  add r2,r5,r1, lsr #0x2
02046134  cmp r12,r6
02046138  beq 0x02046150
0204613c  mov r1,r12, lsl #0x2
02046140  add r3,r4,r12, lsl #0x2
02046144  ldrsh r12,[r4,r1]
02046148  cmp r12,r6
0204614c  bne 0x0204613c
02046150  strh r2,[r3,#0x0]
02046154  ldrsh r1,[r7,#0x0]
02046158  strh r1,[r0,#0x0]
0204615c  ldrh r1,[r0,#0x2]
02046160  ldr r2,[r9,#0x10]
02046164  mov r1,r1, lsl #0x11
02046168  sub r0,r0,r2
0204616c  mov r1,r1, lsr #0x11
02046170  cmp r1,#0x1
02046174  mov r3,r0, lsr #0x2
02046178  beq 0x02046190
0204617c  add r0,r3,r1
02046180  sub r0,r0,#0x1
02046184  rsb r1,r1,#0x1
02046188  mov r0,r0, lsl #0x2
0204618c  strh r1,[r2,r0]
02046190  ldr r0,[r9,#0x10]
02046194  add r1,r0,r3, lsl #0x2
02046198  ldrh r0,[r1,#0x2]
0204619c  orr r0,r0,#0x8000
020461a0  strh r0,[r1,#0x2]
020461a4  str r8,[r7,#0x0]
020461a8  ldr r0,[r9,#0xc]
020461ac  sub r0,r0,r5
020461b0  str r0,[r9,#0xc]
020461b4  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
