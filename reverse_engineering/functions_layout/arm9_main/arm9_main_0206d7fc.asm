0206d7fc  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0206d800  sub sp,sp,#0x8
0206d804  mov r10,r0
0206d808  ldrsb r0,[r10,#0x5e]
0206d80c  mov r11,r1
0206d810  cmp r0,#0x0
0206d814  beq 0x0206d91c
0206d818  mov r0,#0x0
0206d81c  strb r0,[r10,#0x5e]
0206d820  add r6,r10,#0x40
0206d824  ldr r7,[r10,#0x48]
0206d828  mov r9,#0x1
0206d82c  b 0x0206d914
0206d830  ldr r4,[r10,#0x0]
0206d834  ldrb r8,[r6,#0x0]
0206d838  ldr r5,[0x206d924]
0206d83c  b 0x0206d8d8
0206d840  ldrh r2,[r4,#0x0]
0206d844  mov r0,r2, asr #0x5
0206d848  and r1,r0,#0x1f
0206d84c  mov r0,r2, asr #0xa
0206d850  and r2,r2,#0x1f
0206d854  orr r1,r1,r1, lsl #0x5
0206d858  and r0,r0,#0x1f
0206d85c  orr r3,r2,r2, lsl #0x5
0206d860  orr r2,r0,r0, lsl #0x5
0206d864  mov r1,r1, lsr #0x5
0206d868  cmp r1,r2, lsr #0x5
0206d86c  mov r0,r3, lsr #0x5
0206d870  mov r2,r2, lsr #0x5
0206d874  movgt r3,r1
0206d878  movle r3,r2
0206d87c  cmp r0,r3
0206d880  movgt r3,r0
0206d884  bgt 0x0206d894
0206d888  cmp r1,r2
0206d88c  movgt r3,r1
0206d890  movle r3,r2
0206d894  cmp r1,r2
0206d898  movlt r12,r1
0206d89c  movge r12,r2
0206d8a0  cmp r0,r12
0206d8a4  movlt r12,r0
0206d8a8  blt 0x0206d8b8
0206d8ac  cmp r1,r2
0206d8b0  movlt r12,r1
0206d8b4  movge r12,r2
0206d8b8  str r12,[sp,#0x0]
0206d8bc  ldrsb lr,[r10,#0x5d]
0206d8c0  ldr r12,[0x206d928]
0206d8c4  ldr r12,[r12,lr,lsl #0x2]
0206d8c8  blx r12
0206d8cc  strh r0,[r5],#0x2
0206d8d0  sub r8,r8,#0x1
0206d8d4  add r4,r4,#0x2
0206d8d8  cmp r8,#0x0
0206d8dc  bne 0x0206d840
0206d8e0  add r0,sp,#0x4
0206d8e4  mov r1,r11
0206d8e8  ldrb r4,[r6],#0x1
0206d8ec  bl 0x0206d42c
0206d8f0  add r0,sp,#0x4
0206d8f4  bl 0x0206d3e8
0206d8f8  ldr r0,[r0,#0x4]
0206d8fc  ldr r1,[0x206d924]
0206d900  mov r3,r4
0206d904  mov r2,r9
0206d908  bl 0x02029c68
0206d90c  sub r7,r7,#0x1
0206d910  add r9,r9,#0x10
0206d914  cmp r7,#0x0
0206d918  bne 0x0206d830
0206d91c  add sp,sp,#0x8
0206d920  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
