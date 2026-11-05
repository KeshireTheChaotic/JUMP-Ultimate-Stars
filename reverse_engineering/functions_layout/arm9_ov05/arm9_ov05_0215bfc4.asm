0215bfc4  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0215bfc8  ldr r0,[r0,#0x4]
0215bfcc  mov r5,#0x0
0215bfd0  ldr r4,[r0,#0x10]
0215bfd4  b 0x0215c0a8
0215bfd8  ldr r2,[r4,#0x1e8]
0215bfdc  add r0,r2,r5, lsl #0x2
0215bfe0  ldr r0,[r0,#0x4]
0215bfe4  cmp r0,#0x0
0215bfe8  beq 0x0215c0a4
0215bfec  ldr r1,[0x215c0c8]
0215bff0  mov r0,#0xc
0215bff4  ldr r2,[r2,#0x0]
0215bff8  mla r1,r5,r0,r1
0215bffc  ldrb r0,[r2,#0x41]
0215c000  mov r3,#0x1
0215c004  mov r2,r0, lsr #0x5
0215c008  ldr r1,[r1,r2,lsl #0x2]
0215c00c  and r2,r0,#0x1f
0215c010  tst r1,r3, lsl r2
0215c014  moveq r3,#0x0
0215c018  cmp r3,#0x0
0215c01c  bne 0x0215c090
0215c020  mov r1,r5
0215c024  blx 0x020718b0
0215c028  strb r5,[r4,#0x4d2]
0215c02c  mov r0,#0x18
0215c030  strb r0,[r4,#0x4d3]
0215c034  ldr r1,[r4,#0x1e8]
0215c038  mov r0,r4
0215c03c  add r1,r1,r5, lsl #0x2
0215c040  ldr r1,[r1,#0x4]
0215c044  str r1,[r4,#0x28]
0215c048  ldr r2,[r4,#0x1e8]
0215c04c  add r1,r2,r5, lsl #0x2
0215c050  ldr r2,[r2,#0x0]
0215c054  ldr r1,[r1,#0x4]
0215c058  ldr r6,[r2,#0x34]
0215c05c  ldr r7,[r1,#0x34]
0215c060  bl 0x0215ceec
0215c064  mov r1,#0x1
0215c068  mov r0,r4
0215c06c  str r1,[sp,#0x0]
0215c070  mov r1,r6
0215c074  mov r2,r7
0215c078  mov r3,#0x0
0215c07c  bl 0x0215ccf0
0215c080  ldr r0,[r4,#0x30]
0215c084  ldr r1,[0x215c0cc]
0215c088  ldr r0,[r0,#0x4]
0215c08c  bl 0x02028384
0215c090  ldr r0,[r4,#0x1e8]
0215c094  mov r1,#0x0
0215c098  add r0,r0,r5, lsl #0x2
0215c09c  str r1,[r0,#0x4]
0215c0a0  ldmia sp!,{r3,r4,r5,r6,r7,pc}
0215c0a4  add r5,r5,#0x1
0215c0a8  cmp r5,#0x3
0215c0ac  blt 0x0215bfd8
0215c0b0  ldrb r0,[r4,#0x4ef]
0215c0b4  cmp r0,#0x0
0215c0b8  ldmiane sp!,{r3,r4,r5,r6,r7,pc}
0215c0bc  mov r0,r4
0215c0c0  bl 0x0215bdd4
0215c0c4  ldmia sp!,{r3,r4,r5,r6,r7,pc}
