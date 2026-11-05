021bad90  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
021bad94  sub sp,sp,#0x10
021bad98  ldr r0,[r0,#0x4]
021bad9c  ldr r6,[r0,#0x10]
021bada0  ldrb r0,[r6,#0xa3]
021bada4  cmp r0,#0x0
021bada8  beq 0x021bb350
021badac  mov r0,#0x0
021badb0  strb r0,[r6,#0xa3]
021badb4  ldr r2,[r6,#0x0]
021badb8  ldr r1,[r6,#0x64]
021badbc  mov r0,#0x24
021badc0  mla r4,r1,r0,r2
021badc4  blx 0x021b65bc
021badc8  ldr r0,[r6,#0x64]
021badcc  mov r2,#0x0
021badd0  strb r0,[r6,#0x98]
021badd4  add r1,r6,r2, lsl #0x2
021badd8  ldr r0,[r1,#0x68]
021baddc  add r2,r2,#0x1
021bade0  str r0,[r1,#0x80]
021bade4  cmp r2,#0x6
021bade8  blt 0x021badd4
021badec  ldrsh r1,[r4,#0x2]
021badf0  mov r2,#0x1
021badf4  mov r0,#0x0
021badf8  strb r1,[r6,#0x9c]
021badfc  ldrsb r1,[r4,#0x0]
021bae00  strb r1,[r6,#0x9e]
021bae04  ldrsb r1,[r4,#0x1]
021bae08  strb r1,[r6,#0x9f]
021bae0c  strb r2,[r6,#0xa4]
021bae10  strb r0,[r6,#0xa7]
021bae14  strb r0,[r6,#0xa6]
021bae18  strb r2,[r6,#0xa2]
021bae1c  ldrsb r0,[r6,#0x9c]
021bae20  cmp r0,#0x2
021bae24  moveq r2,#0x2
021bae28  mov r0,#0x0
021bae2c  strb r2,[r6,#0xa0]
021bae30  strb r0,[r6,#0x9b]
021bae34  strb r0,[r6,#0x9d]
021bae38  ldrsb r1,[r6,#0xa1]
021bae3c  sub r0,r0,#0x1
021bae40  cmp r1,r0
021bae44  strbne r1,[r6,#0xa0]
021bae48  ldrsb r2,[r6,#0x9c]
021bae4c  ldr r1,[0x21bb358]
021bae50  mov r0,r6
021bae54  ldr r1,[r1,r2,lsl #0x2]
021bae58  blx r1
021bae5c  ldrsb r2,[r6,#0x9c]
021bae60  mov r11,r0
021bae64  ldrsb r1,[r6,#0x9f]
021bae68  sub r0,r2,#0x1
021bae6c  mov r0,r0, lsl #0x18
021bae70  mov r0,r0, asr #0x18
021bae74  and r0,r0,#0xff
021bae78  cmp r0,#0x1
021bae7c  bhi 0x021bae8c
021bae80  cmp r1,#0x12
021bae84  movlt r1,#0x12
021bae88  b 0x021bae94
021bae8c  cmp r1,#0x8
021bae90  movlt r1,#0x8
021bae94  cmp r2,#0x9
021bae98  addls pc,pc,r2, lsl #0x2
021bae9c  b 0x021baec8
021baea0  b 0x021baec8
021baea4  b 0x021baec8
021baea8  b 0x021baec8
021baeac  b 0x021baed0
021baeb0  b 0x021baed0
021baeb4  b 0x021baec8
021baeb8  b 0x021baed0
021baebc  b 0x021baed0
021baec0  b 0x021baed0
021baec4  b 0x021baed0
021baec8  mov r5,#0x0
021baecc  b 0x021baed4
021baed0  mov r5,#0x1
021baed4  mov r0,#0xc
021baed8  smulbb r0,r1,r0
021baedc  add r0,r0,#0x10
021baee0  strh r0,[r6,#0x60]
021baee4  ldrsh r0,[r6,#0x60]
021baee8  mov r2,#0x1
021baeec  mov r1,r0, lsr #0x1f
021baef0  rsb r0,r1,r0, lsl #0x1d
021baef4  adds r0,r1,r0, ror #0x1d
021baef8  rsbne r0,r0,#0x8
021baefc  moveq r0,#0x0
021baf00  ldrsh r1,[r6,#0x60]
021baf04  mov r0,r0, lsl #0x10
021baf08  add r0,r1,r0, asr #0x10
021baf0c  strh r0,[r6,#0x60]
021baf10  ldrsb r0,[r6,#0x9e]
021baf14  mov r0,r0, lsl #0x4
021baf18  add r0,r0,#0x10
021baf1c  strh r0,[r6,#0x62]
021baf20  ldrsb r0,[r6,#0x9c]
021baf24  ldrsh r1,[r6,#0x62]
021baf28  cmp r0,#0x1
021baf2c  cmpne r0,#0x2
021baf30  movne r2,#0x0
021baf34  cmp r2,#0x0
021baf38  movne r0,#0x18
021baf3c  moveq r0,#0x0
021baf40  mov r0,r0, lsl #0x10
021baf44  add r0,r1,r0, asr #0x10
021baf48  strh r0,[r6,#0x62]
021baf4c  cmp r5,#0x0
021baf50  movne r0,#0x8
021baf54  moveq r0,#0x0
021baf58  ldrsh r1,[r6,#0x62]
021baf5c  mov r0,r0, lsl #0x10
021baf60  add r0,r1,r0, asr #0x10
021baf64  strh r0,[r6,#0x62]
021baf68  ldrsh r0,[r6,#0x60]
021baf6c  mov r1,#0x0
021baf70  add r0,r0,r0, lsr #0x1f
021baf74  mov r0,r0, asr #0x1
021baf78  rsb r0,r0,#0x80
021baf7c  strh r0,[r6,#0x5c]
021baf80  ldrsh r0,[r6,#0x62]
021baf84  add r0,r0,r0, lsr #0x1f
021baf88  mov r0,r0, asr #0x1
021baf8c  rsb r0,r0,#0x60
021baf90  strh r0,[r6,#0x5e]
021baf94  ldrsh r0,[r6,#0x5c]
021baf98  strh r0,[r6,#0x54]
021baf9c  ldrsh r0,[r6,#0x5e]
021bafa0  strh r0,[r6,#0x56]
021bafa4  ldrsh r0,[r6,#0x60]
021bafa8  mov r0,r0, asr #0x3
021bafac  strh r0,[r6,#0x58]
021bafb0  ldrsh r0,[r6,#0x62]
021bafb4  mov r0,r0, asr #0x3
021bafb8  strh r0,[r6,#0x5a]
021bafbc  ldrsh r0,[r6,#0x58]
021bafc0  cmp r0,#0x4
021bafc4  movlt r0,#0x4
021bafc8  strhlt r0,[r6,#0x58]
021bafcc  ldrsh r0,[r6,#0x5a]
021bafd0  cmp r0,#0x4
021bafd4  movlt r0,#0x4
021bafd8  strhlt r0,[r6,#0x5a]
021bafdc  ldr r0,[r6,#0x1c]
021bafe0  ldr r0,[r0,#0x4]
021bafe4  ldr r0,[r0,#0x64]
021bafe8  ldr r2,[r0,#0x0]
021bafec  ldr r2,[r2,#0x7c]
021baff0  blx r2
021baff4  ldrsb r0,[r6,#0x9c]
021baff8  cmp r0,#0x9
021baffc  addls pc,pc,r0, lsl #0x2
021bb000  b 0x021bb02c
021bb004  b 0x021bb02c
021bb008  b 0x021bb058
021bb00c  b 0x021bb07c
021bb010  b 0x021bb040
021bb014  b 0x021bb040
021bb018  b 0x021bb0a0
021bb01c  b 0x021bb0ac
021bb020  b 0x021bb0bc
021bb024  b 0x021bb0bc
021bb028  b 0x021bb0bc
021bb02c  mov r0,r6
021bb030  bl 0x021bc1a4
021bb034  mov r0,r6
021bb038  bl 0x021bcad4
021bb03c  b 0x021bb0d0
021bb040  mov r0,r6
021bb044  mov r1,#0x0
021bb048  bl 0x021bc4c4
021bb04c  mov r0,r6
021bb050  bl 0x021bcad4
021bb054  b 0x021bb0d0
021bb058  mov r0,r6
021bb05c  bl 0x021bc1a4
021bb060  mov r0,r6
021bb064  mov r1,#0x0
021bb068  bl 0x021bcc28
021bb06c  ldrsb r1,[r6,#0xa0]
021bb070  mov r0,r6
021bb074  bl 0x021bc06c
021bb078  b 0x021bb0d0
021bb07c  mov r0,r6
021bb080  bl 0x021bc1a4
021bb084  mov r0,r6
021bb088  mov r1,#0x1
021bb08c  bl 0x021bcc28
021bb090  ldrsb r1,[r6,#0xa0]
021bb094  mov r0,r6
021bb098  bl 0x021bc06c
021bb09c  b 0x021bb0d0
021bb0a0  mov r0,r6
021bb0a4  bl 0x021bc1a4
021bb0a8  b 0x021bb0d0
021bb0ac  mov r0,r6
021bb0b0  mov r1,#0x0
021bb0b4  bl 0x021bc4c4
021bb0b8  b 0x021bb0d0
021bb0bc  mov r0,r6
021bb0c0  mov r1,#0x1
021bb0c4  bl 0x021bc4c4
021bb0c8  mov r0,r6
021bb0cc  bl 0x021bcad4
021bb0d0  ldrsb r1,[r6,#0x98]
021bb0d4  ldr r2,[r6,#0x0]
021bb0d8  mov r0,#0x24
021bb0dc  mla r7,r1,r0,r2
021bb0e0  bl 0x021bbf80
021bb0e4  ldr r1,[r6,#0x18]
021bb0e8  mov r4,#0x0
021bb0ec  ldr r0,[0x21bb35c]
021bb0f0  ldr r1,[r1,#0x4]
021bb0f4  mov r8,r4
021bb0f8  str r1,[r0,#0x0]
021bb0fc  add r0,r6,r4, lsl #0x2
021bb100  ldr r0,[r0,#0x20]
021bb104  cmp r0,#0x0
021bb108  beq 0x021bb120
021bb10c  ldr r1,[r0,#0x0]
021bb110  ldr r1,[r1,#0x8]
021bb114  blx r1
021bb118  add r0,r6,r4, lsl #0x2
021bb11c  str r8,[r0,#0x20]
021bb120  add r4,r4,#0x1
021bb124  cmp r4,#0x8
021bb128  blt 0x021bb0fc
021bb12c  ldr r0,[0x21bb360]
021bb130  ldr r0,[r0,#0x0]
021bb134  blx r0
021bb138  cmp r5,#0x0
021bb13c  movne r10,#0x10
021bb140  moveq r10,#0x8
021bb144  mov r9,#0x0
021bb148  add r4,r6,#0xcf
021bb14c  add r5,r7,#0x4
021bb150  b 0x021bb29c
021bb154  cmp r11,#0x0
021bb158  addne r0,r7,r9, lsl #0x2
021bb15c  ldrne r0,[r0,#0x4]
021bb160  addne r1,r5,r9, lsl #0x2
021bb164  addne r8,r1,r0
021bb168  moveq r0,#0x2a
021bb16c  mlaeq r8,r9,r0,r4
021bb170  mov r0,r8
021bb174  bl 0x02074294
021bb178  mov r1,#0xc
021bb17c  mul r2,r0,r1
021bb180  mov r1,r2, lsr #0x1f
021bb184  rsb r0,r1,r2, lsl #0x1d
021bb188  adds r0,r1,r0, ror #0x1d
021bb18c  rsbne r0,r0,#0x8
021bb190  moveq r0,#0x0
021bb194  add r0,r2,r0
021bb198  mov r1,#0x0
021bb19c  str r1,[sp,#0x0]
021bb1a0  ldr r2,[0x21bb364]
021bb1a4  mov r1,#0x10
021bb1a8  mov r3,#0x0
021bb1ac  bl 0x021ca3a4
021bb1b0  add r1,r6,r9, lsl #0x2
021bb1b4  str r0,[r1,#0x20]
021bb1b8  ldr r0,[r0,#0x4]
021bb1bc  mov r1,#0x0
021bb1c0  ldr r0,[r0,#0x64]
021bb1c4  ldr r2,[r0,#0x0]
021bb1c8  ldr r2,[r2,#0xa4]
021bb1cc  blx r2
021bb1d0  add r0,r6,r9, lsl #0x2
021bb1d4  ldr r0,[r0,#0x20]
021bb1d8  mov r1,#0x0
021bb1dc  ldr r0,[r0,#0x4]
021bb1e0  ldr r0,[r0,#0x64]
021bb1e4  ldr r2,[r0,#0x0]
021bb1e8  ldr r2,[r2,#0xa8]
021bb1ec  blx r2
021bb1f0  add r0,r6,r9, lsl #0x2
021bb1f4  ldr r0,[r0,#0x20]
021bb1f8  mov r1,r8
021bb1fc  ldr r0,[r0,#0x4]
021bb200  ldr r0,[r0,#0x64]
021bb204  ldr r2,[r0,#0x0]
021bb208  ldr r2,[r2,#0x68]
021bb20c  blx r2
021bb210  mov r0,#0x8000
021bb214  str r0,[sp,#0xc]
021bb218  add r0,r10,r9, lsl #0x4
021bb21c  mov r0,r0, lsl #0xc
021bb220  str r0,[sp,#0x8]
021bb224  add r0,r6,r9, lsl #0x2
021bb228  ldr r0,[r0,#0x20]
021bb22c  add r1,sp,#0xc
021bb230  add r2,sp,#0x8
021bb234  bl 0x021bb970
021bb238  mov r0,#0x20000
021bb23c  str r0,[sp,#0x4]
021bb240  add r0,r6,r9, lsl #0x2
021bb244  ldr r0,[r0,#0x20]
021bb248  add r1,sp,#0x4
021bb24c  bl 0x021bbde0
021bb250  add r0,r6,r9, lsl #0x2
021bb254  ldr r1,[r6,#0x1c]
021bb258  ldr r0,[r0,#0x20]
021bb25c  cmp r1,#0x0
021bb260  ldr r0,[r0,#0x4]
021bb264  bne 0x021bb27c
021bb268  ldr r2,[r0,#0x0]
021bb26c  mov r1,#0x0
021bb270  ldr r2,[r2,#0xd4]
021bb274  blx r2
021bb278  b 0x021bb28c
021bb27c  ldr r2,[r0,#0x0]
021bb280  ldr r1,[r1,#0x4]
021bb284  ldr r2,[r2,#0xd4]
021bb288  blx r2
021bb28c  ldr r0,[0x21bb360]
021bb290  ldr r0,[r0,#0x0]
021bb294  blx r0
021bb298  add r9,r9,#0x1
021bb29c  ldrsb r0,[r6,#0x9e]
021bb2a0  cmp r9,r0
021bb2a4  blt 0x021bb154
021bb2a8  bl 0x021bc03c
021bb2ac  ldrsb r0,[r6,#0x9c]
021bb2b0  sub r0,r0,#0x1
021bb2b4  mov r0,r0, lsl #0x18
021bb2b8  mov r0,r0, asr #0x18
021bb2bc  and r0,r0,#0xff
021bb2c0  cmp r0,#0x1
021bb2c4  bhi 0x021bb310
021bb2c8  ldrsb r1,[r6,#0xa0]
021bb2cc  mov r0,r6
021bb2d0  bl 0x021bc06c
021bb2d4  ldrsb r4,[r6,#0xa0]
021bb2d8  cmp r4,#0x2
021bb2dc  bne 0x021bb2fc
021bb2e0  add r0,r6,r4, lsl #0x2
021bb2e4  ldr r0,[r0,#0x48]
021bb2e8  mov r1,#0x8
021bb2ec  ldr r0,[r0,#0x4]
021bb2f0  ldr r2,[r0,#0x0]
021bb2f4  ldr r2,[r2,#0x14c]
021bb2f8  blx r2
021bb2fc  add r0,r6,r4, lsl #0x2
021bb300  ldr r0,[r0,#0x48]
021bb304  mov r1,#0x1
021bb308  ldr r0,[r0,#0x4]
021bb30c  blx 0x021b6214
021bb310  ldrb r0,[r6,#0xa5]
021bb314  cmp r0,#0x0
021bb318  beq 0x021bb340
021bb31c  ldrsb r0,[r6,#0x99]
021bb320  ldrb r4,[r6,#0x9a]
021bb324  ldr r3,[0x21bb368]
021bb328  ldr r1,[0x21bb36c]
021bb32c  mov r2,r0, lsl #0x1
021bb330  ldrb r0,[r3,r4,lsl #0x1]
021bb334  ldrh r2,[r1,r2]
021bb338  mov r1,#0x0
021bb33c  bl 0x02073f24
021bb340  ldr r0,[r6,#0x10]
021bb344  ldr r1,[0x21bb370]
021bb348  ldr r0,[r0,#0x4]
021bb34c  bl 0x02028384
021bb350  add sp,sp,#0x10
021bb354  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
