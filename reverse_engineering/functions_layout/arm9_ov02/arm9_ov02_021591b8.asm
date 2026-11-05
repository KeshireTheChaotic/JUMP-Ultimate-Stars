021591b8  stmdb sp!,{r4,r5,r6,r7,r8,lr}
021591bc  ldr r3,[0x21592e4]
021591c0  mov r6,r1
021591c4  smulbb r5,r2,r3
021591c8  mov r7,r0
021591cc  add r0,r6,#0x20
021591d0  add r4,r0,r5
021591d4  ldrb r0,[r7,#0x4]
021591d8  ldrsh r2,[r7,#0x6]
021591dc  add r1,r4,#0x8c
021591e0  add r0,r4,r0, lsl #0x1
021591e4  add r0,r0,#0x400
021591e8  strh r2,[r0,#0x84]
021591ec  ldrb r0,[r7,#0x4]
021591f0  ldrh r2,[r7,#0x8]
021591f4  add r3,r4,#0x94
021591f8  add r0,r4,r0, lsl #0x1
021591fc  add r0,r0,#0x400
02159200  strh r2,[r0,#0x94]
02159204  add r0,r4,#0x84
02159208  ldrb r2,[r7,#0x4]
0215920c  add r8,r1,#0x400
02159210  add r12,r0,#0x400
02159214  add r1,r4,r2, lsl #0x2
02159218  add lr,r3,#0x400
0215921c  ldr r3,[r1,#0x1c0]
02159220  add r0,r8,r2, lsl #0x1
02159224  add r1,lr,r2, lsl #0x1
02159228  add r2,r12,r2, lsl #0x1
0215922c  bl 0x02159db4
02159230  ldrb r0,[r7,#0x5]
02159234  tst r0,#0x1
02159238  ldrb r0,[r7,#0x4]
0215923c  bne 0x021592c0
02159240  mov r2,#0xc
02159244  mla r1,r0,r2,r4
02159248  add r0,r4,r0, lsl #0x1
0215924c  add r0,r0,#0x400
02159250  add r3,r6,r5
02159254  ldrh r5,[r0,#0x8c]
02159258  add r1,r1,#0x100
0215925c  mov r0,#0x0
02159260  strh r5,[r1,#0x92]
02159264  ldrb r1,[r7,#0x4]
02159268  mla r5,r1,r2,r4
0215926c  add r1,r4,r1, lsl #0x1
02159270  add r1,r1,#0x400
02159274  ldrh r6,[r1,#0x94]
02159278  add r1,r5,#0x100
0215927c  strh r6,[r1,#0x94]
02159280  ldrb r5,[r7,#0x4]
02159284  add r3,r3,r5, lsl #0x2
02159288  mla r1,r5,r2,r4
0215928c  ldr r3,[r3,#0x1e0]
02159290  str r3,[r1,#0x18c]
02159294  ldrb r1,[r7,#0x4]
02159298  mla r3,r1,r2,r4
0215929c  add r1,r4,r1, lsl #0x1
021592a0  add r1,r1,#0x400
021592a4  ldrsh r5,[r1,#0x84]
021592a8  add r1,r3,#0x100
021592ac  strh r5,[r1,#0x90]
021592b0  ldrb r3,[r7,#0x4]
021592b4  mla r1,r3,r2,r4
021592b8  strb r3,[r1,#0x196]
021592bc  ldmia sp!,{r4,r5,r6,r7,r8,pc}
021592c0  add r0,r4,r0, lsl #0x1
021592c4  add r0,r0,#0x400
021592c8  ldrsh r0,[r0,#0x84]
021592cc  cmp r0,#0x0
021592d0  ldrgt r1,[0x21592e8]
021592d4  movle r0,#0x0
021592d8  movgt r0,#0x1
021592dc  strgt r1,[r4,#0x1bc]
021592e0  ldmia sp!,{r4,r5,r6,r7,r8,pc}
