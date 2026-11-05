02170850  stmdb sp!,{r4,lr}
02170854  mov r4,r0
02170858  ldr r0,[r4,#0x2c]
0217085c  bl 0x0216ed30
02170860  cmp r0,#0x0
02170864  ldrhne r0,[r4,#0x26]
02170868  orrne r0,r0,#0x80
0217086c  strhne r0,[r4,#0x26]
02170870  ldrh r0,[r4,#0x26]
02170874  tst r0,#0x1
02170878  movne r0,#0x0
0217087c  ldmiane sp!,{r4,pc}
02170880  ldr r0,[r4,#0x14]
02170884  mov r1,#0x0
02170888  cmp r0,#0x0
0217088c  beq 0x02170898
02170890  bl 0x02170828
02170894  mov r1,r0
02170898  mov lr,#0x0
0217089c  tst r1,#0x8
021708a0  subne lr,lr,#0x100
021708a4  tst r1,#0x4
021708a8  ldrh r12,[r4,#0x20]
021708ac  ldrsh r2,[r4,#0x30]
021708b0  ldrsh r1,[r4,#0x32]
021708b4  addne lr,lr,#0x100
021708b8  mul r3,r12,r2
021708bc  mul r2,r12,r1
021708c0  add r1,lr,r3, asr #0x8
021708c4  mov r1,r1, lsl #0x10
021708c8  mov r2,r2, lsl #0x8
021708cc  ldr r0,[r4,#0x2c]
021708d0  mov r1,r1, asr #0x10
021708d4  mov r2,r2, asr #0x10
021708d8  bl 0x0217083c
021708dc  mov r0,#0x1
021708e0  ldmia sp!,{r4,pc}
