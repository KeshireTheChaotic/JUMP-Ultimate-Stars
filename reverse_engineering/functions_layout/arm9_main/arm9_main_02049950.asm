02049950  stmdb sp!,{r4,lr}
02049954  ldr r12,[r0,#0x6c]
02049958  ldr r4,[r0,#0xac]
0204995c  mla r12,r2,r12,r1
02049960  mov lr,r12, lsl #0x1
02049964  ldrh r12,[r4,lr]
02049968  bic r12,r12,#0x800
0204996c  orr r3,r12,r3, lsl #0xb
02049970  strh r3,[r4,lr]
02049974  bl 0x020474b0
02049978  ldmia sp!,{r4,pc}
