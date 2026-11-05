0200bfb4  eors r2,r0,r1
0200bfb8  eormi r1,r1,#0x80000000
0200bfbc  bmi 0x0200cc70
0200bfc0  subs r12,r0,r1
0200bfc4  subcc r0,r0,r12
0200bfc8  addcc r1,r1,r12
0200bfcc  mov r2,#0x80000000
0200bfd0  mov r3,r0, lsr #0x17
0200bfd4  orr r0,r2,r0, lsl #0x8
0200bfd8  ands r12,r3,#0xff
0200bfdc  cmpne r12,#0xff
0200bfe0  beq 0x0200c054
0200bfe4  mov r12,r1, lsr #0x17
0200bfe8  orr r1,r2,r1, lsl #0x8
0200bfec  ands r2,r12,#0xff
0200bff0  beq 0x0200c094
0200bff4  subs r12,r3,r12
0200bff8  beq 0x0200c00c
0200bffc  rsb r2,r12,#0x20
0200c000  movs r2,r1, lsl r2
0200c004  mov r1,r1, lsr r12
0200c008  orrne r1,r1,#0x1
0200c00c  adds r0,r0,r1
0200c010  bcc 0x0200c02c
0200c014  and r1,r0,#0x1
0200c018  orr r0,r1,r0, rrx
0200c01c  add r3,r3,#0x1
0200c020  and r2,r3,#0xff
0200c024  cmp r2,#0xff
0200c028  beq 0x0200c1d0
0200c02c  ands r1,r0,#0xff
0200c030  add r0,r0,r0
0200c034  mov r0,r0, lsr #0x9
0200c038  orr r0,r0,r3, lsl #0x17
0200c03c  tst r1,#0x80
0200c040  bxeq lr
0200c044  ands r1,r1,#0x7f
0200c048  andeqs r1,r0,#0x1
0200c04c  addne r0,r0,#0x1
0200c050  bx lr
0200c054  cmp r3,#0x100
0200c058  movge r2,#0x80000000
0200c05c  movlt r2,#0x0
0200c060  ands r3,r3,#0xff
0200c064  beq 0x0200c188
0200c068  movs r0,r0, lsl #0x1
0200c06c  bne 0x0200c1fc
0200c070  mov r12,r1, lsr #0x17
0200c074  mov r1,r1, lsl #0x9
0200c078  ands r12,r12,#0xff
0200c07c  beq 0x0200c1f0
0200c080  cmp r12,#0xff
0200c084  blt 0x0200c1f0
0200c088  cmp r1,#0x0
0200c08c  beq 0x0200c1f0
0200c090  b 0x0200c1fc
0200c094  cmp r3,#0x100
0200c098  movge r2,#0x80000000
0200c09c  movlt r2,#0x0
0200c0a0  and r3,r3,#0xff
0200c0a4  ands r12,r12,#0xff
0200c0a8  beq 0x0200c19c
0200c0ac  movs r1,r1, lsl #0x1
0200c0b0  bne 0x0200c1fc
0200c0b4  b 0x0200c1f0
0200c188  mov r3,r1, lsr #0x17
0200c18c  ands r3,r3,#0xff
0200c190  moveq r1,#0x0
0200c194  mov r0,r1
0200c198  bx lr
0200c19c  add r0,r0,r0
0200c1a0  mov r0,r0, lsr #0x9
0200c1a4  orr r0,r0,r3, lsl #0x17
0200c1a8  orr r0,r0,r2
0200c1ac  bx lr
0200c1d0  cmp r3,#0x100
0200c1d4  movge r2,#0x80000000
0200c1d8  movlt r2,#0x0
0200c1dc  mov r0,#0xff000000
0200c1e0  orr r0,r2,r0, lsr #0x1
0200c1e4  bx lr
0200c1f0  mov r0,#0xff000000
0200c1f4  orr r0,r2,r0, lsr #0x1
0200c1f8  bx lr
0200c1fc  mvn r0,#0x80000000
0200c200  bx lr
