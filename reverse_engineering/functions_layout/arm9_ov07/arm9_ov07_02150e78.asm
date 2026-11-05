02150e78  stmdb sp!,{r3,lr}
02150e7c  ldr r2,[0x2150ea8]
02150e80  ldr r1,[0x2150eac]
02150e84  ldr r12,[r2,#0x0]
02150e88  ldr lr,[r0,#0x4]
02150e8c  ldr r3,[r1,#0x0]
02150e90  sub r12,r12,#0x1
02150e94  ldr r0,[0x2150eb0]
02150e98  str r12,[r2,#0x0]
02150e9c  str r3,[r0,r12,lsl #0x2]
02150ea0  str lr,[r1,#0x0]
02150ea4  ldmia sp!,{r3,pc}
