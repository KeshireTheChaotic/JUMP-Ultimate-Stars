02040e94  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02040e98  sub sp,sp,#0x18
02040e9c  mov r10,r0
02040ea0  ldr r4,[r10,#0x34]
02040ea4  str r1,[sp,#0x0]
02040ea8  add r0,r4,#0x800
02040eac  ldrh r5,[r0,#0xc8]
02040eb0  ldrh r0,[r0,#0xca]
02040eb4  mov r6,#0x0
02040eb8  str r0,[sp,#0xc]
02040ebc  ldr r0,[r4,#0x8e0]
02040ec0  str r0,[sp,#0x8]
02040ec4  mov r0,r5, lsr #0x5
02040ec8  str r0,[sp,#0x4]
02040ecc  b 0x02040fc8
02040ed0  ldr r0,[sp,#0x0]
02040ed4  mov r1,r6
02040ed8  blx 0x0203be48
02040edc  mov r11,r0
02040ee0  ldrsh r9,[r11,#0x0]
02040ee4  ldrsh r1,[r10,#0x64]
02040ee8  ldrh r2,[r10,#0x60]
02040eec  ldrsh r8,[r11,#0x2]
02040ef0  ldrsh r0,[r10,#0x66]
02040ef4  sub r1,r9,r1
02040ef8  add r2,r2,r1
02040efc  ldrh r1,[r10,#0x4e]
02040f00  sub r0,r8,r0
02040f04  mla r0,r1,r0,r2
02040f08  mov r0,r0, lsl #0x10
02040f0c  mov r7,r0, lsr #0x10
02040f10  sub r0,r5,#0x1
02040f14  str r0,[sp,#0x10]
02040f18  ldr r0,[sp,#0xc]
02040f1c  sub r0,r0,#0x1
02040f20  str r0,[sp,#0x14]
02040f24  b 0x02040fb8
02040f28  ldr r0,[r4,#0x948]
02040f2c  blx r0
02040f30  mov r3,r8, lsl #0x1b
02040f34  ldr r1,[sp,#0x10]
02040f38  mov r2,r9, lsl #0x1b
02040f3c  mov r3,r3, lsr #0x15
02040f40  add r2,r3,r2, lsr #0x1a
02040f44  ldr r3,[sp,#0x14]
02040f48  and r1,r9,r1
02040f4c  and r3,r8,r3
02040f50  mov r9,r3, lsr #0x5
02040f54  ldr r3,[sp,#0x4]
02040f58  mul r9,r3,r9
02040f5c  add r1,r9,r1, lsr #0x5
02040f60  add r1,r2,r1, lsl #0xb
02040f64  add r0,r1,r0
02040f68  mov r2,r7
02040f6c  mov r1,#0x0
02040f70  b 0x02040f90
02040f74  ldr r3,[sp,#0x8]
02040f78  add r1,r1,#0x1
02040f7c  add r3,r3,r2
02040f80  add r2,r2,#0x1
02040f84  mov r2,r2, lsl #0x10
02040f88  strh r3,[r0],#0x2
02040f8c  mov r2,r2, lsr #0x10
02040f90  ldrsh r9,[r11,#0x0]
02040f94  ldrsh r3,[r11,#0x4]
02040f98  sub r3,r3,r9
02040f9c  cmp r1,r3
02040fa0  bcc 0x02040f74
02040fa4  ldrh r0,[r10,#0x4e]
02040fa8  add r8,r8,#0x1
02040fac  add r0,r7,r0, asr #0x1
02040fb0  mov r0,r0, lsl #0x10
02040fb4  mov r7,r0, lsr #0x10
02040fb8  ldrsh r0,[r11,#0x6]
02040fbc  cmp r8,r0
02040fc0  bcc 0x02040f28
02040fc4  add r6,r6,#0x1
02040fc8  ldr r0,[sp,#0x0]
02040fcc  ldr r0,[r0,#0x8]
02040fd0  ldrh r0,[r0,#0x14]
02040fd4  cmp r6,r0
02040fd8  bcc 0x02040ed0
02040fdc  add sp,sp,#0x18
02040fe0  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
