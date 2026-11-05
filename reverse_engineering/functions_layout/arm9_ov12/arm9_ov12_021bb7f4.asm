021bb7f4  stmdb sp!,{r4,r5,r6,lr}
021bb7f8  sub sp,sp,#0x10
021bb7fc  mov r5,r0
021bb800  ldr r0,[r5,#0x4]
021bb804  add r1,sp,#0xc
021bb808  ldr r4,[r0,#0x10]
021bb80c  add r2,sp,#0x8
021bb810  ldrsb r0,[r4,#0x9d]
021bb814  add r0,r0,#0x1
021bb818  strb r0,[r4,#0x9d]
021bb81c  ldrsb r0,[r4,#0x9d]
021bb820  ldrsh lr,[r4,#0x54]
021bb824  ldrsh r3,[r4,#0x56]
021bb828  mov r12,r0, lsl #0x8
021bb82c  mov r0,r12, asr #0x2
021bb830  mov r3,r3, lsl #0xc
021bb834  add lr,lr,#0x100
021bb838  add r0,r12,r0, lsr #0x1d
021bb83c  sub r0,lr,r0, asr #0x3
021bb840  mov r0,r0, lsl #0xc
021bb844  str r3,[sp,#0x8]
021bb848  str r0,[sp,#0xc]
021bb84c  ldr r0,[r4,#0x1c]
021bb850  bl 0x021bb970
021bb854  ldrsb r0,[r4,#0x9d]
021bb858  cmp r0,#0x8
021bb85c  bge 0x021bb86c
021bb860  ldrb r0,[r4,#0xa2]
021bb864  cmp r0,#0x0
021bb868  bne 0x021bb944
021bb86c  mov r0,#0x0
021bb870  strb r0,[r4,#0x9d]
021bb874  ldrsh r0,[r4,#0x56]
021bb878  add r1,sp,#0x4
021bb87c  add r2,sp,#0x0
021bb880  mov r0,r0, lsl #0xc
021bb884  str r0,[sp,#0x0]
021bb888  ldrsh r0,[r4,#0x54]
021bb88c  mov r0,r0, lsl #0xc
021bb890  str r0,[sp,#0x4]
021bb894  ldr r0,[r4,#0x1c]
021bb898  bl 0x021bb970
021bb89c  ldrsb r0,[r4,#0x9c]
021bb8a0  cmp r0,#0x6
021bb8a4  addls pc,pc,r0, lsl #0x2
021bb8a8  b 0x021bb8c8
021bb8ac  b 0x021bb8c8
021bb8b0  b 0x021bb92c
021bb8b4  b 0x021bb938
021bb8b8  b 0x021bb8c8
021bb8bc  b 0x021bb8c8
021bb8c0  b 0x021bb8f0
021bb8c4  b 0x021bb8f0
021bb8c8  ldr r1,[r5,#0x4]
021bb8cc  mov r0,r1
021bb8d0  ldr r5,[r1,#0x10]
021bb8d4  ldr r1,[0x21bb968]
021bb8d8  bl 0x02028384
021bb8dc  ldrb r0,[r5,#0xa5]
021bb8e0  cmp r0,#0x0
021bb8e4  beq 0x021bb940
021bb8e8  bl 0x02073840
021bb8ec  b 0x021bb940
021bb8f0  ldr r0,[r5,#0x4]
021bb8f4  ldr r6,[r0,#0x10]
021bb8f8  ldrb r0,[r6,#0xa9]
021bb8fc  cmp r0,#0x0
021bb900  beq 0x021bb90c
021bb904  mov r0,r6
021bb908  bl 0x021bcbb0
021bb90c  ldr r0,[r5,#0x4]
021bb910  ldr r1,[0x21bb96c]
021bb914  bl 0x02028384
021bb918  ldrb r0,[r6,#0xa5]
021bb91c  cmp r0,#0x0
021bb920  beq 0x021bb940
021bb924  bl 0x02073840
021bb928  b 0x021bb940
021bb92c  mov r0,r5
021bb930  bl 0x021bbb18
021bb934  b 0x021bb940
021bb938  mov r0,r5
021bb93c  bl 0x021bbb18
021bb940  blx 0x021b65cc
021bb944  ldrb r0,[r4,#0xa5]
021bb948  cmp r0,#0x0
021bb94c  beq 0x021bb954
021bb950  bl 0x02073840
021bb954  mov r0,r4
021bb958  mov r1,#0x1
021bb95c  bl 0x021bc0bc
021bb960  add sp,sp,#0x10
021bb964  ldmia sp!,{r4,r5,r6,pc}
