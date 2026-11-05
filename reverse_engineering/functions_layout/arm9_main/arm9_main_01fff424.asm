01fff424  stmdb sp!,{r3,r4,lr}
01fff428  ldmia r2,{r5,r6,r7,r8,r9,r10,r11,r12}
01fff42c  add r3,r1,#0x70
01fff430  ldrb r4,[r3,#0x0]
01fff434  add r2,r1,#0x8c0
01fff438  add r4,r2,r4, lsl #0x4
01fff43c  bl 0x01fff594
01fff440  add r3,r1,#0x71
01fff444  ldrb r4,[r3,#0x0]
01fff448  add r2,r1,#0xcc0
01fff44c  add r4,r2,r4, lsl #0x4
01fff450  bl 0x01fff594
01fff454  add r3,r1,#0x72
01fff458  ldrb r4,[r3,#0x0]
01fff45c  add r2,r1,#0x10c0
01fff460  add r4,r2,r4, lsl #0x4
01fff464  bl 0x01fff594
01fff468  add r2,r1,#0x8
01fff46c  stmia r2,{r5,r6,r7,r8,r9,r10,r11,r12}
01fff470  mul r3,r5,r6
01fff474  add r5,r5,r3, asr #0xf
01fff478  mul r3,r6,r7
01fff47c  mul r4,r5,r7
01fff480  add r5,r5,r3, asr #0xf
01fff484  add r6,r6,r4, asr #0xf
01fff488  mul r3,r7,r8
01fff48c  mul r4,r5,r8
01fff490  add r5,r5,r3, asr #0xf
01fff494  mul r3,r6,r8
01fff498  add r7,r7,r4, asr #0xf
01fff49c  add r6,r6,r3, asr #0xf
01fff4a0  mul r3,r8,r9
01fff4a4  mul r4,r5,r9
01fff4a8  add r5,r5,r3, asr #0xf
01fff4ac  add r8,r8,r4, asr #0xf
01fff4b0  mul r3,r7,r9
01fff4b4  mul r4,r6,r9
01fff4b8  add r6,r6,r3, asr #0xf
01fff4bc  add r7,r7,r4, asr #0xf
01fff4c0  mul r3,r9,r10
01fff4c4  mul r4,r5,r10
01fff4c8  add r5,r5,r3, asr #0xf
01fff4cc  add r9,r9,r4, asr #0xf
01fff4d0  mul r3,r8,r10
01fff4d4  mul r4,r6,r10
01fff4d8  add r6,r6,r3, asr #0xf
01fff4dc  mul r3,r7,r10
01fff4e0  add r8,r8,r4, asr #0xf
01fff4e4  add r7,r7,r3, asr #0xf
01fff4e8  mul r3,r10,r11
01fff4ec  mul r4,r5,r11
01fff4f0  add r5,r5,r3, asr #0xf
01fff4f4  add r10,r10,r4, asr #0xf
01fff4f8  mul r3,r9,r11
01fff4fc  mul r4,r6,r11
01fff500  add r6,r6,r3, asr #0xf
01fff504  add r9,r9,r4, asr #0xf
01fff508  mul r3,r8,r11
01fff50c  mul r4,r7,r11
01fff510  add r7,r7,r3, asr #0xf
01fff514  add r8,r8,r4, asr #0xf
01fff518  mul r3,r11,r12
01fff51c  mul r4,r5,r12
01fff520  add r5,r5,r3, asr #0xf
01fff524  add r11,r11,r4, asr #0xf
01fff528  mul r3,r10,r12
01fff52c  mul r4,r6,r12
01fff530  add r6,r6,r3, asr #0xf
01fff534  add r10,r10,r4, asr #0xf
01fff538  mul r3,r9,r12
01fff53c  mul r4,r7,r12
01fff540  add r7,r7,r3, asr #0xf
01fff544  mul r3,r8,r12
01fff548  add r9,r9,r4, asr #0xf
01fff54c  add r8,r8,r3, asr #0xf
01fff550  mov r5,r5, asr #0x1
01fff554  rsb r5,r5,#0x0
01fff558  mov r6,r6, asr #0x1
01fff55c  rsb r6,r6,#0x0
01fff560  mov r7,r7, asr #0x1
01fff564  rsb r7,r7,#0x0
01fff568  mov r8,r8, asr #0x1
01fff56c  rsb r8,r8,#0x0
01fff570  mov r9,r9, asr #0x1
01fff574  rsb r9,r9,#0x0
01fff578  mov r10,r10, asr #0x1
01fff57c  rsb r10,r10,#0x0
01fff580  mov r11,r11, asr #0x1
01fff584  rsb r11,r11,#0x0
01fff588  mov r12,r12, asr #0x1
01fff58c  rsb r12,r12,#0x0
01fff590  ldmia sp!,{r3,r4,pc}
