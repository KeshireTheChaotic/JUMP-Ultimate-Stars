0216de40  stmdb sp!,{r4,r5,r6,lr}
0216de44  sub sp,sp,#0x8
0216de48  mov r4,r0
0216de4c  ldrsh r0,[r4,#0x38]
0216de50  mov r0,r0, lsl #0xc
0216de54  bl 0x0200c954
0216de58  ldr r1,[0x216df48]
0216de5c  bl 0x0200c5ac
0216de60  ldrsh r1,[r4,#0x3a]
0216de64  mov r6,r0
0216de68  mov r0,r1, lsl #0xc
0216de6c  bl 0x0200c954
0216de70  ldr r1,[0x216df48]
0216de74  bl 0x0200c5ac
0216de78  bl 0x0200c85c
0216de7c  mov r5,r0
0216de80  mov r0,r6
0216de84  mov r6,r1
0216de88  bl 0x0200c85c
0216de8c  mov r2,r0
0216de90  mov r3,r1
0216de94  mov r0,r5
0216de98  mov r1,r6
0216de9c  blx 0x02009d2c
0216dea0  bl 0x0200b6c4
0216dea4  mov r1,r0
0216dea8  ldr r0,[0x216df48]
0216deac  bl 0x0200c9e4
0216deb0  bl 0x0200c8e0
0216deb4  mov r0,r0, lsl #0x10
0216deb8  add r0,r0,r0, lsr #0x1f
0216debc  mov r0,r0, asr #0x1
0216dec0  bl 0x0200c954
0216dec4  ldr r1,[0x216df4c]
0216dec8  bl 0x0200c5ac
0216decc  bl 0x0200c8e0
0216ded0  cmp r0,#0x0
0216ded4  sublt r0,r0,#0xff
0216ded8  sublt r0,r0,#0x700
0216dedc  strlt r0,[sp,#0x0]
0216dee0  addge r0,r0,#0xff
0216dee4  addlt r1,sp,#0x0
0216dee8  addge r0,r0,#0x700
0216deec  addge r1,sp,#0x4
0216def0  strge r0,[sp,#0x4]
0216def4  ldr r2,[r1,#0x0]
0216def8  ldr r1,[r4,#0x2c]
0216defc  mov r0,r2, asr #0xb
0216df00  add r0,r2,r0, lsr #0x14
0216df04  ldr r2,[r1,#0x8]
0216df08  mov r0,r0, lsl #0x4
0216df0c  cmp r2,#0x0
0216df10  mov r1,r0, lsr #0x10
0216df14  ldrne r0,[r2,#0x4]
0216df18  ldrne r0,[r0,#0x64]
0216df1c  ldrbne r0,[r0,#0x48]
0216df20  moveq r0,#0x1
0216df24  cmp r0,#0x0
0216df28  ldr r0,[r2,#0x4]
0216df2c  beq 0x0216df3c
0216df30  sub r1,r1,#0x8000
0216df34  bl 0x02023738
0216df38  b 0x0216df40
0216df3c  bl 0x02023738
0216df40  add sp,sp,#0x8
0216df44  ldmia sp!,{r4,r5,r6,pc}
