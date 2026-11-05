0205f98c  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0205f990  sub sp,sp,#0x3c
0205f994  ldrb r4,[r0,#0xc]
0205f998  mov r10,r2
0205f99c  str r1,[sp,#0xc]
0205f9a0  str r4,[sp,#0x2c]
0205f9a4  ldr r1,[sp,#0x2c]
0205f9a8  ldr r4,[sp,#0x60]
0205f9ac  cmp r1,#0x4
0205f9b0  add r1,r10,r4
0205f9b4  str r1,[sp,#0x18]
0205f9b8  ldr r2,[sp,#0x64]
0205f9bc  mov r1,r3
0205f9c0  add r1,r1,r2
0205f9c4  str r1,[sp,#0x1c]
0205f9c8  ldrne r1,[sp,#0xc]
0205f9cc  str r3,[sp,#0x10]
0205f9d0  orrne r1,r1,r1, lsl #0x8
0205f9d4  orrne r1,r1,r1, lsl #0x10
0205f9d8  strne r1,[sp,#0xc]
0205f9dc  bne 0x0205f9f4
0205f9e0  ldr r1,[sp,#0xc]
0205f9e4  orr r1,r1,r1, lsl #0x4
0205f9e8  orr r1,r1,r1, lsl #0x8
0205f9ec  orr r1,r1,r1, lsl #0x10
0205f9f0  str r1,[sp,#0xc]
0205f9f4  ldr r1,[sp,#0x10]
0205f9f8  bic r1,r1,#0x7
0205f9fc  mov r2,r1, asr #0x2
0205fa00  str r1,[sp,#0x14]
0205fa04  add r1,r1,r2, lsr #0x1d
0205fa08  ldr r2,[r0,#0x10]
0205fa0c  mov r3,r1, asr #0x3
0205fa10  mul r1,r3,r2
0205fa14  bic r3,r10,#0x7
0205fa18  str r3,[sp,#0x28]
0205fa1c  ldr r3,[sp,#0x2c]
0205fa20  mov r6,r3, lsl #0x6
0205fa24  ldr r3,[sp,#0x28]
0205fa28  mov r4,r6, asr #0x2
0205fa2c  mov r5,r3, asr #0x2
0205fa30  add r5,r3,r5, lsr #0x1d
0205fa34  add r4,r6,r4, lsr #0x1d
0205fa38  mov r3,r4, asr #0x3
0205fa3c  str r3,[sp,#0x30]
0205fa40  ldr r3,[sp,#0x1c]
0205fa44  add r1,r1,r5, asr #0x3
0205fa48  add r4,r3,#0x7
0205fa4c  ldr r3,[r0,#0x0]
0205fa50  ldr r0,[sp,#0x18]
0205fa54  add r5,r0,#0x7
0205fa58  ldr r0,[sp,#0x30]
0205fa5c  bic r7,r5,#0x7
0205fa60  mla r1,r0,r1,r3
0205fa64  bic r0,r4,#0x7
0205fa68  str r0,[sp,#0x20]
0205fa6c  ldr r0,[sp,#0x30]
0205fa70  str r1,[sp,#0x24]
0205fa74  mul r0,r2,r0
0205fa78  str r0,[sp,#0x34]
0205fa7c  ldr r1,[sp,#0x14]
0205fa80  ldr r0,[sp,#0x20]
0205fa84  cmp r1,r0
0205fa88  addge sp,sp,#0x3c
0205fa8c  ldmiage sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
0205fa90  mov r5,#0x0
0205fa94  mov r4,#0x8
0205fa98  ldr r1,[sp,#0x14]
0205fa9c  ldr r0,[sp,#0x10]
0205faa0  ldr r6,[sp,#0x24]
0205faa4  cmp r1,r0
0205faa8  movlt r1,r0
0205faac  ldrlt r0,[sp,#0x14]
0205fab0  sublt r9,r1,r0
0205fab4  ldr r1,[sp,#0x1c]
0205fab8  ldr r0,[sp,#0x14]
0205fabc  movge r9,r5
0205fac0  sub r0,r1,r0
0205fac4  cmp r0,#0x8
0205fac8  movgt r0,r4
0205facc  sub r11,r0,r9
0205fad0  ldr r0,[sp,#0x28]
0205fad4  cmp r0,r7
0205fad8  mov r8,r0
0205fadc  bge 0x0205fb34
0205fae0  ldr r0,[sp,#0x18]
0205fae4  cmp r8,r10
0205fae8  sublt r1,r10,r8
0205faec  sub r0,r0,r8
0205faf0  movge r1,r5
0205faf4  cmp r0,#0x8
0205faf8  movgt r0,r4
0205fafc  sub r3,r0,r1
0205fb00  ldr r0,[sp,#0xc]
0205fb04  str r11,[sp,#0x0]
0205fb08  str r0,[sp,#0x4]
0205fb0c  ldr r0,[sp,#0x2c]
0205fb10  mov r2,r9
0205fb14  str r0,[sp,#0x8]
0205fb18  mov r0,r6
0205fb1c  bl 0x020601d0
0205fb20  ldr r0,[sp,#0x30]
0205fb24  add r8,r8,#0x8
0205fb28  add r6,r6,r0
0205fb2c  cmp r8,r7
0205fb30  blt 0x0205fae0
0205fb34  ldr r1,[sp,#0x24]
0205fb38  ldr r0,[sp,#0x34]
0205fb3c  add r0,r1,r0
0205fb40  str r0,[sp,#0x24]
0205fb44  ldr r0,[sp,#0x14]
0205fb48  add r1,r0,#0x8
0205fb4c  ldr r0,[sp,#0x20]
0205fb50  str r1,[sp,#0x14]
0205fb54  cmp r1,r0
0205fb58  blt 0x0205fa98
0205fb5c  add sp,sp,#0x3c
0205fb60  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
