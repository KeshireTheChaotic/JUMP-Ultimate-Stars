0215ee88  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0215ee8c  mov r8,r0
0215ee90  ldr r0,[r8,#0x10]
0215ee94  mov r7,r1
0215ee98  mov r6,r2
0215ee9c  mov r5,r3
0215eea0  cmp r0,#0x0
0215eea4  beq 0x0215eeb0
0215eea8  bl 0x0203b3f4
0215eeac  b 0x0215eeb4
0215eeb0  bl 0x0203b3e4
0215eeb4  ldr r4,[r0,#0x88]
0215eeb8  add r2,r8,r7, lsl #0x3
0215eebc  ldr r1,[sp,#0x18]
0215eec0  ldr r0,[sp,#0x1c]
0215eec4  strh r5,[r2,#0x2]
0215eec8  mov r3,r7, lsl #0x3
0215eecc  strh r6,[r8,r3]
0215eed0  add r1,r6,r1
0215eed4  strh r1,[r2,#0x4]
0215eed8  add r0,r5,r0
0215eedc  strh r0,[r2,#0x6]
0215eee0  ldrsh r0,[r2,#0x2]
0215eee4  add r1,r8,r7, lsl #0x3
0215eee8  cmp r0,#0x0
0215eeec  movlt r0,#0x0
0215eef0  strhlt r0,[r2,#0x2]
0215eef4  ldrsh r0,[r1,#0x2]
0215eef8  add r2,r8,r7, lsl #0x3
0215eefc  cmp r0,#0xc0
0215ef00  movgt r0,#0xc0
0215ef04  strhgt r0,[r1,#0x2]
0215ef08  add r1,r8,r7, lsl #0x3
0215ef0c  ldrsh r0,[r1,#0x6]
0215ef10  cmp r0,#0x0
0215ef14  movlt r0,#0x0
0215ef18  strhlt r0,[r1,#0x6]
0215ef1c  add r1,r8,r7, lsl #0x3
0215ef20  ldrsh r0,[r1,#0x6]
0215ef24  cmp r0,#0xc0
0215ef28  movgt r0,#0xc0
0215ef2c  strhgt r0,[r1,#0x6]
0215ef30  mov r1,r7, lsl #0x3
0215ef34  ldrsh r0,[r8,r1]
0215ef38  cmp r0,#0x0
0215ef3c  movlt r0,#0x0
0215ef40  strhlt r0,[r8,r1]
0215ef44  mov r1,r7, lsl #0x3
0215ef48  ldrsh r0,[r8,r1]
0215ef4c  cmp r0,#0xff
0215ef50  movgt r0,#0xff
0215ef54  strhgt r0,[r8,r1]
0215ef58  add r1,r8,r7, lsl #0x3
0215ef5c  ldrsh r0,[r1,#0x4]
0215ef60  cmp r0,#0x0
0215ef64  movlt r0,#0x0
0215ef68  strhlt r0,[r1,#0x4]
0215ef6c  add r1,r8,r7, lsl #0x3
0215ef70  ldrsh r0,[r1,#0x4]
0215ef74  cmp r0,#0xff
0215ef78  movgt r0,#0xff
0215ef7c  strhgt r0,[r1,#0x4]
0215ef80  mov r0,r4
0215ef84  mov r1,r7
0215ef88  bl 0x0215ee0c
0215ef8c  mov r0,r4
0215ef90  mov r1,r7
0215ef94  mov r2,#0x1
0215ef98  bl 0x0215ede4
0215ef9c  ldmia sp!,{r4,r5,r6,r7,r8,pc}
