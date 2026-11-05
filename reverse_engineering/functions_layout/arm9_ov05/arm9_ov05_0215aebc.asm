0215aebc  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0215aec0  sub sp,sp,#0x8
0215aec4  mov r5,r0
0215aec8  mov r6,r1
0215aecc  mov r4,#0x0
0215aed0  add r0,r5,r4, lsl #0x2
0215aed4  ldr r0,[r0,#0x8c]
0215aed8  cmp r0,#0x0
0215aedc  beq 0x0215aee8
0215aee0  mov r1,r6
0215aee4  bl 0x02159810
0215aee8  add r4,r4,#0x1
0215aeec  cmp r4,#0x7
0215aef0  blt 0x0215aed0
0215aef4  cmp r6,#0x0
0215aef8  ldr r10,[r5,#0xfc]
0215aefc  beq 0x0215afd4
0215af00  mov r11,#0x32
0215af04  ldr r7,[0x215b010]
0215af08  mov r4,#0x1
0215af0c  mov r6,r11
0215af10  add r0,r5,r4, lsl #0x1
0215af14  add r0,r0,#0x100
0215af18  ldrh r2,[r0,#0x14]
0215af1c  mov r1,#0x64
0215af20  mov r0,r2, asr #0xa
0215af24  and r0,r0,#0x1f
0215af28  orr r0,r0,r0, lsl #0x5
0215af2c  mov r3,r0, lsr #0x5
0215af30  mov r0,#0x32
0215af34  mul r0,r3,r0
0215af38  mov r3,r2, asr #0x5
0215af3c  and r9,r2,#0x1f
0215af40  and r8,r3,#0x1f
0215af44  bl 0x0200d338
0215af48  orr r1,r9,r9, lsl #0x5
0215af4c  mov r1,r1, lsr #0x5
0215af50  mov r9,r0
0215af54  mul r0,r1,r11
0215af58  mov r1,#0x64
0215af5c  bl 0x0200d338
0215af60  orr r1,r8,r8, lsl #0x5
0215af64  mov r1,r1, lsr #0x5
0215af68  mov r8,r0
0215af6c  mul r0,r1,r6
0215af70  mov r1,#0x64
0215af74  bl 0x0200d338
0215af78  and r1,r8,#0x1f
0215af7c  mov r0,r0, lsl #0x1b
0215af80  mov r2,r9, lsl #0x1b
0215af84  orr r0,r1,r0, lsr #0x16
0215af88  orr r1,r0,r2, lsr #0x11
0215af8c  mov r0,r4, lsl #0x1
0215af90  add r4,r4,#0x1
0215af94  strh r1,[r7,r0]
0215af98  cmp r4,#0x10
0215af9c  blt 0x0215af10
0215afa0  add r0,sp,#0x0
0215afa4  mov r1,r10
0215afa8  bl 0x0215ced4
0215afac  add r0,sp,#0x0
0215afb0  ldr r0,[r0,#0x0]
0215afb4  bl 0x0215b71c
0215afb8  bl 0x0215b6f4
0215afbc  ldr r0,[r0,#0x4]
0215afc0  ldr r1,[0x215b014]
0215afc4  mov r2,#0x1
0215afc8  mov r3,#0xf
0215afcc  bl 0x02029c68
0215afd0  b 0x0215b008
0215afd4  add r0,sp,#0x4
0215afd8  mov r1,r10
0215afdc  bl 0x0215ced4
0215afe0  add r0,sp,#0x4
0215afe4  ldr r0,[r0,#0x0]
0215afe8  bl 0x0215b71c
0215afec  bl 0x0215b6f4
0215aff0  add r1,r5,#0x114
0215aff4  ldr r0,[r0,#0x4]
0215aff8  add r1,r1,#0x2
0215affc  mov r2,#0x1
0215b000  mov r3,#0xf
0215b004  bl 0x02029c68
0215b008  add sp,sp,#0x8
0215b00c  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
