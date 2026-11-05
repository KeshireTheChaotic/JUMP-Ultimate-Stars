02163f64  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02163f68  mov r4,#0x1
02163f6c  mov r9,r1
02163f70  mov r11,r2
02163f74  mov r10,r0
02163f78  mov r8,r3
02163f7c  str r4,[sp,#0x0]
02163f80  mov r2,r4
02163f84  mov r5,#0x0
02163f88  mov r1,#0xa
02163f8c  b 0x02163f9c
02163f90  mul r0,r4,r1
02163f94  mov r4,r0
02163f98  add r2,r2,#0x1
02163f9c  cmp r2,r8
02163fa0  blt 0x02163f90
02163fa4  mov r7,#0x0
02163fa8  b 0x0216405c
02163fac  mov r0,r10
02163fb0  mov r1,r4
02163fb4  bl 0x0200d338
02163fb8  mov r6,r0
02163fbc  ldr r0,[r9,r7,lsl #0x2]
02163fc0  add r1,r11,r6
02163fc4  ldr r0,[r0,#0x4]
02163fc8  mov r2,#0x0
02163fcc  bl 0x02023894
02163fd0  ldr r0,[r9,r7,lsl #0x2]
02163fd4  ldr r0,[r0,#0x4]
02163fd8  ldr r0,[r0,#0x68]
02163fdc  ldr r1,[r0,#0x0]
02163fe0  ldr r1,[r1,#0x6c]
02163fe4  blx r1
02163fe8  cmp r6,#0x0
02163fec  bne 0x02163ffc
02163ff0  ldr r0,[sp,#0x0]
02163ff4  cmp r0,#0x0
02163ff8  bne 0x02164028
02163ffc  ldr r0,[r9,r7,lsl #0x2]
02164000  mov r1,#0x1
02164004  ldr r0,[r0,#0x4]
02164008  ldr r2,[r0,#0x0]
0216400c  ldr r2,[r2,#0xd8]
02164010  blx r2
02164014  mov r0,#0x0
02164018  str r0,[sp,#0x0]
0216401c  add r0,r5,#0x1
02164020  and r5,r0,#0xff
02164024  b 0x02164040
02164028  ldr r0,[r9,r7,lsl #0x2]
0216402c  mov r1,#0x0
02164030  ldr r0,[r0,#0x4]
02164034  ldr r2,[r0,#0x0]
02164038  ldr r2,[r2,#0xd8]
0216403c  blx r2
02164040  mul r0,r6,r4
02164044  sub r10,r10,r0
02164048  mov r0,r4
0216404c  mov r1,#0xa
02164050  bl 0x0200d338
02164054  mov r4,r0
02164058  add r7,r7,#0x1
0216405c  cmp r7,r8
02164060  blt 0x02163fac
02164064  sub r0,r8,#0x1
02164068  ldr r0,[r9,r0,lsl #0x2]
0216406c  ldr r0,[r0,#0x4]
02164070  ldr r1,[r0,#0x64]
02164074  ldrb r1,[r1,#0x10]
02164078  mov r2,r1, lsl #0x18
0216407c  movs r2,r2, lsr #0x1f
02164080  beq 0x02164094
02164084  mov r1,r1, lsl #0x1e
02164088  movs r1,r1, lsr #0x1f
0216408c  movne r1,#0x1
02164090  bne 0x02164098
02164094  mov r1,#0x0
02164098  cmp r1,#0x0
0216409c  bne 0x021640b8
021640a0  ldr r2,[r0,#0x0]
021640a4  add r3,r5,#0x1
021640a8  ldr r2,[r2,#0xd8]
021640ac  mov r1,#0x1
021640b0  and r5,r3,#0xff
021640b4  blx r2
021640b8  mov r0,r5
021640bc  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
