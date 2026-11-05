02082e10  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02082e14  ldr r0,[r0,#0x4]
02082e18  mov r2,#0x0
02082e1c  ldr r3,[r0,#0x10]
02082e20  mov r9,r2
02082e24  ldr r12,[r3,#0x10]
02082e28  mov r8,r2
02082e2c  ldr r7,[0x2083174]
02082e30  mov r6,r2
02082e34  mov r5,r2
02082e38  mvn r4,#0xf
02082e3c  b 0x02083168
02082e40  ldr lr,[r12,#0x8]
02082e44  ldr r0,[0x2083178]
02082e48  ldr r1,[lr,#0x34]
02082e4c  and r0,r1,r0
02082e50  str r0,[lr,#0x34]
02082e54  tst r0,#0x100
02082e58  ldrne r0,[lr,#0x34]
02082e5c  bicne r0,r0,#0x100
02082e60  strne r0,[lr,#0x34]
02082e64  ldreq r0,[lr,#0xc]
02082e68  streq r0,[lr,#0x14]
02082e6c  ldreq r0,[lr,#0x10]
02082e70  streq r0,[lr,#0x18]
02082e74  ldr r0,[lr,#0x34]
02082e78  tst r0,#0x600
02082e7c  orrne r0,r0,#0x20
02082e80  strne r0,[lr,#0x34]
02082e84  bne 0x02083164
02082e88  tst r0,#0xc0
02082e8c  beq 0x02082f04
02082e90  ldrsh r1,[lr,#0x24]
02082e94  ldrsh r0,[lr,#0x30]
02082e98  add r0,r1,r0
02082e9c  strh r0,[lr,#0x24]
02082ea0  ldrsh r10,[lr,#0x26]
02082ea4  ldrsh r1,[lr,#0x32]
02082ea8  ldrsh r0,[lr,#0x2e]
02082eac  add r0,r1,r0
02082eb0  add r0,r10,r0
02082eb4  strh r0,[lr,#0x26]
02082eb8  strh r2,[lr,#0x38]
02082ebc  ldr r0,[lr,#0x34]
02082ec0  tst r0,#0x40
02082ec4  beq 0x02082ed4
02082ec8  ldrsh r1,[lr,#0x2c]
02082ecc  cmp r1,#0x0
02082ed0  bgt 0x02082ee8
02082ed4  tst r0,#0x80
02082ed8  beq 0x02082ef4
02082edc  ldrsh r1,[lr,#0x2c]
02082ee0  cmp r1,#0x0
02082ee4  bge 0x02082ef4
02082ee8  ldrsh r0,[lr,#0x24]
02082eec  add r0,r0,r1
02082ef0  strh r0,[lr,#0x24]
02082ef4  ldr r0,[lr,#0x34]
02082ef8  bic r0,r0,#0xc0
02082efc  str r0,[lr,#0x34]
02082f00  b 0x02082f34
02082f04  ldrsh r10,[lr,#0x24]
02082f08  ldrsh r1,[lr,#0x2c]
02082f0c  ldrsh r0,[lr,#0x30]
02082f10  add r0,r1,r0
02082f14  add r0,r10,r0
02082f18  strh r0,[lr,#0x24]
02082f1c  ldrsh r10,[lr,#0x26]
02082f20  ldrsh r1,[lr,#0x2e]
02082f24  ldrsh r0,[lr,#0x32]
02082f28  add r0,r1,r0
02082f2c  add r0,r10,r0
02082f30  strh r0,[lr,#0x26]
02082f34  ldrsh r10,[lr,#0x24]
02082f38  ldrsh r1,[lr,#0x26]
02082f3c  ldrb r11,[lr,#0x3e]
02082f40  mov r0,r10
02082f44  cmp r10,#0x0
02082f48  rsblt r0,r10,#0x0
02082f4c  movlt r0,r0, lsl #0x10
02082f50  movlt r0,r0, asr #0x10
02082f54  cmp r1,#0x0
02082f58  rsblt r1,r1,#0x0
02082f5c  movlt r1,r1, lsl #0x10
02082f60  movlt r1,r1, asr #0x10
02082f64  cmp r0,r11, lsl #0x8
02082f68  mov r0,r11, lsl #0x8
02082f6c  ble 0x02082f80
02082f70  cmp r10,#0x0
02082f74  rsblt r0,r0,#0x0
02082f78  strhlt r0,[lr,#0x24]
02082f7c  strhge r0,[lr,#0x24]
02082f80  ldrb r0,[lr,#0x3e]
02082f84  cmp r1,r0, lsl #0x8
02082f88  mov r1,r0, lsl #0x8
02082f8c  ble 0x02082fa4
02082f90  ldrsh r0,[lr,#0x26]
02082f94  cmp r0,#0x0
02082f98  rsblt r0,r1,#0x0
02082f9c  strhlt r0,[lr,#0x26]
02082fa0  strhge r1,[lr,#0x26]
02082fa4  ldr r0,[lr,#0x34]
02082fa8  tst r0,#0x800
02082fac  beq 0x02083030
02082fb0  ldrsh r0,[lr,#0x2c]
02082fb4  cmp r0,#0x0
02082fb8  beq 0x02082fe8
02082fbc  ldrb r11,[lr,#0x3c]
02082fc0  ldrsh r10,[lr,#0x24]
02082fc4  ldrb r1,[lr,#0x3d]
02082fc8  ldrsh r0,[lr,#0x26]
02082fcc  smulbb r10,r11,r10
02082fd0  smulbb r1,r1,r0
02082fd4  mov r0,r10, lsl #0x8
02082fd8  mov r0,r0, asr #0x10
02082fdc  mov r1,r1, lsl #0x8
02082fe0  mov r10,r1, asr #0x10
02082fe4  b 0x02083020
02082fe8  ldrsh r1,[lr,#0x24]
02082fec  ldrb r11,[lr,#0x3d]
02082ff0  ldrsh r10,[lr,#0x26]
02082ff4  mov r0,#0x6
02082ff8  smulbb r0,r1,r0
02082ffc  smulbb r10,r11,r10
02083000  mov r0,r0, asr #0x8
02083004  mov r0,r0, lsl #0x10
02083008  mov r10,r10, lsl #0x8
0208300c  movs r0,r0, asr #0x10
02083010  mov r10,r10, asr #0x10
02083014  bne 0x02083020
02083018  cmp r1,#0x0
0208301c  movne r0,#0x1
02083020  ldr r1,[lr,#0x34]
02083024  bic r1,r1,#0x800
02083028  str r1,[lr,#0x34]
0208302c  b 0x02083058
02083030  ldrb r11,[lr,#0x3c]
02083034  ldrsh r10,[lr,#0x24]
02083038  ldrb r1,[lr,#0x3d]
0208303c  ldrsh r0,[lr,#0x26]
02083040  smulbb r10,r11,r10
02083044  smulbb r1,r1,r0
02083048  mov r0,r10, lsl #0x8
0208304c  mov r0,r0, asr #0x10
02083050  mov r1,r1, lsl #0x8
02083054  mov r10,r1, asr #0x10
02083058  ldrsh r1,[lr,#0x24]
0208305c  sub r0,r1,r0
02083060  strh r0,[lr,#0x24]
02083064  ldrsh r0,[lr,#0x26]
02083068  sub r0,r0,r10
0208306c  strh r0,[lr,#0x26]
02083070  ldr r0,[lr,#0x34]
02083074  tst r0,#0x2
02083078  ldrsheq r1,[lr,#0x26]
0208307c  ldrheq r0,[r3,#0x2c]
02083080  addeq r0,r1,r0
02083084  strheq r0,[lr,#0x26]
02083088  ldrsh r1,[lr,#0x24]
0208308c  ldrsh r0,[lr,#0x38]
02083090  ldr r10,[lr,#0xc]
02083094  add r0,r1,r0
02083098  add r0,r10,r0
0208309c  str r0,[lr,#0xc]
020830a0  ldrsh r0,[lr,#0x26]
020830a4  ldr r1,[lr,#0x10]
020830a8  add r0,r1,r0
020830ac  str r0,[lr,#0x10]
020830b0  ldr r0,[lr,#0xc]
020830b4  cmp r0,#0x0
020830b8  strlt r9,[lr,#0xc]
020830bc  ldr r0,[lr,#0x10]
020830c0  cmp r0,#0x0
020830c4  strlt r8,[lr,#0x10]
020830c8  ldr r0,[lr,#0xc]
020830cc  cmp r0,#0x40000
020830d0  strge r7,[lr,#0xc]
020830d4  ldr r0,[lr,#0x10]
020830d8  cmp r0,#0x40000
020830dc  strge r7,[lr,#0x10]
020830e0  str r6,[lr,#0x2c]
020830e4  str r6,[lr,#0x30]
020830e8  ldrsh r0,[lr,#0x24]
020830ec  cmp r0,#0x10
020830f0  bge 0x020830fc
020830f4  cmp r0,r4
020830f8  strhge r6,[lr,#0x24]
020830fc  ldrsh r0,[lr,#0x26]
02083100  cmp r0,#0x10
02083104  bge 0x02083110
02083108  cmp r0,r4
0208310c  strhge r5,[lr,#0x26]
02083110  ldrsh r0,[lr,#0x24]
02083114  cmp r0,#0x0
02083118  ldrsheq r0,[lr,#0x26]
0208311c  cmpeq r0,#0x0
02083120  ldreq r0,[lr,#0x34]
02083124  orreq r0,r0,#0x20
02083128  streq r0,[lr,#0x34]
0208312c  ldrsh r0,[lr,#0x38]
02083130  strh r0,[lr,#0x3a]
02083134  mov r0,#0x0
02083138  strh r0,[lr,#0x38]
0208313c  ldrsh r0,[lr,#0x26]
02083140  cmp r0,#0x0
02083144  ldrlt r0,[lr,#0x34]
02083148  orrlt r0,r0,#0x10
0208314c  strlt r0,[lr,#0x34]
02083150  ldrsh r0,[lr,#0x26]
02083154  cmp r0,#0x0
02083158  ldrgt r0,[lr,#0x34]
0208315c  orrgt r0,r0,#0x4
02083160  strgt r0,[lr,#0x34]
02083164  ldr r12,[r12,#0x0]
02083168  cmp r12,#0x0
0208316c  bne 0x02082e40
02083170  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
