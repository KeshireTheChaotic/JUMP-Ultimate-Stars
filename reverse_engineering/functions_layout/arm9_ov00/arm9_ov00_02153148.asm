02153148  stmdb sp!,{r4,r5,lr}
0215314c  sub sp,sp,#0x4
02153150  mov r5,r0
02153154  ldr r2,[r5,#0xf8]
02153158  ldr r1,[r5,#0x8]
0215315c  cmp r2,r1
02153160  bne 0x0215317c
02153164  ldrb r1,[r5,#0x12c]
02153168  cmp r1,#0x0
0215316c  addeq sp,sp,#0x4
02153170  moveq r0,#0x0
02153174  ldmiaeq sp!,{r4,r5,pc}
02153178  bl 0x0215304c
0215317c  ldr r0,[r5,#0xf8]
02153180  ldr r2,[0x21532dc]
02153184  add r0,r0,#0x1
02153188  str r0,[r5,#0xf8]
0215318c  ldr r4,[r5,#0xf0]
02153190  add r0,r4,#0x1
02153194  mov r1,r0, lsr #0x1f
02153198  rsb r0,r1,r0, lsl #0x1f
0215319c  add r0,r1,r0, ror #0x1f
021531a0  str r0,[r5,#0xf0]
021531a4  ldr r0,[r5,#0xf0]
021531a8  add r1,r5,r4, lsl #0x2
021531ac  add r12,r5,r0, lsl #0x2
021531b0  ldr r3,[r12,#0xe0]
021531b4  ldr r0,[r12,#0xd8]
021531b8  ldr r12,[r12,#0xd0]
021531bc  add r0,r3,r0
021531c0  add r0,r12,r0
021531c4  ldr r3,[r0,#-0x2]
021531c8  and r0,r3,r2
021531cc  str r0,[r1,#0xd8]
021531d0  mov r0,r3, lsr #0x10
021531d4  str r0,[r1,#0xe8]
021531d8  ldr r0,[r5,#0x0]
021531dc  ldr r1,[r0,#0x0]
021531e0  ldr r1,[r1,#0x14]
021531e4  blx r1
021531e8  ldr r0,[r5,#0xf0]
021531ec  add r0,r5,r0, lsl #0x2
021531f0  ldr r1,[r0,#0xd0]
021531f4  ldr r0,[r0,#0xe0]
021531f8  add r0,r1,r0
021531fc  str r0,[r5,#0x34]
02153200  ldr r1,[r5,#0xf8]
02153204  ldr r0,[r5,#0x8]
02153208  cmp r1,r0
0215320c  bcs 0x02153238
02153210  ldr r0,[r5,#0x0]
02153214  add r1,r5,r4, lsl #0x2
02153218  ldr r3,[r0,#0x0]
0215321c  ldr r2,[r1,#0xd8]
02153220  ldr r1,[r1,#0xd0]
02153224  ldr r3,[r3,#0x10]
02153228  add r2,r2,#0x2
0215322c  blx r3
02153230  add r1,r5,r4, lsl #0x2
02153234  str r0,[r1,#0xe0]
02153238  ldr r2,[r5,#0xb8]
0215323c  ldr r1,[r5,#0x118]
02153240  mov r0,#0x1
02153244  ldr r1,[r2,r1,lsl #0x2]
02153248  str r1,[r5,#0x38]
0215324c  ldr r2,[r5,#0xbc]
02153250  ldr r1,[r5,#0x118]
02153254  ldr r1,[r2,r1,lsl #0x2]
02153258  str r1,[r5,#0x3c]
0215325c  ldr r2,[r5,#0xb8]
02153260  ldr r1,[r5,#0x11c]
02153264  ldr r1,[r2,r1,lsl #0x2]
02153268  str r1,[r5,#0x40]
0215326c  ldr r2,[r5,#0xbc]
02153270  ldr r1,[r5,#0x11c]
02153274  ldr r1,[r2,r1,lsl #0x2]
02153278  str r1,[r5,#0x44]
0215327c  ldr r2,[r5,#0xb8]
02153280  ldr r1,[r5,#0x120]
02153284  ldr r1,[r2,r1,lsl #0x2]
02153288  str r1,[r5,#0x48]
0215328c  ldr r2,[r5,#0xbc]
02153290  ldr r1,[r5,#0x120]
02153294  ldr r1,[r2,r1,lsl #0x2]
02153298  str r1,[r5,#0x4c]
0215329c  ldr r2,[r5,#0xb8]
021532a0  ldr r1,[r5,#0x124]
021532a4  ldr r1,[r2,r1,lsl #0x2]
021532a8  str r1,[r5,#0x50]
021532ac  ldr r2,[r5,#0xbc]
021532b0  ldr r1,[r5,#0x124]
021532b4  ldr r1,[r2,r1,lsl #0x2]
021532b8  str r1,[r5,#0x54]
021532bc  ldr r1,[r5,#0xf0]
021532c0  ldr r2,[r5,#0x20]
021532c4  add r1,r5,r1, lsl #0x2
021532c8  ldr r1,[r1,#0xe8]
021532cc  mul r1,r2,r1
021532d0  str r1,[r5,#0xfc]
021532d4  add sp,sp,#0x4
021532d8  ldmia sp!,{r4,r5,pc}
