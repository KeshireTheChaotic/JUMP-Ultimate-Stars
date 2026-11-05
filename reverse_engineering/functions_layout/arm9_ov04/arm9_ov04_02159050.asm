02159050  stmdb sp!,{r3,r4,r5,lr}
02159054  sub sp,sp,#0x8
02159058  ldr r1,[0x21590c8]
0215905c  mov r5,r0
02159060  ldr r4,[r5,#0x4]
02159064  bl 0x02151d90
02159068  ldr r0,[r0,#0x4]
0215906c  ldr r0,[r0,#0x64]
02159070  ldrb r0,[r0,#0x10]
02159074  mov r1,r0, lsl #0x18
02159078  movs r1,r1, lsr #0x1f
0215907c  beq 0x02159098
02159080  mov r0,r0, lsl #0x1e
02159084  movs r0,r0, lsr #0x1f
02159088  beq 0x02159098
0215908c  mov r0,#0x78
02159090  mov r1,#0x3
02159094  bl 0x0207342c
02159098  ldrsh r0,[r4,#0xa2]
0215909c  add r1,sp,#0x4
021590a0  add r2,sp,#0x0
021590a4  mov r0,r0, lsl #0xc
021590a8  str r0,[sp,#0x0]
021590ac  ldrsh r3,[r4,#0xa0]
021590b0  mov r0,r5
021590b4  mov r3,r3, lsl #0xc
021590b8  str r3,[sp,#0x4]
021590bc  bl 0x0214e1b8
021590c0  add sp,sp,#0x8
021590c4  ldmia sp!,{r3,r4,r5,pc}
