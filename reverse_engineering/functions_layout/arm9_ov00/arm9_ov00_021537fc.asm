021537fc  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02153800  sub sp,sp,#0xc
02153804  cmp r0,#0x100
02153808  ldr r0,[sp,#0x38]
0215380c  ldr r9,[sp,#0x30]
02153810  str r0,[sp,#0x38]
02153814  ldr r0,[sp,#0x3c]
02153818  ldr r8,[sp,#0x34]
0215381c  str r0,[sp,#0x3c]
02153820  ldr r0,[sp,#0x40]
02153824  ldr r7,[sp,#0x44]
02153828  str r0,[sp,#0x40]
0215382c  str r1,[sp,#0x0]
02153830  str r2,[sp,#0x4]
02153834  mov r10,r3
02153838  addhi sp,sp,#0xc
0215383c  movhi r0,#0x0
02153840  ldmiahi sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
02153844  mov r4,r10, lsl #0x2
02153848  mov r0,r4
0215384c  bl 0x021529d4
02153850  str r0,[r9,#0x0]
02153854  mov r0,r4
02153858  bl 0x021529d4
0215385c  str r0,[r8,#0x0]
02153860  cmp r10,#0x0
02153864  mov r6,#0x0
02153868  bls 0x0215390c
0215386c  ldr r0,[sp,#0x0]
02153870  str r6,[sp,#0x8]
02153874  mov r1,r0, lsr #0x1
02153878  mov r5,r0, lsl #0x8
0215387c  mov r4,r1, lsl #0x8
02153880  mov r11,#0x80
02153884  mov r0,r5
02153888  bl 0x021529d4
0215388c  ldr r1,[r9,#0x0]
02153890  str r0,[r1,r6,lsl #0x2]
02153894  ldr r0,[r9,#0x0]
02153898  ldr r0,[r0,r6,lsl #0x2]
0215389c  cmp r0,#0x0
021538a0  addeq sp,sp,#0xc
021538a4  moveq r0,#0x0
021538a8  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
021538ac  mov r0,r4
021538b0  bl 0x021529d4
021538b4  ldr r1,[r8,#0x0]
021538b8  mov r2,r6, lsl #0x2
021538bc  str r0,[r1,r6,lsl #0x2]
021538c0  ldr r0,[r8,#0x0]
021538c4  ldr r0,[r0,r6,lsl #0x2]
021538c8  cmp r0,#0x0
021538cc  addeq sp,sp,#0xc
021538d0  moveq r0,#0x0
021538d4  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
021538d8  ldr r0,[r9,#0x0]
021538dc  ldr r1,[sp,#0x8]
021538e0  ldr r0,[r0,r2]
021538e4  mov r2,r5
021538e8  blx 0x02002488
021538ec  ldr r0,[r8,#0x0]
021538f0  mov r1,r11
021538f4  ldr r0,[r0,r6,lsl #0x2]
021538f8  mov r2,r4
021538fc  blx 0x02002488
02153900  add r6,r6,#0x1
02153904  cmp r6,r10
02153908  bcc 0x02153884
0215390c  ldr r0,[sp,#0x0]
02153910  mov r0,r0, lsr #0x2
02153914  add r1,r0,#0x1
02153918  mov r0,#0x41
0215391c  mul r5,r1,r0
02153920  mov r0,r5
02153924  bl 0x021529d4
02153928  ldr r1,[sp,#0x38]
0215392c  str r0,[r1,#0x0]
02153930  mov r0,r1
02153934  ldr r0,[r0,#0x0]
02153938  cmp r0,#0x0
0215393c  addeq sp,sp,#0xc
02153940  moveq r0,#0x0
02153944  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
02153948  ldr r0,[sp,#0x0]
0215394c  mov r0,r0, lsr #0x3
02153950  add r1,r0,#0x1
02153954  mov r0,#0x21
02153958  mul r4,r1,r0
0215395c  mov r0,r4
02153960  bl 0x021529d4
02153964  ldr r1,[sp,#0x3c]
02153968  str r0,[r1,#0x0]
0215396c  mov r0,r1
02153970  ldr r0,[r0,#0x0]
02153974  cmp r0,#0x0
02153978  addeq sp,sp,#0xc
0215397c  moveq r0,#0x0
02153980  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
02153984  ldr r0,[sp,#0x38]
02153988  mov r2,r5
0215398c  ldr r0,[r0,#0x0]
02153990  mov r1,#0x0
02153994  blx 0x02002488
02153998  ldr r0,[sp,#0x3c]
0215399c  mov r2,r4
021539a0  ldr r0,[r0,#0x0]
021539a4  mov r1,#0x0
021539a8  blx 0x02002488
021539ac  ldr r0,[sp,#0x0]
021539b0  mov r0,r0, lsr #0x4
021539b4  add r1,r0,#0x1
021539b8  mov r0,#0x48
021539bc  mul r4,r1,r0
021539c0  mov r0,r4
021539c4  bl 0x021529d4
021539c8  ldr r1,[sp,#0x40]
021539cc  str r0,[r1,#0x0]
021539d0  mov r0,r1
021539d4  ldr r0,[r0,#0x0]
021539d8  cmp r0,#0x0
021539dc  addeq sp,sp,#0xc
021539e0  moveq r0,#0x0
021539e4  ldmiaeq sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
021539e8  mov r2,r4
021539ec  mov r1,#0x0
021539f0  blx 0x02002488
021539f4  ldr r0,[sp,#0x38]
021539f8  ldr r3,[0x2153ac0]
021539fc  ldr r1,[sp,#0x4]
02153a00  ldr r4,[r0,#0x0]
02153a04  umull r2,r0,r1,r3
02153a08  add r1,r4,#0x42
02153a0c  str r1,[r7,#0x2c]
02153a10  ldr r1,[sp,#0x3c]
02153a14  mov r0,r0, lsr #0x2
02153a18  ldr r4,[r1,#0x0]
02153a1c  ldr r1,[sp,#0x4]
02153a20  umull r2,r3,r1,r3
02153a24  add r1,r4,#0x22
02153a28  str r1,[r7,#0x30]
02153a2c  ldr r1,[sp,#0x40]
02153a30  mov r2,#0x0
02153a34  ldr r1,[r1,#0x0]
02153a38  mov r3,r3, lsr #0x2
02153a3c  add r5,r1,#0x4c
02153a40  ldr r1,[0x2153ac4]
02153a44  str r5,[r7,#0x34]
02153a48  umull r4,r0,r1,r0
02153a4c  ldr r0,[sp,#0x4]
02153a50  mov r1,r2
02153a54  sub r0,r0,r4
02153a58  ldr r4,[0x2153ac8]
02153a5c  mov r8,r2
02153a60  add r6,r4,r0, lsl #0x5
02153a64  mov r9,r8
02153a68  add r5,r6,r1, lsl #0x4
02153a6c  ldr r4,[r5,r9,lsl #0x2]
02153a70  add r0,r7,r2, lsl #0x2
02153a74  mov r4,r4, lsl r3
02153a78  add r9,r9,#0x1
02153a7c  str r4,[r0,#0x38]
02153a80  cmp r9,#0x4
02153a84  add r2,r2,#0x1
02153a88  blt 0x02153a6c
02153a8c  add r1,r1,#0x1
02153a90  cmp r1,#0x2
02153a94  blt 0x02153a64
02153a98  mov r2,#0x0
02153a9c  mov r1,#0x9
02153aa0  add r0,r7,r2
02153aa4  add r2,r2,#0x1
02153aa8  strb r1,[r0,#0x58]
02153aac  cmp r2,#0x19
02153ab0  blt 0x02153aa0
02153ab4  mov r0,#0x1
02153ab8  add sp,sp,#0xc
02153abc  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
