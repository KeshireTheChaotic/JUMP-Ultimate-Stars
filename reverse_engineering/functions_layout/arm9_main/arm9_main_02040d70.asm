02040d70  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02040d74  sub sp,sp,#0x14
02040d78  mov r10,r0
02040d7c  ldr r4,[r10,#0x34]
02040d80  str r1,[sp,#0x0]
02040d84  add r1,r4,#0x800
02040d88  ldrh r0,[r1,#0xca]
02040d8c  ldrh r5,[r1,#0xc8]
02040d90  mov r6,#0x0
02040d94  str r0,[sp,#0x8]
02040d98  ldr r0,[r4,#0x8e0]
02040d9c  str r0,[sp,#0x4]
02040da0  b 0x02040e78
02040da4  ldr r0,[sp,#0x0]
02040da8  mov r1,r6
02040dac  blx 0x0203be48
02040db0  mov r11,r0
02040db4  ldrsh r9,[r11,#0x0]
02040db8  ldrsh r1,[r10,#0x64]
02040dbc  ldrsh r7,[r11,#0x2]
02040dc0  ldrsh r0,[r10,#0x66]
02040dc4  sub r2,r9,r1
02040dc8  ldrh r3,[r10,#0x60]
02040dcc  ldrh r1,[r10,#0x4e]
02040dd0  sub r0,r7,r0
02040dd4  add r2,r3,r2
02040dd8  mla r0,r1,r0,r2
02040ddc  mov r0,r0, lsl #0x10
02040de0  mov r8,r0, lsr #0x10
02040de4  sub r0,r5,#0x1
02040de8  str r0,[sp,#0xc]
02040dec  ldr r0,[sp,#0x8]
02040df0  sub r0,r0,#0x1
02040df4  str r0,[sp,#0x10]
02040df8  b 0x02040e68
02040dfc  ldr r0,[r4,#0x948]
02040e00  blx r0
02040e04  ldr r1,[sp,#0xc]
02040e08  and r2,r9,r1
02040e0c  ldr r1,[sp,#0x10]
02040e10  and r1,r7,r1
02040e14  mla r1,r5,r1,r2
02040e18  add r0,r0,r1, lsl #0x1
02040e1c  mov r1,#0x0
02040e20  b 0x02040e40
02040e24  ldr r2,[sp,#0x4]
02040e28  add r1,r1,#0x1
02040e2c  add r2,r2,r8
02040e30  strh r2,[r0],#0x2
02040e34  add r2,r8,#0x1
02040e38  mov r2,r2, lsl #0x10
02040e3c  mov r8,r2, lsr #0x10
02040e40  ldrsh r9,[r11,#0x0]
02040e44  ldrsh r2,[r11,#0x4]
02040e48  sub r2,r2,r9
02040e4c  cmp r1,r2
02040e50  bcc 0x02040e24
02040e54  ldrh r0,[r10,#0x4e]
02040e58  add r7,r7,#0x1
02040e5c  add r0,r8,r0, asr #0x1
02040e60  mov r0,r0, lsl #0x10
02040e64  mov r8,r0, lsr #0x10
02040e68  ldrsh r0,[r11,#0x6]
02040e6c  cmp r7,r0
02040e70  bcc 0x02040dfc
02040e74  add r6,r6,#0x1
02040e78  ldr r0,[sp,#0x0]
02040e7c  ldr r0,[r0,#0x8]
02040e80  ldrh r0,[r0,#0x14]
02040e84  cmp r6,r0
02040e88  bcc 0x02040da4
02040e8c  add sp,sp,#0x14
02040e90  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
