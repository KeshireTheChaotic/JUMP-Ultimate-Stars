02160cf0  stmdb sp!,{r4,lr}
02160cf4  ldr r2,[r0,#0x20]
02160cf8  ldr r2,[r2,#0xc]
02160cfc  ldr r2,[r2,#0x24]
02160d00  ldr r3,[r2,#0x10]
02160d04  sub r3,r3,#0x3
02160d08  cmp r3,#0x1
02160d0c  bhi 0x02160dbc
02160d10  ldr r1,[r1,#0x0]
02160d14  ldr r12,[0x2160e50]
02160d18  ldrh r3,[r1,#0x0]
02160d1c  ldr lr,[0x2160e54]
02160d20  bic r3,r3,#0x1
02160d24  orr r3,r3,#0x1
02160d28  strh r3,[r1,#0x0]
02160d2c  ldr r3,[r2,#0x14]
02160d30  ldrh r4,[r1,#0x2]
02160d34  mov r3,r3, lsl #0x10
02160d38  mov r3,r3, lsr #0x10
02160d3c  bic r4,r4,#0x1
02160d40  and r3,r3,#0x1
02160d44  orr r3,r4,r3
02160d48  strh r3,[r1,#0x2]
02160d4c  ldrh r4,[r1,#0x0]
02160d50  ldr r3,[r2,#0x24]
02160d54  mov r3,r3, lsl #0x10
02160d58  and r4,r4,r12
02160d5c  and r3,lr,r3, lsr #0x10
02160d60  orr r3,r4,r3, lsl #0x1
02160d64  strh r3,[r1,#0x0]
02160d68  ldrh r4,[r1,#0x2]
02160d6c  ldr r3,[r2,#0x28]
02160d70  mov r3,r3, lsl #0x10
02160d74  and r4,r4,r12
02160d78  and r3,lr,r3, lsr #0x10
02160d7c  orr r3,r4,r3, lsl #0x1
02160d80  strh r3,[r1,#0x2]
02160d84  ldr r12,[r2,#0x28]
02160d88  cmp r12,lr
02160d8c  ldmiaeq sp!,{r4,pc}
02160d90  ldr r2,[r2,#0x1c]
02160d94  ldr r3,[r0,#0x4]
02160d98  mul r4,r2,r12
02160d9c  ldr r0,[r0,#0x0]
02160da0  sub r3,r3,r4
02160da4  cmp r2,r3
02160da8  movhi r2,r3
02160dac  add r1,r1,#0x4
02160db0  add r0,r0,r4
02160db4  bl 0x02051890
02160db8  ldmia sp!,{r4,pc}
02160dbc  ldr r1,[r1,#0x0]
02160dc0  ldrh r3,[r1,#0x0]
02160dc4  bic r3,r3,#0x1
02160dc8  strh r3,[r1,#0x0]
02160dcc  ldr r12,[r2,#0x18]
02160dd0  ldr r3,[r2,#0x10]
02160dd4  cmp r12,r3
02160dd8  moveq r3,#0x1
02160ddc  ldrh r12,[r1,#0x0]
02160de0  movne r3,#0x0
02160de4  and r3,r3,#0xff
02160de8  and r3,r3,#0x1
02160dec  bic r12,r12,#0x2
02160df0  orr r3,r12,r3, lsl #0x1
02160df4  strh r3,[r1,#0x0]
02160df8  ldr r3,[r2,#0x14]
02160dfc  ldrh r12,[r1,#0x0]
02160e00  mov r3,r3, lsl #0x10
02160e04  mov r3,r3, lsr #0x10
02160e08  bic r12,r12,#0x4
02160e0c  and r3,r3,#0x1
02160e10  orr r3,r12,r3, lsl #0x2
02160e14  strh r3,[r1,#0x0]
02160e18  ldrh r3,[r1,#0x0]
02160e1c  ldr r2,[r2,#0x10]
02160e20  and r2,r2,#0xff
02160e24  bic r3,r3,#0xf8
02160e28  and r2,r2,#0x1f
02160e2c  orr r2,r3,r2, lsl #0x3
02160e30  strh r2,[r1,#0x0]
02160e34  ldrh r2,[r0,#0xc]
02160e38  strb r2,[r1,#0x1]
02160e3c  ldr r2,[r0,#0x18]
02160e40  strh r2,[r1,#0x2]
02160e44  ldr r0,[r0,#0x4]
02160e48  strh r0,[r1,#0x4]
02160e4c  ldmia sp!,{r4,pc}
