021671e8  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
021671ec  sub sp,sp,#0x50
021671f0  mov r10,r0
021671f4  ldr r0,[r10,#0x10]
021671f8  str r1,[sp,#0x8]
021671fc  ldrb r2,[r0,#0x2c]
02167200  mov r0,#0x34
02167204  ldr r1,[0x2167688]
02167208  smulbb r0,r2,r0
0216720c  ldr r2,[0x216768c]
02167210  mov r3,#0xc7
02167214  bl 0x0201a21c
02167218  str r0,[r10,#0x1c]
0216721c  ldr r1,[r10,#0x10]
02167220  mov r2,#0x34
02167224  ldrb r3,[r1,#0x2c]
02167228  mov r1,#0x0
0216722c  smulbb r2,r3,r2
02167230  bl 0x020517fc
02167234  ldr r0,[r10,#0x28]
02167238  mov r6,#0x0
0216723c  ldr r5,[r0,#0xc]
02167240  ldr r11,[r0,#0x18]
02167244  mvn r4,#0x0
02167248  b 0x02167670
0216724c  mov r0,#0x34
02167250  mul r2,r6,r0
02167254  mov r0,#0x14
02167258  ldr r1,[r10,#0x1c]
0216725c  mul r0,r6,r0
02167260  add r7,r1,r2
02167264  ldr r1,[sp,#0x8]
02167268  mov r3,#0x18
0216726c  add r9,r1,r0
02167270  ldr r1,[r10,#0x18]
02167274  ldrsh r8,[r9,#0x2]
02167278  str r1,[sp,#0x20]
0216727c  ldr r1,[sp,#0x8]
02167280  ldrsh r12,[r1,r0]
02167284  mov r1,#0x5
02167288  smulbb r3,r12,r3
0216728c  strh r8,[r7,#0x22]
02167290  ldr r8,[sp,#0x20]
02167294  str r3,[sp,#0x24]
02167298  add r8,r8,r3
0216729c  ldrsh r3,[r9,#0x2]
021672a0  strh r3,[r7,#0x1a]
021672a4  ldr r3,[sp,#0x8]
021672a8  ldrsh r0,[r3,r0]
021672ac  strh r0,[r7,#0x18]
021672b0  ldrsh r0,[r9,#0x4]
021672b4  strh r0,[r7,#0x24]
021672b8  ldrsh r0,[r9,#0x6]
021672bc  strh r0,[r7,#0x26]
021672c0  ldrsh r0,[r9,#0x8]
021672c4  strh r0,[r7,#0x28]
021672c8  ldrsh r0,[r9,#0xa]
021672cc  strh r0,[r7,#0x2a]
021672d0  ldrsb r0,[r9,#0x12]
021672d4  strb r0,[r7,#0x2d]
021672d8  ldrb r0,[r9,#0x13]
021672dc  strb r0,[r7,#0x2e]
021672e0  mov r0,#0x0
021672e4  strb r0,[r7,#0x2c]
021672e8  ldr r0,[r10,#0x1c]
021672ec  add r0,r0,r2
021672f0  ldrsh r0,[r0,#0x1a]
021672f4  add r0,r0,r0, lsr #0x1f
021672f8  mov r0,r0, asr #0x1
021672fc  strh r0,[r7,#0x1c]
02167300  ldr r0,[r10,#0x1c]
02167304  add r0,r0,r2
02167308  ldrsh r0,[r0,#0x1a]
0216730c  bl 0x0200d12c
02167310  strh r0,[r7,#0x1e]
02167314  mov r0,#0x0
02167318  strh r0,[r7,#0x20]
0216731c  ldrsb r1,[r9,#0xc]
02167320  mov r0,#0x1
02167324  strb r1,[r7,#0x2f]
02167328  ldrsb r1,[r9,#0xd]
0216732c  strb r1,[r7,#0x30]
02167330  bl 0x0203b414
02167334  ldr r1,[r0,#0x88]
02167338  ldr r0,[0x2167690]
0216733c  ldr r2,[r1,#0x4]
02167340  ldr r0,[r0,#0x0]
02167344  ldr r3,[0x2167694]
02167348  sub r1,r0,#0x1
0216734c  ldr r0,[0x2167690]
02167350  str r1,[r0,#0x0]
02167354  ldr r0,[0x2167698]
02167358  ldr r12,[r0,#0x0]
0216735c  add r0,sp,#0x48
02167360  str r12,[r3,r1,lsl #0x2]
02167364  ldr r1,[0x2167698]
02167368  str r2,[r1,#0x0]
0216736c  mov r1,r5
02167370  bl 0x0214f068
02167374  ldr r1,[r8,#0x4]
02167378  ldr r0,[sp,#0x48]
0216737c  mov r1,r1, asr #0x8
02167380  rsb r0,r0,r1, lsl #0xc
02167384  str r0,[sp,#0x1c]
02167388  add r0,sp,#0x4c
0216738c  mov r1,r5
02167390  bl 0x021536c4
02167394  ldr r1,[sp,#0x20]
02167398  ldr r0,[sp,#0x24]
0216739c  ldr r1,[r1,r0]
021673a0  ldr r0,[sp,#0x4c]
021673a4  mov r1,r1, asr #0x8
021673a8  rsb r3,r0,r1, lsl #0xc
021673ac  mov r2,r3, asr #0xb
021673b0  add r2,r3,r2, lsr #0x14
021673b4  ldr r3,[sp,#0x1c]
021673b8  mov r2,r2, lsl #0x4
021673bc  mov r12,r3, asr #0xb
021673c0  add r3,r3,r12, lsr #0x14
021673c4  mov r3,r3, lsl #0x4
021673c8  str r5,[sp,#0x0]
021673cc  mov r0,#0x32
021673d0  str r0,[sp,#0x4]
021673d4  mov r0,r11
021673d8  mov r1,#0x0
021673dc  mov r2,r2, asr #0x10
021673e0  mov r3,r3, asr #0x10
021673e4  bl 0x02167e10
021673e8  str r0,[r7,#0x0]
021673ec  ldrsb r0,[r9,#0xe]
021673f0  cmp r0,r4
021673f4  beq 0x02167478
021673f8  add r0,sp,#0x40
021673fc  mov r1,r5
02167400  bl 0x0214f068
02167404  ldr r1,[r8,#0x4]
02167408  ldr r0,[sp,#0x40]
0216740c  mov r1,r1, asr #0x8
02167410  sub r1,r1,#0x10
02167414  rsb r0,r0,r1, lsl #0xc
02167418  str r0,[sp,#0x18]
0216741c  add r0,sp,#0x44
02167420  mov r1,r5
02167424  bl 0x021536c4
02167428  ldr r1,[r8,#0x0]
0216742c  ldr r0,[sp,#0x44]
02167430  mov r1,r1, asr #0x8
02167434  rsb r3,r0,r1, lsl #0xc
02167438  mov r2,r3, asr #0xb
0216743c  add r2,r3,r2, lsr #0x14
02167440  ldr r3,[sp,#0x18]
02167444  mov r2,r2, lsl #0x4
02167448  mov r12,r3, asr #0xb
0216744c  add r3,r3,r12, lsr #0x14
02167450  mov r3,r3, lsl #0x4
02167454  str r5,[sp,#0x0]
02167458  mov r0,#0x2d
0216745c  str r0,[sp,#0x4]
02167460  ldrsb r1,[r9,#0xe]
02167464  mov r0,r11
02167468  mov r2,r2, asr #0x10
0216746c  mov r3,r3, asr #0x10
02167470  bl 0x02167e10
02167474  str r0,[r7,#0x4]
02167478  ldrsb r0,[r9,#0xf]
0216747c  cmp r0,r4
02167480  beq 0x02167504
02167484  add r0,sp,#0x38
02167488  mov r1,r5
0216748c  bl 0x0214f068
02167490  ldr r1,[r8,#0x4]
02167494  ldr r0,[sp,#0x38]
02167498  mov r1,r1, asr #0x8
0216749c  add r1,r1,#0x38
021674a0  rsb r0,r0,r1, lsl #0xc
021674a4  str r0,[sp,#0x14]
021674a8  add r0,sp,#0x3c
021674ac  mov r1,r5
021674b0  bl 0x021536c4
021674b4  ldr r1,[r8,#0x0]
021674b8  ldr r0,[sp,#0x3c]
021674bc  mov r1,r1, asr #0x8
021674c0  rsb r3,r0,r1, lsl #0xc
021674c4  mov r2,r3, asr #0xb
021674c8  add r2,r3,r2, lsr #0x14
021674cc  ldr r3,[sp,#0x14]
021674d0  mov r2,r2, lsl #0x4
021674d4  mov r12,r3, asr #0xb
021674d8  add r3,r3,r12, lsr #0x14
021674dc  mov r3,r3, lsl #0x4
021674e0  str r5,[sp,#0x0]
021674e4  mov r0,#0x2d
021674e8  str r0,[sp,#0x4]
021674ec  ldrsb r1,[r9,#0xf]
021674f0  mov r0,r11
021674f4  mov r2,r2, asr #0x10
021674f8  mov r3,r3, asr #0x10
021674fc  bl 0x02167e10
02167500  str r0,[r7,#0x8]
02167504  ldrsb r0,[r9,#0x10]
02167508  cmp r0,r4
0216750c  beq 0x02167590
02167510  add r0,sp,#0x30
02167514  mov r1,r5
02167518  bl 0x0214f068
0216751c  ldr r1,[r8,#0x4]
02167520  ldr r0,[sp,#0x30]
02167524  mov r1,r1, asr #0x8
02167528  rsb r0,r0,r1, lsl #0xc
0216752c  str r0,[sp,#0x10]
02167530  add r0,sp,#0x34
02167534  mov r1,r5
02167538  bl 0x021536c4
0216753c  ldr r1,[r8,#0x0]
02167540  ldr r0,[sp,#0x34]
02167544  mov r1,r1, asr #0x8
02167548  sub r1,r1,#0x10
0216754c  rsb r3,r0,r1, lsl #0xc
02167550  mov r2,r3, asr #0xb
02167554  add r2,r3,r2, lsr #0x14
02167558  ldr r3,[sp,#0x10]
0216755c  mov r2,r2, lsl #0x4
02167560  mov r12,r3, asr #0xb
02167564  add r3,r3,r12, lsr #0x14
02167568  mov r3,r3, lsl #0x4
0216756c  str r5,[sp,#0x0]
02167570  mov r0,#0x2d
02167574  str r0,[sp,#0x4]
02167578  ldrsb r1,[r9,#0x10]
0216757c  mov r0,r11
02167580  mov r2,r2, asr #0x10
02167584  mov r3,r3, asr #0x10
02167588  bl 0x02167e10
0216758c  str r0,[r7,#0xc]
02167590  ldrsb r0,[r9,#0x11]
02167594  cmp r0,r4
02167598  beq 0x0216761c
0216759c  add r0,sp,#0x28
021675a0  mov r1,r5
021675a4  bl 0x0214f068
021675a8  ldr r1,[r8,#0x4]
021675ac  ldr r0,[sp,#0x28]
021675b0  mov r1,r1, asr #0x8
021675b4  rsb r0,r0,r1, lsl #0xc
021675b8  str r0,[sp,#0xc]
021675bc  add r0,sp,#0x2c
021675c0  mov r1,r5
021675c4  bl 0x021536c4
021675c8  ldr r1,[r8,#0x0]
021675cc  ldr r0,[sp,#0x2c]
021675d0  mov r1,r1, asr #0x8
021675d4  add r1,r1,#0x40
021675d8  rsb r3,r0,r1, lsl #0xc
021675dc  mov r2,r3, asr #0xb
021675e0  add r2,r3,r2, lsr #0x14
021675e4  ldr r3,[sp,#0xc]
021675e8  mov r2,r2, lsl #0x4
021675ec  mov r8,r3, asr #0xb
021675f0  add r3,r3,r8, lsr #0x14
021675f4  mov r3,r3, lsl #0x4
021675f8  str r5,[sp,#0x0]
021675fc  mov r0,#0x2d
02167600  str r0,[sp,#0x4]
02167604  ldrsb r1,[r9,#0x11]
02167608  mov r0,r11
0216760c  mov r2,r2, asr #0x10
02167610  mov r3,r3, asr #0x10
02167614  bl 0x02167e10
02167618  str r0,[r7,#0x10]
0216761c  ldr r0,[0x2167690]
02167620  ldr r2,[r0,#0x0]
02167624  add r1,r2,#0x1
02167628  str r1,[r0,#0x0]
0216762c  ldr r0,[0x2167694]
02167630  ldr r1,[r0,r2,lsl #0x2]
02167634  ldr r0,[0x2167698]
02167638  str r1,[r0,#0x0]
0216763c  ldrsb r1,[r7,#0x2d]
02167640  cmp r1,r4
02167644  beq 0x02167654
02167648  ldr r0,[r10,#0x2c]
0216764c  mov r2,#0x0
02167650  bl 0x02166d04
02167654  ldrsb r1,[r7,#0x2e]
02167658  cmp r1,r4
0216765c  beq 0x0216766c
02167660  ldr r0,[r10,#0x2c]
02167664  mov r2,#0x0
02167668  bl 0x02166d04
0216766c  add r6,r6,#0x1
02167670  ldr r0,[r10,#0x10]
02167674  ldrb r0,[r0,#0x2c]
02167678  cmp r6,r0
0216767c  blt 0x0216724c
02167680  add sp,sp,#0x50
02167684  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
