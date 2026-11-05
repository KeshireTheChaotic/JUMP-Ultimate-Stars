02044e78  stmdb sp!,{r3,r4,r5,lr}
02044e7c  mov r4,r0
02044e80  ldr r0,[r4,#0x1c]
02044e84  mov r5,r1
02044e88  ldr r1,[r0,#0x0]
02044e8c  ldr r1,[r1,#0x14]
02044e90  blx r1
02044e94  cmp r0,#0x0
02044e98  ldreq r0,[r4,#0x1c]
02044e9c  ldreq r0,[r0,#0xc]
02044ea0  addeq r0,r0,r5, lsl #0x2
02044ea4  ldmiaeq sp!,{r3,r4,r5,pc}
02044ea8  ldr r0,[0x2044ed8]
02044eac  mov r1,#0x0
02044eb0  strh r1,[r0,#0xd8]
02044eb4  ldrh r2,[r4,#0x2c]
02044eb8  ldr r1,[0x2044edc]
02044ebc  ldr r0,[0x2044ee0]
02044ec0  mov r2,r2, asr #0x3
02044ec4  strb r2,[r1,#0x2da]
02044ec8  ldrh r2,[r4,#0x2e]
02044ecc  mov r2,r2, asr #0x3
02044ed0  strb r2,[r1,#0x2db]
02044ed4  ldmia sp!,{r3,r4,r5,pc}
