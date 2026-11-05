0203bf80  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0203bf84  sub sp,sp,#0x20
0203bf88  ldr r4,[r0,#0x34]
0203bf8c  ldr r2,[0x203c0d4]
0203bf90  add r0,r4,#0x800
0203bf94  ldrh r11,[r0,#0xc8]
0203bf98  ldrh r0,[r0,#0xca]
0203bf9c  str r1,[sp,#0x0]
0203bfa0  ldr r5,[r4,#0x8e0]
0203bfa4  str r0,[sp,#0x10]
0203bfa8  mov r0,r11, lsr #0x5
0203bfac  str r0,[sp,#0x8]
0203bfb0  ldr r0,[r2,#0x0]
0203bfb4  mov r6,#0x0
0203bfb8  str r0,[sp,#0x4]
0203bfbc  b 0x0203c0b8
0203bfc0  ldr r0,[sp,#0x0]
0203bfc4  mov r1,r6
0203bfc8  blx 0x0203be48
0203bfcc  mov r7,r0
0203bfd0  sub r0,r11,#0x1
0203bfd4  str r0,[sp,#0x14]
0203bfd8  ldr r0,[sp,#0x10]
0203bfdc  mov r1,r5, lsl #0x10
0203bfe0  sub r0,r0,#0x1
0203bfe4  str r0,[sp,#0x18]
0203bfe8  mov r0,r1, lsr #0x10
0203bfec  ldrsh r8,[r7,#0x2]
0203bff0  str r0,[sp,#0x1c]
0203bff4  b 0x0203c0a8
0203bff8  ldr r0,[sp,#0x18]
0203bffc  ldrsh r10,[r7,#0x0]
0203c000  and r0,r8,r0
0203c004  mov r1,r0, lsr #0x5
0203c008  ldr r0,[sp,#0x8]
0203c00c  cmp r5,#0x0
0203c010  mul r1,r0,r1
0203c014  ldr r0,[sp,#0x14]
0203c018  and r0,r10,r0
0203c01c  add r9,r1,r0, lsr #0x5
0203c020  bne 0x0203c068
0203c024  ldrsh r0,[r7,#0x4]
0203c028  ldr r1,[r4,#0x948]
0203c02c  sub r0,r0,r10
0203c030  mov r0,r0, lsl #0x1
0203c034  str r0,[sp,#0xc]
0203c038  blx r1
0203c03c  mov r1,r8, lsl #0x1b
0203c040  mov r2,r10, lsl #0x1b
0203c044  mov r1,r1, lsr #0x15
0203c048  add r1,r1,r2, lsr #0x1a
0203c04c  add r1,r1,r9, lsl #0xb
0203c050  add r1,r1,r0
0203c054  ldr r3,[sp,#0xc]
0203c058  ldr r0,[sp,#0x4]
0203c05c  mov r2,#0x0
0203c060  bl 0x0205157c
0203c064  b 0x0203c0a4
0203c068  ldr r0,[r4,#0x948]
0203c06c  blx r0
0203c070  mov r1,r8, lsl #0x1b
0203c074  mov r2,r10, lsl #0x1b
0203c078  mov r1,r1, lsr #0x15
0203c07c  add r1,r1,r2, lsr #0x1a
0203c080  add r1,r1,r9, lsl #0xb
0203c084  add r1,r1,r0
0203c088  ldrsh r9,[r7,#0x4]
0203c08c  ldrsh r3,[r7,#0x0]
0203c090  ldr r0,[sp,#0x4]
0203c094  ldr r2,[sp,#0x1c]
0203c098  sub r3,r9,r3
0203c09c  mov r3,r3, lsl #0x1
0203c0a0  bl 0x0205157c
0203c0a4  add r8,r8,#0x1
0203c0a8  ldrsh r0,[r7,#0x6]
0203c0ac  cmp r8,r0
0203c0b0  bcc 0x0203bff8
0203c0b4  add r6,r6,#0x1
0203c0b8  ldr r0,[sp,#0x0]
0203c0bc  ldr r0,[r0,#0x8]
0203c0c0  ldrh r0,[r0,#0x14]
0203c0c4  cmp r6,r0
0203c0c8  bcc 0x0203bfc0
0203c0cc  add sp,sp,#0x20
0203c0d0  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
