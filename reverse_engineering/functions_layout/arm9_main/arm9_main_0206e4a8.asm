0206e4a8  stmdb sp!,{r4,lr}
0206e4ac  ldr r4,[r2,#0x0]
0206e4b0  ldr r2,[r1,#0x0]
0206e4b4  ldr r1,[r3,#0x0]
0206e4b8  rsb lr,r2,r2, lsl #0x5
0206e4bc  rsb r12,r4,r4, lsl #0x5
0206e4c0  rsb r4,r1,r1, lsl #0x5
0206e4c4  mov r2,lr, asr #0xb
0206e4c8  mov r3,r12, asr #0xb
0206e4cc  mov r1,r4, asr #0xb
0206e4d0  add r2,lr,r2, lsr #0x14
0206e4d4  add r3,r12,r3, lsr #0x14
0206e4d8  add r1,r4,r1, lsr #0x14
0206e4dc  mov r2,r2, lsl #0x4
0206e4e0  mov r3,r3, lsl #0x4
0206e4e4  mov r1,r1, lsl #0x4
0206e4e8  mov r12,r2, lsr #0x10
0206e4ec  mov r2,r3, lsr #0x10
0206e4f0  mov r3,r1, lsr #0x10
0206e4f4  ldr r4,[r0,#0x4]
0206e4f8  and r1,r12,#0x1f
0206e4fc  mov r0,r2, lsl #0x1b
0206e500  mov r2,r3, lsl #0x1b
0206e504  orr r0,r1,r0, lsr #0x16
0206e508  orr r0,r0,r2, lsr #0x11
0206e50c  orr r1,r0,#0x8000
0206e510  add r0,r4,#0x800
0206e514  strh r1,[r0,#0xb8]
0206e518  mov r0,#0x1
0206e51c  strb r0,[r4,#0x8fc]
0206e520  ldmia sp!,{r4,pc}
