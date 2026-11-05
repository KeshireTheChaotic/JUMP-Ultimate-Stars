02049808  stmdb sp!,{r3,r4,r5,lr}
0204980c  ldr lr,[r0,#0x6c]
02049810  mov r12,#0x400
02049814  mla lr,r2,lr,r1
02049818  ldr r5,[r0,#0xac]
0204981c  mov r4,lr, lsl #0x1
02049820  ldrh lr,[r5,r4]
02049824  rsb r12,r12,#0x0
02049828  and r12,lr,r12
0204982c  orr r3,r12,r3
02049830  strh r3,[r5,r4]
02049834  bl 0x020474b0
02049838  ldmia sp!,{r3,r4,r5,pc}
