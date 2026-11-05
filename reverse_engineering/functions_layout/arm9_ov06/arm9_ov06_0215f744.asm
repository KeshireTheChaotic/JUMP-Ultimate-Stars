0215f744  stmdb sp!,{r4,r5,r6,r7,lr}
0215f748  sub sp,sp,#0x24
0215f74c  ldr r2,[0x215fa54]
0215f750  mov r7,r0
0215f754  ldr r2,[r2,#0x0]
0215f758  add r0,r7,#0x100
0215f75c  ldrsb r3,[r0,#0xe0]
0215f760  ldrb r0,[r2,#0x30]
0215f764  mov r6,r1
0215f768  cmp r3,r0
0215f76c  bne 0x0215fa4c
0215f770  ldr r0,[r7,#0x1a8]
0215f774  ldr r1,[0x215fa58]
0215f778  ldr r3,[r0,#0x10]
0215f77c  ldr r0,[0x215fa5c]
0215f780  ldr r2,[r1,#0x0]
0215f784  ldr r4,[r3,#0x5c]
0215f788  sub r3,r2,#0x1
0215f78c  ldr r2,[r0,#0x0]
0215f790  ldr r0,[0x215fa60]
0215f794  str r3,[r1,#0x0]
0215f798  str r2,[r0,r3,lsl #0x2]
0215f79c  bl 0x0203b404
0215f7a0  ldr r0,[r0,#0x88]
0215f7a4  ldr r1,[0x215fa5c]
0215f7a8  ldr r2,[r0,#0x4]
0215f7ac  mov r0,#0x500000
0215f7b0  str r2,[r1,#0x0]
0215f7b4  bl 0x020329ec
0215f7b8  mov r5,r0
0215f7bc  ldr r1,[r5,#0x18]
0215f7c0  cmp r1,#0x0
0215f7c4  bne 0x0215f7d4
0215f7c8  ldr r1,[r0,#0x0]
0215f7cc  ldr r1,[r1,#0x14]
0215f7d0  blx r1
0215f7d4  ldr r5,[r5,#0x18]
0215f7d8  mov r0,#0x4c000
0215f7dc  ldr r2,[r5,#0x4]
0215f7e0  add r1,sp,#0x0
0215f7e4  str r0,[sp,#0x0]
0215f7e8  ldr r0,[r2,#0x64]
0215f7ec  ldr r2,[r0,#0x0]
0215f7f0  ldr r2,[r2,#0x10]
0215f7f4  blx r2
0215f7f8  add r1,r7,#0x100
0215f7fc  ldr r0,[r5,#0x4]
0215f800  ldrsb r1,[r1,#0xe0]
0215f804  ldr r2,[r0,#0x0]
0215f808  mov r3,#0x1
0215f80c  mov r1,r3, lsl r1
0215f810  ldr r2,[r2,#0x94]
0215f814  blx r2
0215f818  ldr r1,[r7,#0x1bc]
0215f81c  mov r0,r5
0215f820  bl 0x021544c8
0215f824  ldr r0,[r5,#0x4]
0215f828  mvn r1,#0x0
0215f82c  ldr r2,[r0,#0x0]
0215f830  ldr r2,[r2,#0xdc]
0215f834  blx r2
0215f838  ldrb r0,[r7,#0x1e2]
0215f83c  cmp r0,#0x0
0215f840  bne 0x0215f8b8
0215f844  mov r0,#0x1
0215f848  strb r0,[r7,#0x1e2]
0215f84c  ldr r0,[r5,#0x4]
0215f850  ldr r1,[0x215fa64]
0215f854  bl 0x02028384
0215f858  ldr r0,[r5,#0x4]
0215f85c  ldr r2,[0x215fa68]
0215f860  mov r1,#0x1
0215f864  bl 0x02027834
0215f868  ldr r0,[r5,#0x4]
0215f86c  add r1,r7,#0xe2
0215f870  ldr r2,[r0,#0x0]
0215f874  add r1,r1,#0x100
0215f878  ldr r2,[r2,#0x24]
0215f87c  blx r2
0215f880  ldr r1,[r4,#0x10]
0215f884  mov r0,r5
0215f888  mov r1,r1, asr #0x8
0215f88c  sub r1,r1,#0x10
0215f890  mov r1,r1, lsl #0xc
0215f894  str r1,[sp,#0x1c]
0215f898  ldr r2,[r4,#0xc]
0215f89c  add r1,sp,#0x20
0215f8a0  mov r2,r2, asr #0x8
0215f8a4  mov r2,r2, lsl #0xc
0215f8a8  str r2,[sp,#0x20]
0215f8ac  add r2,sp,#0x1c
0215f8b0  bl 0x021519d0
0215f8b4  b 0x0215f9f0
0215f8b8  ldrb r0,[r7,#0x1e3]
0215f8bc  cmp r0,#0x0
0215f8c0  bne 0x0215f93c
0215f8c4  mov r0,#0x1
0215f8c8  strb r0,[r7,#0x1e3]
0215f8cc  ldr r0,[r5,#0x4]
0215f8d0  ldr r1,[0x215fa64]
0215f8d4  bl 0x02028384
0215f8d8  ldr r0,[r5,#0x4]
0215f8dc  ldr r2,[0x215fa68]
0215f8e0  mov r1,#0x1
0215f8e4  bl 0x02027834
0215f8e8  ldr r0,[r5,#0x4]
0215f8ec  add r1,r7,#0xe3
0215f8f0  ldr r2,[r0,#0x0]
0215f8f4  add r1,r1,#0x100
0215f8f8  ldr r2,[r2,#0x24]
0215f8fc  blx r2
0215f900  ldr r1,[r4,#0x10]
0215f904  mov r0,r5
0215f908  mov r1,r1, asr #0x8
0215f90c  sub r1,r1,#0x10
0215f910  mov r1,r1, lsl #0xc
0215f914  str r1,[sp,#0x14]
0215f918  ldr r2,[r4,#0xc]
0215f91c  add r1,sp,#0x18
0215f920  mov r2,r2, asr #0x8
0215f924  sub r2,r2,#0x18
0215f928  mov r2,r2, lsl #0xc
0215f92c  str r2,[sp,#0x18]
0215f930  add r2,sp,#0x14
0215f934  bl 0x021519d0
0215f938  b 0x0215f9f0
0215f93c  ldrb r0,[r7,#0x1e4]
0215f940  cmp r0,#0x0
0215f944  bne 0x0215f9bc
0215f948  mov r0,#0x1
0215f94c  strb r0,[r7,#0x1e4]
0215f950  ldr r0,[r5,#0x4]
0215f954  ldr r1,[0x215fa64]
0215f958  bl 0x02028384
0215f95c  ldr r0,[r5,#0x4]
0215f960  ldr r2,[0x215fa68]
0215f964  mov r1,#0x1
0215f968  bl 0x02027834
0215f96c  ldr r0,[r5,#0x4]
0215f970  add r1,r7,#0x1e4
0215f974  ldr r2,[r0,#0x0]
0215f978  ldr r2,[r2,#0x24]
0215f97c  blx r2
0215f980  ldr r1,[r4,#0x10]
0215f984  mov r0,r5
0215f988  mov r1,r1, asr #0x8
0215f98c  sub r1,r1,#0x10
0215f990  mov r1,r1, lsl #0xc
0215f994  str r1,[sp,#0xc]
0215f998  ldr r2,[r4,#0xc]
0215f99c  add r1,sp,#0x10
0215f9a0  mov r2,r2, asr #0x8
0215f9a4  add r2,r2,#0x18
0215f9a8  mov r2,r2, lsl #0xc
0215f9ac  str r2,[sp,#0x10]
0215f9b0  add r2,sp,#0xc
0215f9b4  bl 0x021519d0
0215f9b8  b 0x0215f9f0
0215f9bc  ldr r0,[r4,#0x10]
0215f9c0  add r1,sp,#0x8
0215f9c4  mov r0,r0, asr #0x8
0215f9c8  sub r0,r0,#0x10
0215f9cc  mov r0,r0, lsl #0xc
0215f9d0  str r0,[sp,#0x4]
0215f9d4  ldr r0,[r4,#0xc]
0215f9d8  add r2,sp,#0x4
0215f9dc  mov r0,r0, asr #0x8
0215f9e0  mov r3,r0, lsl #0xc
0215f9e4  mov r0,r5
0215f9e8  str r3,[sp,#0x8]
0215f9ec  bl 0x021519d0
0215f9f0  add r1,r6,#0x44
0215f9f4  ldr r0,[r5,#0x4]
0215f9f8  add r1,r1,#0x500000
0215f9fc  mov r2,#0x0
0215fa00  bl 0x02023894
0215fa04  ldr r0,[r5,#0x4]
0215fa08  ldr r0,[r0,#0x68]
0215fa0c  ldr r1,[r0,#0x0]
0215fa10  ldr r1,[r1,#0x6c]
0215fa14  blx r1
0215fa18  ldr r0,[r5,#0x4]
0215fa1c  mov r1,#0x1
0215fa20  ldr r2,[r0,#0x0]
0215fa24  ldr r2,[r2,#0xd8]
0215fa28  blx r2
0215fa2c  ldr r1,[0x215fa58]
0215fa30  ldr r2,[0x215fa60]
0215fa34  ldr r3,[r1,#0x0]
0215fa38  ldr r0,[0x215fa5c]
0215fa3c  ldr r2,[r2,r3,lsl #0x2]
0215fa40  add r3,r3,#0x1
0215fa44  str r3,[r1,#0x0]
0215fa48  str r2,[r0,#0x0]
0215fa4c  add sp,sp,#0x24
0215fa50  ldmia sp!,{r4,r5,r6,r7,pc}
