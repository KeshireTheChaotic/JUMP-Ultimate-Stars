02016220  stmdb sp!,{r3,r4,r5,r6,r7,r8,lr}
02016224  sub sp,sp,#0x4
02016228  mov r6,r0
0201622c  mov r0,r2
02016230  ldr r2,[r0,#0x0]
02016234  mov r4,r1
02016238  ldr r2,[r2,#0x68]
0201623c  mov r1,r6
02016240  mov r5,r3
02016244  blx r2
02016248  mov r2,r0, lsr #0x1
0201624c  mov r0,r4
02016250  ldr r1,[r0,#0x0]
02016254  add r4,r2,#0x1
02016258  ldr r1,[r1,#0xa0]
0201625c  blx r1
02016260  ldr r0,[r0,#0x0]
02016264  add r7,sp,#0x0
02016268  str r0,[sp,#0x0]
0201626c  b 0x0201627c
02016270  ldr r0,[r5,#0x0]
02016274  sub r0,r0,r4, lsl #0x1
02016278  str r0,[r5,#0x0]
0201627c  ldr r1,[r5,#0x0]
02016280  mov r0,r7
02016284  ldrh r1,[r1,#0x0]
02016288  bl 0x02016314
0201628c  cmp r0,#0x0
02016290  bne 0x02016270
02016294  mov r8,r4, lsl #0x1
02016298  add r7,sp,#0x0
0201629c  b 0x020162ac
020162a0  ldr r0,[r5,#0x0]
020162a4  add r0,r0,r4, lsl #0x1
020162a8  str r0,[r5,#0x0]
020162ac  ldr r0,[r5,#0x0]
020162b0  mov r1,r7
020162b4  ldrh r0,[r8,r0]
020162b8  bl 0x02016328
020162bc  cmp r0,#0x0
020162c0  bne 0x020162a0
020162c4  ldr r2,[r5,#0x0]
020162c8  ldrsh r4,[r2,#0x2]
020162cc  cmp r4,#0x0
020162d0  ldrsheq r0,[r2,#0x4]
020162d4  cmpeq r0,#0x0
020162d8  beq 0x0201630c
020162dc  ldrsh r1,[r2,#0x0]
020162e0  ldr r0,[sp,#0x0]
020162e4  cmp r0,r1, lsl #0xc
020162e8  bne 0x0201630c
020162ec  mov r0,r6
020162f0  ldrh r3,[r2,#0x4]
020162f4  ldr r2,[r0,#0x0]
020162f8  mov r1,r4, lsl #0x10
020162fc  mov r3,r3, lsl #0x10
02016300  ldr r2,[r2,#0x124]
02016304  orr r1,r3,r1, lsr #0x10
02016308  blx r2
0201630c  add sp,sp,#0x4
02016310  ldmia sp!,{r3,r4,r5,r6,r7,r8,pc}
