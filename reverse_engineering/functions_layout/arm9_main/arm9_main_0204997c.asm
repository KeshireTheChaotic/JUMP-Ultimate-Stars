0204997c  stmdb sp!,{r4,lr}
02049980  ldr r12,[r0,#0x6c]
02049984  ldr r4,[r0,#0xac]
02049988  mla r12,r2,r12,r1
0204998c  mov lr,r12, lsl #0x1
02049990  ldrh r12,[r4,lr]
02049994  bic r12,r12,#0x400
02049998  orr r3,r12,r3, lsl #0xa
0204999c  strh r3,[r4,lr]
020499a0  bl 0x020474b0
020499a4  ldmia sp!,{r4,pc}
