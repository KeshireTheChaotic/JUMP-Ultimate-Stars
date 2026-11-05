021543ac  stmdb sp!,{r4,r5,r6,r7,lr}
021543b0  sub sp,sp,#0x1c
021543b4  ldr r0,[r0,#0x4]
021543b8  mov r2,#0x48
021543bc  ldr r4,[r0,#0x10]
021543c0  ldr r6,[r0,#0x124]
021543c4  ldr r1,[r4,#0x330]
021543c8  mov r0,r4
021543cc  ldr r3,[r1,#0x34]
021543d0  and r1,r6,#0xff
021543d4  strb r6,[r4,#0x35c]
021543d8  mla r5,r6,r2,r3
021543dc  bl 0x02153808
021543e0  mov r1,#0x28
021543e4  mul r6,r0,r1
021543e8  add r7,r4,#0xdc
021543ec  ldr r0,[r7,r6]
021543f0  mov r1,#0x1
021543f4  ldr r0,[r0,#0x4]
021543f8  blx 0x021b6214
021543fc  ldr r1,[r7,r6]
02154400  add r0,sp,#0x10
02154404  ldr r1,[r1,#0x4]
02154408  ldr r1,[r1,#0x124]
0215440c  strb r1,[r4,#0x35e]
02154410  bl 0x021518d4
02154414  add r0,r4,#0x300
02154418  ldrsh r3,[r0,#0x54]
0215441c  ldrsh r2,[r5,#0x2c]
02154420  add r0,sp,#0xc
02154424  add r1,r4,#0x344
02154428  sub r2,r3,r2
0215442c  mov r2,r2, lsl #0xc
02154430  str r2,[sp,#0xc]
02154434  bl 0x02153260
02154438  ldr r1,[sp,#0xc]
0215443c  add r0,r4,#0x300
02154440  str r1,[sp,#0x10]
02154444  ldrsh r3,[r0,#0x56]
02154448  ldrsh r2,[r5,#0x2e]
0215444c  add r0,sp,#0x8
02154450  add r1,r4,#0x344
02154454  sub r2,r3,r2
02154458  mov r2,r2, lsl #0xc
0215445c  str r2,[sp,#0x8]
02154460  bl 0x02153260
02154464  ldr r1,[sp,#0x8]
02154468  add r0,r4,#0x348
0215446c  str r1,[sp,#0x14]
02154470  add r1,sp,#0x10
02154474  bl 0x02154390
02154478  ldr r0,[r4,#0x8]
0215447c  ldr r1,[0x2154550]
02154480  mov r2,#0x0
02154484  bl 0x02151454
02154488  ldr r0,[r0,#0x4]
0215448c  add r1,sp,#0x10
02154490  mov r2,#0x0
02154494  bl 0x02013c48
02154498  add r1,r4,#0x300
0215449c  ldrsh r2,[r1,#0x58]
021544a0  ldr r0,[sp,#0x10]
021544a4  rsb r2,r0,r2, lsl #0xc
021544a8  mov r0,r2, asr #0xb
021544ac  add r0,r2,r0, lsr #0x14
021544b0  mov r0,r0, asr #0xc
021544b4  strh r0,[r1,#0x58]
021544b8  ldrsh r2,[r1,#0x5a]
021544bc  ldr r0,[sp,#0x14]
021544c0  rsb r2,r0,r2, lsl #0xc
021544c4  mov r0,r2, asr #0xb
021544c8  add r0,r2,r0, lsr #0x14
021544cc  mov r2,r0, asr #0xc
021544d0  strh r2,[r1,#0x5a]
021544d4  ldr r0,[0x2154554]
021544d8  add r2,sp,#0x4
021544dc  str r0,[sp,#0x4]
021544e0  ldrb r1,[r4,#0x35c]
021544e4  mov r0,r4
021544e8  add r3,r5,#0x2c
021544ec  bl 0x021539d4
021544f0  ldr r0,[r4,#0x20]
021544f4  bl 0x02154354
021544f8  ldr r0,[r4,#0x20]
021544fc  mov r1,r5
02154500  ldr r0,[r0,#0x4]
02154504  ldr r0,[r0,#0x64]
02154508  ldr r2,[r0,#0x0]
0215450c  ldr r2,[r2,#0x68]
02154510  blx r2
02154514  mov r0,#0x8000
02154518  str r0,[sp,#0x0]
0215451c  ldr r0,[r4,#0x20]
02154520  add r1,sp,#0x0
02154524  bl 0x0214ef60
02154528  ldr r0,[r4,#0x4c]
0215452c  mov r1,#0x0
02154530  ldr r0,[r0,#0x4]
02154534  ldr r2,[r0,#0x0]
02154538  ldr r2,[r2,#0xd8]
0215453c  blx r2
02154540  mov r0,r4
02154544  bl 0x0215384c
02154548  add sp,sp,#0x1c
0215454c  ldmia sp!,{r4,r5,r6,r7,pc}
