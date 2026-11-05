02048688  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0204868c  sub sp,sp,#0x28
02048690  ldr r4,[r0,#0x34]
02048694  str r0,[sp,#0x0]
02048698  add r0,r4,#0x800
0204869c  ldrh r6,[r0,#0xc8]
020486a0  ldr r2,[0x2048864]
020486a4  ldrh r11,[r0,#0xca]
020486a8  ldr r0,[r2,#0x0]
020486ac  str r1,[sp,#0x4]
020486b0  mov r5,r6, lsr #0x5
020486b4  ldr r7,[r4,#0x8e0]
020486b8  str r0,[sp,#0x10]
020486bc  mov r8,#0x0
020486c0  b 0x02048848
020486c4  ldr r0,[sp,#0x4]
020486c8  mov r1,r8
020486cc  blx 0x0203be48
020486d0  mov r9,r0
020486d4  cmp r7,#0x0
020486d8  ldrsh r10,[r9,#0x2]
020486dc  sub r0,r6,#0x1
020486e0  bne 0x02048784
020486e4  str r0,[sp,#0x18]
020486e8  sub r0,r11,#0x1
020486ec  str r0,[sp,#0x1c]
020486f0  b 0x02048774
020486f4  ldrsh r0,[r9,#0x0]
020486f8  ldr r1,[r4,#0x948]
020486fc  str r0,[sp,#0xc]
02048700  blx r1
02048704  ldr r1,[sp,#0xc]
02048708  ldr r12,[sp,#0x0]
0204870c  mov r2,r1, lsl #0x1b
02048710  mov r3,r1
02048714  ldr r1,[sp,#0x18]
02048718  ldr r12,[r12,#0x6c]
0204871c  and r1,r3,r1
02048720  mov r3,r10, lsl #0x1b
02048724  mov r3,r3, lsr #0x15
02048728  add r2,r3,r2, lsr #0x1a
0204872c  ldr r3,[sp,#0x1c]
02048730  ldrsh lr,[r9,#0x4]
02048734  and r3,r10,r3
02048738  mov r3,r3, lsr #0x5
0204873c  mul r3,r5,r3
02048740  add r1,r3,r1, lsr #0x5
02048744  ldrsh r3,[r9,#0x0]
02048748  add r1,r2,r1, lsl #0xb
0204874c  add r2,r1,r0
02048750  mla r12,r10,r12,r3
02048754  ldr r1,[sp,#0x0]
02048758  sub r3,lr,r3
0204875c  ldr r1,[r1,#0xac]
02048760  ldr r0,[sp,#0x10]
02048764  add r1,r1,r12, lsl #0x1
02048768  mov r3,r3, lsl #0x1
0204876c  bl 0x02051504
02048770  add r10,r10,#0x1
02048774  ldrsh r0,[r9,#0x6]
02048778  cmp r10,r0
0204877c  bcc 0x020486f4
02048780  b 0x02048844
02048784  str r0,[sp,#0x20]
02048788  sub r0,r11,#0x1
0204878c  str r0,[sp,#0x24]
02048790  b 0x02048838
02048794  ldrsh r0,[r9,#0x0]
02048798  ldr r1,[sp,#0x0]
0204879c  ldr r2,[r4,#0x948]
020487a0  str r0,[sp,#0x8]
020487a4  ldr r3,[r1,#0x6c]
020487a8  ldr r1,[sp,#0x8]
020487ac  ldr r0,[sp,#0x0]
020487b0  mla r1,r10,r3,r1
020487b4  ldr r0,[r0,#0xac]
020487b8  add r0,r0,r1, lsl #0x1
020487bc  str r0,[sp,#0x14]
020487c0  blx r2
020487c4  ldr r1,[sp,#0x8]
020487c8  mov r2,r1, lsl #0x1b
020487cc  mov r3,r1
020487d0  ldr r1,[sp,#0x20]
020487d4  and r1,r3,r1
020487d8  mov r3,r10, lsl #0x1b
020487dc  mov r3,r3, lsr #0x15
020487e0  add r2,r3,r2, lsr #0x1a
020487e4  ldr r3,[sp,#0x24]
020487e8  and r3,r10,r3
020487ec  mov r3,r3, lsr #0x5
020487f0  mul r3,r5,r3
020487f4  add r1,r3,r1, lsr #0x5
020487f8  add r1,r2,r1, lsl #0xb
020487fc  add r1,r1,r0
02048800  mov r0,#0x0
02048804  b 0x02048820
02048808  ldrh r2,[r1],#0x2
0204880c  add r0,r0,#0x1
02048810  add r3,r7,r2
02048814  ldr r2,[sp,#0x14]
02048818  strh r3,[r2],#0x2
0204881c  str r2,[sp,#0x14]
02048820  ldrsh r3,[r9,#0x4]
02048824  ldrsh r2,[r9,#0x0]
02048828  sub r2,r3,r2
0204882c  cmp r0,r2
02048830  bcc 0x02048808
02048834  add r10,r10,#0x1
02048838  ldrsh r0,[r9,#0x6]
0204883c  cmp r10,r0
02048840  bcc 0x02048794
02048844  add r8,r8,#0x1
02048848  ldr r0,[sp,#0x4]
0204884c  ldr r0,[r0,#0x8]
02048850  ldrh r0,[r0,#0x14]
02048854  cmp r8,r0
02048858  bcc 0x020486c4
0204885c  add sp,sp,#0x28
02048860  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
