02029e88  stmdb sp!,{r3,r4,r5,lr}
02029e8c  mov r5,r0
02029e90  ldr r0,[r5,#0x14]
02029e94  cmp r0,#0x0
02029e98  ldmiaeq sp!,{r3,r4,r5,pc}
02029e9c  ldrh r0,[r5,#0x8]
02029ea0  mov r0,r0, lsl #0x1
02029ea4  bl 0x0201a228
02029ea8  mov r4,r0
02029eac  ldrh r2,[r5,#0x8]
02029eb0  ldr r0,[r5,#0x10]
02029eb4  mov r1,r4
02029eb8  mov r2,r2, lsl #0x1
02029ebc  bl 0x02051730
02029ec0  ldr r0,[r5,#0x14]
02029ec4  ldr r1,[r0,#0x0]
02029ec8  ldr r1,[r1,#0xc]
02029ecc  blx r1
02029ed0  mov r0,#0x0
02029ed4  str r0,[r5,#0x14]
02029ed8  str r4,[r5,#0x10]
02029edc  ldmia sp!,{r3,r4,r5,pc}
