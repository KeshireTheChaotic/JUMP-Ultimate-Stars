02159624  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02159628  sub sp,sp,#0x8
0215962c  mov r10,r0
02159630  ldr r0,[0x21597ac]
02159634  ldrsb r3,[r10,#0x24]
02159638  mul r8,r2,r0
0215963c  sub r0,r3,#0x1
02159640  mov r0,r0, lsl #0x3
02159644  add r0,r0,r3, lsl #0x4
02159648  mov r9,r1
0215964c  rsb r0,r0,#0xc0
02159650  mov r0,r0, lsl #0xf
02159654  add r7,r9,r8
02159658  strb r3,[r7,#0x4f4]
0215965c  mov r5,r0, asr #0x10
02159660  mov r4,#0x0
02159664  mov r11,#0xc
02159668  add r0,r7,r4, lsl #0x2
0215966c  ldr r0,[r0,#0x350]
02159670  mov r1,#0x1
02159674  ldr r0,[r0,#0x4]
02159678  ldr r2,[r0,#0x0]
0215967c  ldr r2,[r2,#0xd8]
02159680  blx r2
02159684  add r0,r7,r4, lsl #0x2
02159688  ldr r0,[r0,#0x350]
0215968c  ldr r6,[r0,#0x4]
02159690  ldr r0,[r6,#0x64]
02159694  ldr r1,[r0,#0x0]
02159698  ldr r1,[r1,#0x70]
0215969c  blx r1
021596a0  mov r0,r6
021596a4  ldr r1,[r0,#0x0]
021596a8  ldr r1,[r1,#0xc4]
021596ac  blx r1
021596b0  ldrsb r0,[r10,#0x24]
021596b4  cmp r4,r0
021596b8  bge 0x02159748
021596bc  add r0,r10,r4, lsl #0x1
021596c0  ldrsh r2,[r0,#0x14]
021596c4  mov r0,r5, lsl #0xc
021596c8  add r1,r7,r4, lsl #0x2
021596cc  str r0,[sp,#0x0]
021596d0  smulbb r0,r2,r11
021596d4  rsb r0,r0,#0x100
021596d8  mov r0,r0, asr #0x1
021596dc  mov r0,r0, lsl #0x10
021596e0  mov r0,r0, asr #0x4
021596e4  str r0,[sp,#0x4]
021596e8  ldr r0,[r1,#0x350]
021596ec  add r1,sp,#0x4
021596f0  add r2,sp,#0x0
021596f4  bl 0x0214d4c0
021596f8  add r0,r7,r4, lsl #0x2
021596fc  ldr r1,[r0,#0x350]
02159700  add r0,r10,r4, lsl #0x1
02159704  ldr r2,[r1,#0x4]
02159708  ldrh r1,[r0,#0x4]
0215970c  ldr r0,[r2,#0x64]
02159710  ldr r2,[r0,#0x0]
02159714  add r1,r10,r1
02159718  ldr r2,[r2,#0x68]
0215971c  blx r2
02159720  add r0,r7,r4, lsl #0x2
02159724  ldr r0,[r0,#0x350]
02159728  mov r1,#0x1
0215972c  ldr r0,[r0,#0x4]
02159730  ldr r2,[r0,#0x0]
02159734  ldr r2,[r2,#0xd8]
02159738  blx r2
0215973c  add r0,r5,#0x18
02159740  mov r0,r0, lsl #0x10
02159744  mov r5,r0, asr #0x10
02159748  add r4,r4,#0x1
0215974c  cmp r4,#0x6
02159750  blt 0x02159668
02159754  ldr r2,[0x21597b0]
02159758  add r1,r9,r8
0215975c  add r0,r9,#0xf2
02159760  str r2,[r1,#0x1dc]
02159764  add r4,r0,#0x400
02159768  mov r0,#0x0
0215976c  strb r0,[r4,r8]
02159770  bl 0x0215790c
02159774  bl 0x0203b3f4
02159778  ldr r0,[r0,#0x88]
0215977c  mov r1,#0x1
02159780  mov r2,#0x1e
02159784  bl 0x0214e2d8
02159788  bl 0x0203b3f4
0215978c  ldrb r1,[r4,r8]
02159790  ldr r0,[r0,#0x88]
02159794  rsb r2,r1,#0x10
02159798  bl 0x021597b4
0215979c  bl 0x0214d6e8
021597a0  mov r0,#0x1
021597a4  add sp,sp,#0x8
021597a8  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
