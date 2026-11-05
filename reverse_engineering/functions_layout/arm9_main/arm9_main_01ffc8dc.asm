01ffc8dc  stmdb sp!,{r4,r5,r6,r11,r12,lr}
01ffc8e0  bl 0x01ff9450
01ffc8e4  add r11,r11,r6
01ffc8e8  bl 0x01ff9450
01ffc8ec  add r12,r12,r6
01ffc8f0  bic r6,r11,#0x1
01ffc8f4  bic r7,r12,#0x1
01ffc8f8  ldr r8,[r0,#0x10]
01ffc8fc  add r11,r11,r12, lsl #0x8
01ffc900  add r12,r6,r7, lsl #0x7
01ffc904  str r11,[r8,#0x0]
01ffc908  and r4,r11,#0x3
01ffc90c  adr r8,0x1ffc8a0
01ffc910  ldr r8,[r8,r4,lsl #0x2]
01ffc914  mov pc,r8
01ffc918  ldr r4,[sp,#0x4]
01ffc91c  ldr r5,[r0,#-0x8]
01ffc920  add r4,r4,r11
01ffc924  ldr r9,[r0,#0x0]
01ffc928  ldr r11,[sp,#0x0]
01ffc92c  add r4,r4,r9
01ffc930  add r5,r5,r9
01ffc934  ldr r6,[r4],#0x100
01ffc938  subs r11,r11,#0x1
01ffc93c  str r6,[r5],#0x100
01ffc940  bne 0x01ffc934
01ffc944  ldr r4,[sp,#0x8]
01ffc948  ldr r5,[r0,#-0x4]
01ffc94c  add r4,r4,r12
01ffc950  ldr r9,[r0,#0x4]
01ffc954  ldr r11,[sp],#0xc
01ffc958  add r4,r4,r9
01ffc95c  add r5,r5,r9
01ffc960  mov r11,r11, lsr #0x1
01ffc964  ldr r6,[r4],#0x100
01ffc968  subs r11,r11,#0x1
01ffc96c  str r6,[r5],#0x100
01ffc970  bne 0x01ffc964
01ffc974  ldmia sp!,{r11,r12,pc}
01ffc978  ldr r4,[sp,#0x4]
01ffc97c  ldr r5,[r0,#-0x8]
01ffc980  add r4,r4,r11
01ffc984  sub r4,r4,#0x1
01ffc988  ldr r9,[r0,#0x0]
01ffc98c  ldr r11,[sp,#0x0]
01ffc990  add r4,r4,r9
01ffc994  add r5,r5,r9
01ffc998  ldr r6,[r4],#0x100
01ffc99c  ldrb r7,[r4,#-0xfc]
01ffc9a0  subs r11,r11,#0x1
01ffc9a4  mov r6,r6, lsr #0x8
01ffc9a8  orr r6,r6,r7, lsl #0x18
01ffc9ac  str r6,[r5],#0x100
01ffc9b0  bne 0x01ffc998
01ffc9b4  ldr r4,[sp,#0x8]
01ffc9b8  ldr r5,[r0,#-0x4]
01ffc9bc  add r4,r4,r12
01ffc9c0  ldr r9,[r0,#0x4]
01ffc9c4  ldr r11,[sp],#0xc
01ffc9c8  add r4,r4,r9
01ffc9cc  add r5,r5,r9
01ffc9d0  mov r11,r11, lsr #0x1
01ffc9d4  ldr r6,[r4],#0x100
01ffc9d8  subs r11,r11,#0x1
01ffc9dc  str r6,[r5],#0x100
01ffc9e0  bne 0x01ffc9d4
01ffc9e4  ldmia sp!,{r11,r12,pc}
01ffc9e8  ldr r4,[sp,#0x4]
01ffc9ec  ldr r5,[r0,#-0x8]
01ffc9f0  add r4,r4,r11
01ffc9f4  ldr r9,[r0,#0x0]
01ffc9f8  ldr r11,[sp,#0x0]
01ffc9fc  add r4,r4,r9
01ffca00  add r5,r5,r9
01ffca04  ldrh r6,[r4,#0x0]
01ffca08  ldrh r7,[r4,#0x2]
01ffca0c  add r4,r4,#0x100
01ffca10  subs r11,r11,#0x1
01ffca14  orr r6,r6,r7, lsl #0x10
01ffca18  str r6,[r5],#0x100
01ffca1c  bne 0x01ffca04
01ffca20  ldr r4,[sp,#0x8]
01ffca24  ldr r5,[r0,#-0x4]
01ffca28  add r4,r4,r12
01ffca2c  ldr r9,[r0,#0x4]
01ffca30  ldr r11,[sp],#0xc
01ffca34  add r4,r4,r9
01ffca38  add r5,r5,r9
01ffca3c  mov r11,r11, lsr #0x1
01ffca40  ldrh r6,[r4,#0x0]
01ffca44  ldrh r7,[r4,#0x2]
01ffca48  add r4,r4,#0x100
01ffca4c  subs r11,r11,#0x1
01ffca50  orr r6,r6,r7, lsl #0x10
01ffca54  str r6,[r5],#0x100
01ffca58  bne 0x01ffca40
01ffca5c  ldmia sp!,{r11,r12,pc}
01ffca60  ldr r4,[sp,#0x4]
01ffca64  ldr r5,[r0,#-0x8]
01ffca68  add r4,r4,r11
01ffca6c  ldr r9,[r0,#0x0]
01ffca70  ldr r11,[sp,#0x0]
01ffca74  add r4,r4,r9
01ffca78  add r5,r5,r9
01ffca7c  ldrb r6,[r4],#0x1
01ffca80  ldr r7,[r4],#0xff
01ffca84  subs r11,r11,#0x1
01ffca88  orr r6,r6,r7, lsl #0x8
01ffca8c  str r6,[r5],#0x100
01ffca90  bne 0x01ffca7c
01ffca94  ldr r4,[sp,#0x8]
01ffca98  ldr r5,[r0,#-0x4]
01ffca9c  add r4,r4,r12
01ffcaa0  ldr r9,[r0,#0x4]
01ffcaa4  ldr r11,[sp],#0xc
01ffcaa8  add r4,r4,r9
01ffcaac  add r5,r5,r9
01ffcab0  mov r11,r11, lsr #0x1
01ffcab4  ldrh r6,[r4,#0x0]
01ffcab8  ldrh r7,[r4,#0x2]
01ffcabc  add r4,r4,#0x100
01ffcac0  subs r11,r11,#0x1
01ffcac4  orr r6,r6,r7, lsl #0x10
01ffcac8  str r6,[r5],#0x100
01ffcacc  bne 0x01ffcab4
01ffcad0  ldmia sp!,{r11,r12,pc}
