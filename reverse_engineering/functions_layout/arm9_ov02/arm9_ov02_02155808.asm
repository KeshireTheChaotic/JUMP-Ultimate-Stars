02155808  stmdb sp!,{r4,lr}
0215580c  ldr r4,[r2,#0x0]
02155810  ldr r2,[r1,#0x0]
02155814  ldr r1,[r3,#0x0]
02155818  rsb lr,r2,r2, lsl #0x5
0215581c  rsb r12,r4,r4, lsl #0x5
02155820  rsb r4,r1,r1, lsl #0x5
02155824  mov r2,lr, asr #0xb
02155828  mov r3,r12, asr #0xb
0215582c  mov r1,r4, asr #0xb
02155830  add r2,lr,r2, lsr #0x14
02155834  add r3,r12,r3, lsr #0x14
02155838  add r1,r4,r1, lsr #0x14
0215583c  mov r2,r2, lsl #0x4
02155840  mov r3,r3, lsl #0x4
02155844  mov r1,r1, lsl #0x4
02155848  mov r12,r2, lsr #0x10
0215584c  mov r2,r3, lsr #0x10
02155850  mov r3,r1, lsr #0x10
02155854  ldr r4,[r0,#0x4]
02155858  and r1,r12,#0x1f
0215585c  mov r0,r2, lsl #0x1b
02155860  mov r2,r3, lsl #0x1b
02155864  orr r0,r1,r0, lsr #0x16
02155868  orr r0,r0,r2, lsr #0x11
0215586c  orr r1,r0,#0x8000
02155870  add r0,r4,#0x800
02155874  strh r1,[r0,#0xb8]
02155878  mov r0,#0x1
0215587c  strb r0,[r4,#0x8fc]
02155880  ldmia sp!,{r4,pc}
