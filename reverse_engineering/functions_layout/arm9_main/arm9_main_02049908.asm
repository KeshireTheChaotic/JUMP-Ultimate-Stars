02049908  stmdb sp!,{r3,r4,r5,lr}
0204990c  ldr r12,[r0,#0x6c]
02049910  ldr r4,[sp,#0x10]
02049914  mla lr,r2,r12,r1
02049918  ldr r12,[0x204994c]
0204991c  ldrb r5,[sp,#0x14]
02049920  and r12,r3,r12
02049924  mov r3,r4, lsl #0x1c
02049928  orr r3,r12,r3, lsr #0x10
0204992c  ldrb r4,[sp,#0x18]
02049930  orr r3,r3,r5, lsl #0xa
02049934  ldr r12,[r0,#0xac]
02049938  orr r4,r3,r4, lsl #0xb
0204993c  mov r3,lr, lsl #0x1
02049940  strh r4,[r12,r3]
02049944  bl 0x020474b0
02049948  ldmia sp!,{r3,r4,r5,pc}
