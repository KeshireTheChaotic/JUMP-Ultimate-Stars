0207aedc  stmdb sp!,{r3,r4,r5,r6,lr}
0207aee0  sub sp,sp,#0xc
0207aee4  mov r6,r0
0207aee8  add r0,sp,#0x0
0207aeec  mov r5,r1
0207aef0  bl 0x0201899c
0207aef4  ldr r1,[0x207afc4]
0207aef8  ldr r2,[0x207afc8]
0207aefc  ldr r3,[0x207afcc]
0207af00  mov r0,#0x40
0207af04  bl 0x0201a21c
0207af08  movs r4,r0
0207af0c  movne r0,#0x0
0207af10  strne r0,[r4,#0x8]
0207af14  strne r0,[r4,#0xc]
0207af18  strne r0,[r4,#0x10]
0207af1c  strne r0,[r4,#0x14]
0207af20  cmp r4,#0x0
0207af24  moveq r0,#0x0
0207af28  beq 0x0207afbc
0207af2c  mov r0,r4
0207af30  mov r1,#0x0
0207af34  mov r2,#0x40
0207af38  bl 0x020517fc
0207af3c  mov r1,r4
0207af40  add r0,r6,#0x8
0207af44  bl 0x02037b98
0207af48  add r1,sp,#0x0
0207af4c  mov r0,r5
0207af50  str r5,[r4,#0x18]
0207af54  bl 0x0207afdc
0207af58  ldr r1,[sp,#0x0]
0207af5c  ldr r12,[0x207afd0]
0207af60  mov r0,r1, asr #0xb
0207af64  add r0,r1,r0, lsr #0x14
0207af68  mov r0,r0, asr #0xc
0207af6c  strh r0,[r4,#0x38]
0207af70  ldrsh r0,[r4,#0x38]
0207af74  ldr r3,[0x207afd4]
0207af78  ldr r2,[0x207afd8]
0207af7c  strh r0,[r4,#0x34]
0207af80  ldr lr,[sp,#0x4]
0207af84  mov r1,#0x0
0207af88  mov r0,lr, asr #0xb
0207af8c  add r0,lr,r0, lsr #0x14
0207af90  mov r0,r0, asr #0xc
0207af94  strh r0,[r4,#0x3a]
0207af98  ldrsh lr,[r4,#0x3a]
0207af9c  mov r0,r4
0207afa0  strh lr,[r4,#0x3c]
0207afa4  strh lr,[r4,#0x36]
0207afa8  str r12,[r4,#0x1c]
0207afac  str r3,[r4,#0x20]
0207afb0  str r2,[r4,#0x24]
0207afb4  str r1,[r4,#0x2c]
0207afb8  str r1,[r4,#0x30]
0207afbc  add sp,sp,#0xc
0207afc0  ldmia sp!,{r3,r4,r5,r6,pc}
