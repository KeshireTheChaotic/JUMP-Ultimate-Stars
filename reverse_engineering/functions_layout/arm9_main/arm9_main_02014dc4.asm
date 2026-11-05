02014dc4  stmdb sp!,{r3,r4,r5,lr}
02014dc8  mov r5,r0
02014dcc  mov r4,r1
02014dd0  add r0,sp,#0x0
02014dd4  mov r1,r5
02014dd8  blx 0x02011990
02014ddc  ldr r1,[r4,#0x0]
02014de0  ldr r0,[sp,#0x0]
02014de4  cmp r0,r1
02014de8  ldmiaeq sp!,{r3,r4,r5,pc}
02014dec  ldrb r0,[r5,#0x10]
02014df0  mov r0,r0, lsl #0x1f
02014df4  movs r0,r0, lsr #0x1f
02014df8  bne 0x02014e84
02014dfc  ldrb r0,[r5,#0x11]
02014e00  mov r0,r0, lsl #0x1f
02014e04  movs r0,r0, lsr #0x1f
02014e08  beq 0x02014e84
02014e0c  ldr r0,[r5,#0x34]
02014e10  mov r1,r5
02014e14  add r0,r0,#0x8c
02014e18  bl 0x0201cdb4
02014e1c  ldr r0,[r4,#0x0]
02014e20  mov r1,r5
02014e24  mov r0,r0, asr #0x4
02014e28  strh r0,[r5,#0x6]
02014e2c  ldr r0,[r5,#0x34]
02014e30  add r0,r0,#0x8c
02014e34  bl 0x0201cca0
02014e38  ldr r0,[r4,#0x0]
02014e3c  mov r2,#0x1
02014e40  cmp r0,#0xb9000
02014e44  mov r1,#0x0
02014e48  blt 0x02014e54
02014e4c  cmp r0,#0xbf000
02014e50  movle r1,r2
02014e54  cmp r1,#0x0
02014e58  bne 0x02014e6c
02014e5c  ldrb r0,[r5,#0x11]
02014e60  mov r0,r0, lsl #0x1b
02014e64  movs r0,r0, lsr #0x1f
02014e68  moveq r2,#0x0
02014e6c  ldr r1,[r5,#0x1c]
02014e70  mov r0,r2, lsl #0x1f
02014e74  bic r1,r1,#0x800000
02014e78  orr r0,r1,r0, lsr #0x8
02014e7c  str r0,[r5,#0x1c]
02014e80  b 0x02014ed4
02014e84  mov r0,r1, asr #0x4
02014e88  strh r0,[r5,#0x6]
02014e8c  ldr r0,[r4,#0x0]
02014e90  mov r2,#0x1
02014e94  cmp r0,#0xb9000
02014e98  mov r1,#0x0
02014e9c  blt 0x02014ea8
02014ea0  cmp r0,#0xbf000
02014ea4  movle r1,r2
02014ea8  cmp r1,#0x0
02014eac  bne 0x02014ec0
02014eb0  ldrb r0,[r5,#0x11]
02014eb4  mov r0,r0, lsl #0x1b
02014eb8  movs r0,r0, lsr #0x1f
02014ebc  moveq r2,#0x0
02014ec0  ldr r1,[r5,#0x1c]
02014ec4  mov r0,r2, lsl #0x1f
02014ec8  bic r1,r1,#0x800000
02014ecc  orr r0,r1,r0, lsr #0x8
02014ed0  str r0,[r5,#0x1c]
02014ed4  ldrb r0,[r5,#0x10]
02014ed8  ldr r4,[r5,#0x38]
02014edc  mov r0,r0, lsl #0x1f
02014ee0  movs r0,r0, lsr #0x1f
02014ee4  cmpne r4,#0x0
02014ee8  ldmiaeq sp!,{r3,r4,r5,pc}
02014eec  mov r0,r4
02014ef0  ldr r1,[r0,#0x0]
02014ef4  ldr r1,[r1,#0xec]
02014ef8  blx r1
02014efc  cmp r0,r4
02014f00  ldmiaeq sp!,{r3,r4,r5,pc}
02014f04  mov r0,r4
02014f08  ldr r1,[r0,#0x0]
02014f0c  ldr r1,[r1,#0xec]
02014f10  blx r1
02014f14  ldr r2,[r0,#0x0]
02014f18  mov r1,r4
02014f1c  ldr r2,[r2,#0xe0]
02014f20  blx r2
02014f24  ldmia sp!,{r3,r4,r5,pc}
