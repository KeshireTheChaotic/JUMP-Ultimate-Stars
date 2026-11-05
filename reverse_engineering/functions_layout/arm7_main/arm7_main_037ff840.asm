037ff840  stmdb sp!,{r4,r5,r6,lr}
037ff844  mov r6,r0
037ff848  mov r5,r1
037ff84c  add r0,r6,#0x28
037ff850  bl 0x037ffb04
037ff854  mov r4,r0
037ff858  mov r12,r0, asr #0x1f
037ff85c  mov r3,#0x0
037ff860  cmp r12,r3
037ff864  cmpeq r0,r3
037ff868  beq 0x037ff8c0
037ff86c  ldrb r1,[r6,#0x28]
037ff870  cmp r1,#0x0
037ff874  beq 0x037ff8ac
037ff878  cmp r1,#0x1
037ff87c  beq 0x037ff894
037ff880  cmp r1,#0x2
037ff884  moveq r12,r12, lsl #0x6
037ff888  orreq r12,r12,r0, lsr #0x1a
037ff88c  moveq r4,r0, lsl #0x6
037ff890  b 0x037ff8b8
037ff894  mov r2,#0x3c
037ff898  umull r4,r1,r0,r2
037ff89c  mla r1,r0,r3,r1
037ff8a0  mla r1,r12,r2,r1
037ff8a4  mov r12,r1
037ff8a8  b 0x037ff8b8
037ff8ac  mov r12,r12, lsl #0x6
037ff8b0  orr r12,r12,r0, lsr #0x1a
037ff8b4  mov r4,r0, lsl #0x6
037ff8b8  mov r4,r4, lsr #0xe
037ff8bc  orr r4,r4,r12, lsl #0x12
037ff8c0  cmp r5,#0x0
037ff8c4  beq 0x037ff8d0
037ff8c8  add r0,r6,#0x28
037ff8cc  bl 0x037ffb54
037ff8d0  mov r0,r4
037ff8d4  ldmia sp!,{r4,r5,r6,lr}
037ff8d8  bx lr
