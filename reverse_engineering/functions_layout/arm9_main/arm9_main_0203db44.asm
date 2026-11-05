0203db44  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0203db48  ldr r0,[0x203e0c0]
0203db4c  ldr r1,[r0,#0x3bc]
0203db50  cmp r1,#0x0
0203db54  ldmiaeq sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
0203db58  subs r1,r1,#0x1
0203db5c  str r1,[r0,#0x3bc]
0203db60  ldmiaeq sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
0203db64  mov r5,#0x0
0203db68  ldr r4,[0x203e0c4]
0203db6c  mov r6,r5
0203db70  ldr r1,[r4,r6,lsl #0x2]
0203db74  ldrb r0,[r1,#0x957]
0203db78  ldr r1,[r1,#0x94c]
0203db7c  blx r1
0203db80  add r6,r6,#0x1
0203db84  cmp r6,#0x4
0203db88  bcc 0x0203db70
0203db8c  ldr r0,[0x203e0c8]
0203db90  ldr r2,[0x203e0cc]
0203db94  ldrb r3,[r0,#0x4]
0203db98  ldrb r0,[r0,#0x5]
0203db9c  mov r1,#0x0
0203dba0  orr r0,r3,r0, lsl #0x4
0203dba4  strb r0,[r2,#0x0]
0203dba8  mov r3,#0x800
0203dbac  ldr r0,[0x203e0c4]
0203dbb0  rsb r3,r3,#0x0
0203dbb4  ldr r4,[r0,r1,lsl #0x2]
0203dbb8  ldr r2,[r4,#0x960]
0203dbbc  cmp r2,#0x0
0203dbc0  beq 0x0203dbe0
0203dbc4  str r5,[r4,#0x968]
0203dbc8  ldr r2,[r0,r1,lsl #0x2]
0203dbcc  ldr r2,[r2,#0x960]
0203dbd0  add r2,r2,#0xff
0203dbd4  add r2,r2,#0x700
0203dbd8  and r2,r2,r3
0203dbdc  add r5,r5,r2
0203dbe0  add r1,r1,#0x1
0203dbe4  cmp r1,#0x4
0203dbe8  bcc 0x0203dbb4
0203dbec  add r0,r5,#0xff
0203dbf0  mov r4,#0x4000
0203dbf4  add r0,r0,#0x3f00
0203dbf8  rsb r4,r4,#0x0
0203dbfc  and r2,r0,r4
0203dc00  ldr r0,[0x203e0c4]
0203dc04  mov r1,#0x0
0203dc08  ldr r5,[r0,r1,lsl #0x2]
0203dc0c  ldr r3,[r5,#0x95c]
0203dc10  cmp r3,#0x0
0203dc14  beq 0x0203dc34
0203dc18  str r2,[r5,#0x964]
0203dc1c  ldr r3,[r0,r1,lsl #0x2]
0203dc20  ldr r3,[r3,#0x95c]
0203dc24  add r3,r3,#0xff
0203dc28  add r3,r3,#0x3f00
0203dc2c  and r3,r3,r4
0203dc30  add r2,r2,r3
0203dc34  add r1,r1,#0x1
0203dc38  cmp r1,#0x4
0203dc3c  bcc 0x0203dc08
0203dc40  ldr r0,[0x203e0c0]
0203dc44  ldr r0,[r0,#0xacc]
0203dc48  ldr r0,[r0,#0x8e4]
0203dc4c  cmp r0,#0x0
0203dc50  ldr r0,[0x203e0c0]
0203dc54  moveq r2,#0x1
0203dc58  ldr r1,[r0,#0xad0]
0203dc5c  movne r2,#0x0
0203dc60  ldr r1,[r1,#0x8e4]
0203dc64  cmp r1,#0x1
0203dc68  bne 0x0203dd3c
0203dc6c  ldr r1,[r0,#0xad4]
0203dc70  ldr r1,[r1,#0x8e4]
0203dc74  cmp r1,#0x1
0203dc78  bne 0x0203dcd0
0203dc7c  ldr r0,[r0,#0xad8]
0203dc80  ldr r0,[r0,#0x8e4]
0203dc84  cmp r0,#0x1
0203dc88  bne 0x0203dc9c
0203dc8c  mov r0,#0x1
0203dc90  mov r1,#0x0
0203dc94  blx 0x02064e3c
0203dc98  b 0x0203dd3c
0203dc9c  cmp r0,#0x2
0203dca0  bne 0x0203dcb4
0203dca4  mov r0,#0x1
0203dca8  mov r1,r0
0203dcac  blx 0x02064e3c
0203dcb0  b 0x0203dd3c
0203dcb4  sub r0,r0,#0x3
0203dcb8  cmp r0,#0x2
0203dcbc  bhi 0x0203dd3c
0203dcc0  mov r0,#0x1
0203dcc4  mov r1,#0x3
0203dcc8  blx 0x02064e3c
0203dccc  b 0x0203dd3c
0203dcd0  cmp r1,#0x2
0203dcd4  bne 0x0203dd14
0203dcd8  ldr r0,[r0,#0xad8]
0203dcdc  ldr r0,[r0,#0x8e4]
0203dce0  cmp r0,#0x2
0203dce4  bne 0x0203dcf8
0203dce8  mov r0,#0x1
0203dcec  mov r1,#0x2
0203dcf0  blx 0x02064e3c
0203dcf4  b 0x0203dd3c
0203dcf8  sub r0,r0,#0x3
0203dcfc  cmp r0,#0x2
0203dd00  bhi 0x0203dd3c
0203dd04  mov r0,#0x1
0203dd08  mov r1,#0x4
0203dd0c  blx 0x02064e3c
0203dd10  b 0x0203dd3c
0203dd14  sub r1,r1,#0x3
0203dd18  cmp r1,#0x2
0203dd1c  ldrls r0,[r0,#0xad8]
0203dd20  ldrls r0,[r0,#0x8e4]
0203dd24  subls r0,r0,#0x3
0203dd28  cmpls r0,#0x2
0203dd2c  bhi 0x0203dd3c
0203dd30  mov r0,#0x1
0203dd34  mov r1,#0x5
0203dd38  blx 0x02064e3c
0203dd3c  ldr r4,[0x203e0d0]
0203dd40  ldr r5,[0x203e0d4]
0203dd44  ldr r10,[0x203e0c4]
0203dd48  mov r9,#0x0
0203dd4c  sub r6,r4,#0x4
0203dd50  mov r11,#0x1
0203dd54  ldr r12,[r10,r9,lsl #0x2]
0203dd58  ldr r0,[r12,#0x8e4]
0203dd5c  cmp r0,#0x1
0203dd60  bne 0x0203ddd4
0203dd64  add r2,r12,#0x800
0203dd68  ldrh r1,[r2,#0xc8]
0203dd6c  cmp r1,#0x0
0203dd70  beq 0x0203dd84
0203dd74  cmp r1,#0x20
0203dd78  ldrheq r2,[r2,#0xca]
0203dd7c  cmpeq r2,#0x20
0203dd80  bne 0x0203dd8c
0203dd84  mov r7,#0x0
0203dd88  b 0x0203de38
0203dd8c  cmp r1,#0x40
0203dd90  addeq r2,r12,#0x800
0203dd94  ldrheq r2,[r2,#0xca]
0203dd98  cmpeq r2,#0x20
0203dd9c  moveq r7,#0x1
0203dda0  beq 0x0203de38
0203dda4  cmp r1,#0x20
0203dda8  addeq r2,r12,#0x800
0203ddac  ldrheq r2,[r2,#0xca]
0203ddb0  cmpeq r2,#0x40
0203ddb4  moveq r7,#0x2
0203ddb8  beq 0x0203de38
0203ddbc  cmp r1,#0x40
0203ddc0  addeq r1,r12,#0x800
0203ddc4  ldrheq r1,[r1,#0xca]
0203ddc8  cmpeq r1,#0x40
0203ddcc  moveq r7,#0x3
0203ddd0  b 0x0203de38
0203ddd4  sub r1,r0,#0x2
0203ddd8  cmp r1,#0x3
0203dddc  bhi 0x0203de38
0203dde0  add r1,r12,#0x800
0203dde4  ldrh r1,[r1,#0xc8]
0203dde8  cmp r1,#0x20
0203ddec  bgt 0x0203de10
0203ddf0  bge 0x0203de34
0203ddf4  cmp r1,#0x0
0203ddf8  bgt 0x0203de04
0203ddfc  beq 0x0203de2c
0203de00  b 0x0203de38
0203de04  cmp r1,#0x10
0203de08  beq 0x0203de2c
0203de0c  b 0x0203de38
0203de10  cmp r1,#0x40
0203de14  bgt 0x0203de20
0203de18  moveq r8,#0x2
0203de1c  b 0x0203de38
0203de20  cmp r1,#0x80
0203de24  moveq r8,#0x3
0203de28  b 0x0203de38
0203de2c  mov r8,#0x0
0203de30  b 0x0203de38
0203de34  mov r8,#0x1
0203de38  ldr r1,[r12,#0x8dc]
0203de3c  ldr r2,[r12,#0x968]
0203de40  ldr r3,[r12,#0x964]
0203de44  cmp r1,#0x4
0203de48  movne r1,#0x1
0203de4c  moveq r1,#0x0
0203de50  cmp r9,#0x3
0203de54  mov lr,r9, lsr #0x1
0203de58  mov r2,r2, lsr #0xb
0203de5c  mov r3,r3, lsr #0xe
0203de60  addls pc,pc,r9, lsl #0x2
0203de64  b 0x0203e0b0
0203de68  b 0x0203de78
0203de6c  b 0x0203dec0
0203de70  b 0x0203deec
0203de74  b 0x0203dfd0
0203de78  cmp r0,#0x1
0203de7c  bne 0x0203e0b0
0203de80  ldrh r0,[r6,#0x0]
0203de84  and r0,r0,#0x43
0203de88  orr r0,r0,r7, lsl #0xe
0203de8c  orr r0,r0,r1, lsl #0x7
0203de90  orr r0,r0,r2, lsl #0x8
0203de94  orr r0,r0,r3, lsl #0x2
0203de98  orr r0,r0,lr, lsl #0xd
0203de9c  strh r0,[r6,#0x0]
0203dea0  blx 0x02065d24
0203dea4  ldr r1,[r5,r9,lsl #0x2]
0203dea8  str r0,[r1,#0x1c]
0203deac  ldr r1,[r10,r9,lsl #0x2]
0203deb0  ldr r0,[r5,r9,lsl #0x2]
0203deb4  ldr r1,[r1,#0x95c]
0203deb8  str r1,[r0,#0x4]
0203debc  b 0x0203e0b0
0203dec0  str r11,[sp,#0x0]
0203dec4  mov r0,r7
0203dec8  bl 0x0203e0d8
0203decc  blx 0x02065cd8
0203ded0  ldr r1,[r5,r9,lsl #0x2]
0203ded4  str r0,[r1,#0x1c]
0203ded8  ldr r1,[r10,r9,lsl #0x2]
0203dedc  ldr r0,[r5,r9,lsl #0x2]
0203dee0  ldr r1,[r1,#0x95c]
0203dee4  str r1,[r0,#0x4]
0203dee8  b 0x0203e0b0
0203deec  cmp r0,#0x1
0203def0  bne 0x0203df14
0203def4  ldrh r0,[r4,#0x0]
0203def8  and r0,r0,#0x43
0203defc  orr r0,r0,r7, lsl #0xe
0203df00  orr r0,r0,r1, lsl #0x7
0203df04  orr r0,r0,r2, lsl #0x8
0203df08  orr r0,r0,r3, lsl #0x2
0203df0c  strh r0,[r4,#0x0]
0203df10  b 0x0203dfac
0203df14  cmp r0,#0x2
0203df18  bne 0x0203df2c
0203df1c  ldr r1,[r12,#0x970]
0203df20  mov r0,r8
0203df24  bl 0x0203e10c
0203df28  b 0x0203dfac
0203df2c  cmp r0,#0x3
0203df30  bne 0x0203df58
0203df34  ldr r0,[r12,#0x970]
0203df38  ldrh r1,[r4,#0x0]
0203df3c  and r1,r1,#0x43
0203df40  orr r1,r1,r8, lsl #0xe
0203df44  orr r1,r1,r3, lsl #0x2
0203df48  orr r1,r1,r2, lsl #0x8
0203df4c  orr r0,r1,r0, lsl #0xd
0203df50  strh r0,[r4,#0x0]
0203df54  b 0x0203dfac
0203df58  cmp r0,#0x4
0203df5c  bne 0x0203df84
0203df60  ldr r0,[r12,#0x970]
0203df64  ldrh r1,[r4,#0x0]
0203df68  and r1,r1,#0x43
0203df6c  orr r1,r1,r8, lsl #0xe
0203df70  orr r1,r1,#0x80
0203df74  orr r1,r1,r3, lsl #0x8
0203df78  orr r0,r1,r0, lsl #0xd
0203df7c  strh r0,[r4,#0x0]
0203df80  b 0x0203dfac
0203df84  cmp r0,#0x5
0203df88  bne 0x0203dfac
0203df8c  ldr r0,[r12,#0x970]
0203df90  ldrh r1,[r4,#0x0]
0203df94  and r1,r1,#0x43
0203df98  orr r1,r1,r8, lsl #0xe
0203df9c  orr r1,r1,#0x84
0203dfa0  orr r1,r1,r3, lsl #0x8
0203dfa4  orr r0,r1,r0, lsl #0xd
0203dfa8  strh r0,[r4,#0x0]
0203dfac  bl 0x02065eb8
0203dfb0  blx 0x02065c70
0203dfb4  ldr r1,[r5,r9,lsl #0x2]
0203dfb8  str r0,[r1,#0x1c]
0203dfbc  ldr r1,[r10,r9,lsl #0x2]
0203dfc0  ldr r0,[r5,r9,lsl #0x2]
0203dfc4  ldr r1,[r1,#0x95c]
0203dfc8  str r1,[r0,#0x4]
0203dfcc  b 0x0203e0b0
0203dfd0  cmp r0,#0x1
0203dfd4  bne 0x0203dff8
0203dfd8  ldrh r0,[r4,#0x2]
0203dfdc  and r0,r0,#0x43
0203dfe0  orr r0,r0,r7, lsl #0xe
0203dfe4  orr r0,r0,r1, lsl #0x7
0203dfe8  orr r0,r0,r2, lsl #0x8
0203dfec  orr r0,r0,r3, lsl #0x2
0203dff0  strh r0,[r4,#0x2]
0203dff4  b 0x0203e090
0203dff8  cmp r0,#0x2
0203dffc  bne 0x0203e024
0203e000  ldr r0,[r12,#0x970]
0203e004  ldrh r1,[r4,#0x2]
0203e008  and r1,r1,#0x43
0203e00c  orr r1,r1,r8, lsl #0xe
0203e010  orr r1,r1,r2, lsl #0x8
0203e014  orr r1,r1,r3, lsl #0x2
0203e018  orr r0,r1,r0, lsl #0xd
0203e01c  strh r0,[r4,#0x2]
0203e020  b 0x0203e090
0203e024  cmp r0,#0x3
0203e028  bne 0x0203e03c
0203e02c  ldr r1,[r12,#0x970]
0203e030  mov r0,r8
0203e034  bl 0x0203e138
0203e038  b 0x0203e090
0203e03c  cmp r0,#0x4
0203e040  bne 0x0203e068
0203e044  ldr r0,[r12,#0x970]
0203e048  ldrh r1,[r4,#0x2]
0203e04c  and r1,r1,#0x43
0203e050  orr r1,r1,r8, lsl #0xe
0203e054  orr r1,r1,#0x80
0203e058  orr r1,r1,r3, lsl #0x8
0203e05c  orr r0,r1,r0, lsl #0xd
0203e060  strh r0,[r4,#0x2]
0203e064  b 0x0203e090
0203e068  cmp r0,#0x5
0203e06c  bne 0x0203e090
0203e070  ldr r0,[r12,#0x970]
0203e074  ldrh r1,[r4,#0x2]
0203e078  and r1,r1,#0x43
0203e07c  orr r1,r1,r8, lsl #0xe
0203e080  orr r1,r1,#0x84
0203e084  orr r1,r1,r3, lsl #0x8
0203e088  orr r0,r1,r0, lsl #0xd
0203e08c  strh r0,[r4,#0x2]
0203e090  bl 0x02065dc0
0203e094  blx 0x02065be8
0203e098  ldr r1,[r5,r9,lsl #0x2]
0203e09c  str r0,[r1,#0x1c]
0203e0a0  ldr r1,[r10,r9,lsl #0x2]
0203e0a4  ldr r0,[r5,r9,lsl #0x2]
0203e0a8  ldr r1,[r1,#0x95c]
0203e0ac  str r1,[r0,#0x4]
0203e0b0  add r9,r9,#0x1
0203e0b4  cmp r9,#0x4
0203e0b8  bcc 0x0203dd54
0203e0bc  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
