02048d2c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,lr}
02048d30  mov r6,r0
02048d34  ldr r0,[r6,#0x2c]
02048d38  mov r5,r1
02048d3c  mov r4,r3
02048d40  cmp r0,#0x0
02048d44  ldr r2,[sp,#0x20]
02048d48  beq 0x02048d88
02048d4c  ldr r0,[r6,#0x50]
02048d50  ldr r8,[r2,#0x4]
02048d54  ldr r1,[r0,#0x0]
02048d58  ldr r9,[r2,#0x0]
02048d5c  ldr r1,[r1,#0x20]
02048d60  blx r1
02048d64  mov r7,r0
02048d68  ldr r0,[r6,#0x50]
02048d6c  ldr r1,[r0,#0x0]
02048d70  ldr r1,[r1,#0x24]
02048d74  blx r1
02048d78  mul r2,r8,r0
02048d7c  mul r1,r9,r7
02048d80  add r0,r6,#0x3c
02048d84  blx 0x02066178
02048d88  ldr r0,[0x2048ec0]
02048d8c  ldr r1,[r6,#0x14]
02048d90  and r0,r4,r0
02048d94  mov r0,r0, lsl #0x10
02048d98  cmp r1,#0x0
02048d9c  mov r4,r0, lsr #0x10
02048da0  ldreq r0,[r6,#0x10]
02048da4  mov r7,#0x1
02048da8  andeq r0,r0,#0x1
02048dac  cmpeq r0,#0x1
02048db0  moveq r7,#0x2
02048db4  cmp r1,#0x1
02048db8  bne 0x02048dc8
02048dbc  ldr r0,[r6,#0x10]
02048dc0  cmp r0,#0x0
02048dc4  movne r7,#0x2
02048dc8  mov r8,#0x0
02048dcc  b 0x02048ea8
02048dd0  ldr r0,[r6,#0x8]
02048dd4  cmp r0,#0x3
02048dd8  addls pc,pc,r0, lsl #0x2
02048ddc  b 0x02048ea4
02048de0  b 0x02048df0
02048de4  b 0x02048e40
02048de8  b 0x02048e14
02048dec  b 0x02048e70
02048df0  ldr r1,[r5,#0x0]
02048df4  ldr r0,[r5,#0x4]
02048df8  mov r1,r1, lsl #0xa
02048dfc  mov r2,r0, lsl #0xa
02048e00  add r0,r6,#0x3c
02048e04  mov r1,r1, asr #0x10
02048e08  mov r2,r2, asr #0x10
02048e0c  blx 0x02066124
02048e10  b 0x02048ea4
02048e14  ldr r0,[r5,#0x8]
02048e18  ldmia r5,{r1,r2}
02048e1c  mov r3,r0, lsl #0x10
02048e20  mov r1,r1, lsl #0x10
02048e24  mov r2,r2, lsl #0x10
02048e28  add r0,r6,#0x3c
02048e2c  mov r1,r1, asr #0x10
02048e30  mov r2,r2, asr #0x10
02048e34  mov r3,r3, asr #0x10
02048e38  blx 0x0206614c
02048e3c  b 0x02048ea4
02048e40  mov r1,r4
02048e44  add r0,r6,#0x3c
02048e48  blx 0x020661a8
02048e4c  ldr r1,[r5,#0x0]
02048e50  ldr r0,[r5,#0x4]
02048e54  mov r1,r1, lsl #0xa
02048e58  mov r2,r0, lsl #0xa
02048e5c  add r0,r6,#0x3c
02048e60  mov r1,r1, asr #0x10
02048e64  mov r2,r2, asr #0x10
02048e68  blx 0x02066124
02048e6c  b 0x02048ea4
02048e70  mov r1,r4
02048e74  add r0,r6,#0x3c
02048e78  blx 0x020661a8
02048e7c  ldmia r5,{r1,r2}
02048e80  ldr r0,[r5,#0x8]
02048e84  mov r1,r1, lsl #0x10
02048e88  mov r3,r0, lsl #0x10
02048e8c  mov r2,r2, lsl #0x10
02048e90  add r0,r6,#0x3c
02048e94  mov r1,r1, asr #0x10
02048e98  mov r2,r2, asr #0x10
02048e9c  mov r3,r3, asr #0x10
02048ea0  blx 0x0206614c
02048ea4  add r8,r8,#0x1
02048ea8  cmp r8,r7
02048eac  bcc 0x02048dd0
02048eb0  ldr r0,[r6,#0x10]
02048eb4  add r0,r0,#0x1
02048eb8  str r0,[r6,#0x10]
02048ebc  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,pc}
