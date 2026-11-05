02160fbc  stmdb sp!,{r4,r5,r6,r7,r8,lr}
02160fc0  mov r8,r0
02160fc4  ldr r0,[r8,#0x20]
02160fc8  mov r6,r2
02160fcc  ldr r0,[r0,#0xc]
02160fd0  mov r7,r1
02160fd4  ldr r4,[r0,#0x24]
02160fd8  mov r5,r3
02160fdc  mov r0,r4
02160fe0  bl 0x02161870
02160fe4  mov r2,r6, lsl #0x10
02160fe8  mov r0,r7
02160fec  mov r1,r6
02160ff0  mov r2,r2, lsr #0x10
02160ff4  str r7,[r8,#0x0]
02160ff8  str r2,[r8,#0x4]
02160ffc  bl 0x02051098
02161000  strh r0,[r8,#0xc]
02161004  ldr r1,[sp,#0x18]
02161008  str r5,[r8,#0x10]
0216100c  mov r1,r1, lsl #0x10
02161010  mov r1,r1, lsr #0x10
02161014  str r1,[r8,#0x18]
02161018  ldr r1,[0x216108c]
0216101c  mov r0,#0x0
02161020  mov r2,#0x158
02161024  add r1,r4,r1
02161028  bl 0x0205174c
0216102c  ldr r3,[sp,#0x18]
02161030  ldr r0,[0x2161090]
02161034  ldr r2,[0x2161094]
02161038  umull r0,r1,r3,r0
0216103c  sub r0,r3,r1
02161040  add r1,r1,r0, lsr #0x1
02161044  mov r1,r1, lsr #0x8
02161048  umull r0,r1,r2,r1
0216104c  subs r1,r3,r0
02161050  movne r8,#0x1
02161054  ldr r2,[sp,#0x18]
02161058  ldr r1,[0x2161090]
0216105c  moveq r8,#0x0
02161060  umull r1,r3,r2,r1
02161064  sub r1,r2,r3
02161068  add r3,r3,r1, lsr #0x1
0216106c  mov r3,r3, lsr #0x8
02161070  add r1,r8,r3
02161074  str r1,[r4,#0x424]
02161078  str r6,[r4,#0x420]
0216107c  str r7,[r4,#0x428]
02161080  mov r0,#0x1
02161084  str r5,[r4,#0x0]
02161088  ldmia sp!,{r4,r5,r6,r7,r8,pc}
