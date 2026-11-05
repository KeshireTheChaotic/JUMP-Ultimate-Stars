01ff804c  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
01ff8050  sub sp,sp,#0xc8
01ff8054  mov r10,r0
01ff8058  ldrsh r1,[r10,#0x4a]
01ff805c  mvn r0,#0x0
01ff8060  cmp r1,r0
01ff8064  beq 0x01ff8acc
01ff8068  add r0,sp,#0xb0
01ff806c  add r1,r10,#0x14
01ff8070  bl 0x0202534c
01ff8074  add r0,sp,#0xb0
01ff8078  ldr r0,[r0,#0x0]
01ff807c  rsb r0,r0,r0, lsl #0x5
01ff8080  movs r5,r0, lsr #0xc
01ff8084  ldrne r0,[0x1ff8ad4]
01ff8088  ldrne r4,[r10,#0x20]
01ff808c  ldrne r0,[r0,#0x420]
01ff8090  cmpne r4,r0
01ff8094  beq 0x01ff8acc
01ff8098  mov r0,r4
01ff809c  ldr r2,[r0,#0x0]
01ff80a0  mov r1,#0x0
01ff80a4  ldr r2,[r2,#0x34]
01ff80a8  blx r2
01ff80ac  mov r0,#0x0
01ff80b0  str r5,[sp,#0x0]
01ff80b4  mov r1,r0
01ff80b8  mov r2,#0x3
01ff80bc  mov r3,#0x1f
01ff80c0  str r0,[sp,#0x4]
01ff80c4  bl 0x0203ae18
01ff80c8  add r0,r10,#0x14
01ff80cc  bl 0x02019ddc
01ff80d0  mov r6,r0
01ff80d4  add r0,r10,#0x14
01ff80d8  bl 0x02019ddc
01ff80dc  ldr r1,[r0,#0x0]
01ff80e0  ldr r1,[r1,#0x18]
01ff80e4  blx r1
01ff80e8  ldr r0,[r10,#0x38]
01ff80ec  ldr r0,[r0,#0x50]
01ff80f0  ldr r1,[r0,#0x0]
01ff80f4  ldr r1,[r1,#0x4c]
01ff80f8  blx r1
01ff80fc  mov r5,r0
01ff8100  ldrh r2,[r10,#0x24]
01ff8104  ldr r0,[0x1ff8ad8]
01ff8108  ldr r1,[0x1ff8adc]
01ff810c  and r0,r2,r0
01ff8110  mov r0,r0, lsl #0x10
01ff8114  mov r0,r0, lsr #0x10
01ff8118  str r0,[r1,#0x0]
01ff811c  ldrsh r1,[r10,#0x4a]
01ff8120  mov r0,r4
01ff8124  bl 0x02043c18
01ff8128  str r0,[sp,#0x5c]
01ff812c  cmp r0,#0x0
01ff8130  beq 0x01ff8acc
01ff8134  ldrsh r1,[r10,#0x4a]
01ff8138  mov r0,r4
01ff813c  bl 0x02043c5c
01ff8140  ldr r2,[r10,#0x38]
01ff8144  str r0,[sp,#0x58]
01ff8148  ldr r2,[r2,#0x50]
01ff814c  ldrb r1,[r4,#0x7c]
01ff8150  ldrb r0,[r2,#0x25]
01ff8154  cmp r1,#0x0
01ff8158  mov r0,r0, lsl #0x1e
01ff815c  mov r0,r0, lsr #0x1f
01ff8160  str r0,[sp,#0x40]
01ff8164  beq 0x01ff8288
01ff8168  ldr r0,[sp,#0x40]
01ff816c  cmp r0,#0x0
01ff8170  bne 0x01ff8288
01ff8174  ldr r1,[sp,#0x5c]
01ff8178  ldr r0,[sp,#0x58]
01ff817c  mov r2,#0x6
01ff8180  ldrb r3,[r10,#0x49]
01ff8184  mla r7,r1,r2,r0
01ff8188  mov r8,r3, lsl #0x1
01ff818c  add r0,r8,#0x1
01ff8190  mov r0,r0, lsl #0x1
01ff8194  ldrsh r2,[r7,r0]
01ff8198  add r0,sp,#0xac
01ff819c  add r1,r5,#0xc
01ff81a0  mov r2,r2, lsl #0xc
01ff81a4  str r2,[sp,#0xac]
01ff81a8  bl 0x02018ac8
01ff81ac  ldr r2,[sp,#0xac]
01ff81b0  ldr r0,[r5,#0x14]
01ff81b4  rsb r1,r8,#0x1
01ff81b8  mla r0,r2,r1,r0
01ff81bc  cmp r0,#0xc0000
01ff81c0  bge 0x01ff8acc
01ff81c4  ldrb r8,[r10,#0x49]
01ff81c8  add r0,sp,#0xa8
01ff81cc  add r1,r5,#0xc
01ff81d0  rsb r2,r8,#0x1
01ff81d4  mov r2,r2, lsl #0x1
01ff81d8  add r2,r2,#0x1
01ff81dc  mov r2,r2, lsl #0x1
01ff81e0  ldrsh r2,[r7,r2]
01ff81e4  mov r2,r2, lsl #0xc
01ff81e8  str r2,[sp,#0xa8]
01ff81ec  bl 0x02018ac8
01ff81f0  mov r1,r8, lsl #0x1
01ff81f4  ldr r2,[sp,#0xa8]
01ff81f8  ldr r0,[r5,#0x14]
01ff81fc  rsb r1,r1,#0x1
01ff8200  mla r0,r2,r1,r0
01ff8204  cmp r0,#0x0
01ff8208  ble 0x01ff8acc
01ff820c  ldrb r2,[r10,#0x48]
01ff8210  add r0,sp,#0xa4
01ff8214  mov r1,r5
01ff8218  mov r8,r2, lsl #0x1
01ff821c  mov r2,r8, lsl #0x1
01ff8220  ldrsh r2,[r7,r2]
01ff8224  mov r2,r2, lsl #0xc
01ff8228  str r2,[sp,#0xa4]
01ff822c  bl 0x02018ac8
01ff8230  ldr r2,[sp,#0xa4]
01ff8234  ldr r0,[r5,#0x10]
01ff8238  rsb r1,r8,#0x1
01ff823c  mla r0,r2,r1,r0
01ff8240  cmp r0,#0x100000
01ff8244  bge 0x01ff8acc
01ff8248  ldrb r8,[r10,#0x48]
01ff824c  add r0,sp,#0xa0
01ff8250  mov r1,r5
01ff8254  rsb r2,r8,#0x1
01ff8258  mov r2,r2, lsl #0x2
01ff825c  ldrsh r2,[r7,r2]
01ff8260  mov r2,r2, lsl #0xc
01ff8264  str r2,[sp,#0xa0]
01ff8268  bl 0x02018ac8
01ff826c  mov r1,r8, lsl #0x1
01ff8270  ldr r2,[sp,#0xa0]
01ff8274  ldr r0,[r5,#0x10]
01ff8278  rsb r1,r1,#0x1
01ff827c  mla r0,r2,r1,r0
01ff8280  cmp r0,#0x0
01ff8284  ble 0x01ff8acc
01ff8288  ldr r0,[0x1ff8ae0]
01ff828c  mov r1,#0x1
01ff8290  mov r9,#0x0
01ff8294  str r1,[r0,#0x0]
01ff8298  str r9,[r0,#0x14]
01ff829c  ldr r1,[r10,#0x34]
01ff82a0  ldr r3,[r5,#0x10]
01ff82a4  sub r2,r9,#0x1000
01ff82a8  ldr r8,[r1,#0x4bc]
01ff82ac  mov r1,r2
01ff82b0  ldr r7,[r5,#0x14]
01ff82b4  and r2,r3,r2
01ff82b8  str r2,[r0,#0x30]
01ff82bc  and r1,r7,r1
01ff82c0  str r1,[r0,#0x30]
01ff82c4  mov r1,r8, lsl #0x8
01ff82c8  str r1,[r0,#0x30]
01ff82cc  ldr r1,[sp,#0x40]
01ff82d0  cmp r1,#0x0
01ff82d4  beq 0x01ff82f0
01ff82d8  mov r1,#0x100000
01ff82dc  str r1,[r0,#0x2c]
01ff82e0  str r1,[r0,#0x2c]
01ff82e4  mov r1,#0x1000
01ff82e8  str r1,[r0,#0x2c]
01ff82ec  b 0x01ff8330
01ff82f0  ldr r1,[r5,#0x0]
01ff82f4  ldr r2,[r5,#0xc]
01ff82f8  mov r3,r1, lsl #0xc
01ff82fc  mov r7,r2, lsl #0xc
01ff8300  mov r2,r3, asr #0x5
01ff8304  mov r1,r7, asr #0x5
01ff8308  add r2,r3,r2, lsr #0x1a
01ff830c  add r1,r7,r1, lsr #0x1a
01ff8310  mov r2,r2, asr #0x6
01ff8314  mov r3,r1, asr #0x6
01ff8318  mov r1,r2, lsl #0x2
01ff831c  str r1,[r0,#0x2c]
01ff8320  mov r1,r3, lsl #0x2
01ff8324  str r1,[r0,#0x2c]
01ff8328  mov r1,#0x1000
01ff832c  str r1,[r0,#0x2c]
01ff8330  ldr r0,[sp,#0x5c]
01ff8334  mov r1,r0, lsl #0x6
01ff8338  ldr r0,[r10,#0x68]
01ff833c  add r7,r1,#0x8
01ff8340  cmp r0,r7
01ff8344  ldr r0,[r6,#0x20]
01ff8348  str r0,[sp,#0x54]
01ff834c  ldr r0,[r4,#0x50]
01ff8350  str r0,[sp,#0x3c]
01ff8354  bcs 0x01ff8390
01ff8358  ldr r6,[r10,#0x64]
01ff835c  cmp r6,#0x0
01ff8360  beq 0x01ff8380
01ff8364  mov r0,r6
01ff8368  bl 0x0201a9ec
01ff836c  cmp r0,#0x0
01ff8370  bne 0x01ff8380
01ff8374  mov r0,r6
01ff8378  mov r1,#0x1
01ff837c  bl 0x0201a958
01ff8380  mov r0,r7
01ff8384  bl 0x0201a228
01ff8388  str r0,[r10,#0x64]
01ff838c  str r7,[r10,#0x68]
01ff8390  ldrb r2,[r10,#0x48]
01ff8394  ldrb r1,[r10,#0x49]
01ff8398  ldr r0,[sp,#0x40]
01ff839c  cmp r0,#0x0
01ff83a0  orr r1,r2,r1, lsl #0x1
01ff83a4  ldrsheq r2,[r10,#0x4a]
01ff83a8  ldrsheq r0,[r10,#0x4c]
01ff83ac  ldreq r3,[r10,#0x58]
01ff83b0  addeq r0,r2,r0
01ff83b4  cmpeq r3,r0
01ff83b8  ldreq r0,[r10,#0x20]
01ff83bc  ldreq r2,[r10,#0x5c]
01ff83c0  ldreq r0,[r0,#0x8]
01ff83c4  cmpeq r2,r0
01ff83c8  ldreq r2,[r10,#0x50]
01ff83cc  ldreq r0,[sp,#0x54]
01ff83d0  cmpeq r0,r2
01ff83d4  ldreq r0,[r10,#0x60]
01ff83d8  cmpeq r0,r1
01ff83dc  ldreq r2,[r10,#0x54]
01ff83e0  ldreq r0,[sp,#0x3c]
01ff83e4  cmpeq r0,r2
01ff83e8  beq 0x01ff8aa4
01ff83ec  ldrsh r3,[r10,#0x4a]
01ff83f0  ldrsh r2,[r10,#0x4c]
01ff83f4  add r0,sp,#0xb4
01ff83f8  add r2,r3,r2
01ff83fc  str r2,[r10,#0x58]
01ff8400  ldr r2,[r10,#0x20]
01ff8404  ldr r2,[r2,#0x8]
01ff8408  str r2,[r10,#0x5c]
01ff840c  str r1,[r10,#0x60]
01ff8410  ldr r1,[r10,#0x64]
01ff8414  ldr r2,[r10,#0x68]
01ff8418  blx 0x02067278
01ff841c  add r0,sp,#0xb4
01ff8420  mov r1,#0x1
01ff8424  blx 0x02066080
01ff8428  mov r0,#0x0
01ff842c  str r0,[sp,#0x50]
01ff8430  b 0x01ff8a64
01ff8434  ldr r2,[sp,#0x50]
01ff8438  ldr r0,[sp,#0x58]
01ff843c  mov r1,#0x6
01ff8440  mla r9,r2,r1,r0
01ff8444  ldrb r0,[r9,#0x4]
01ff8448  ldr r1,[r4,#0x78]
01ff844c  tst r0,#0x40
01ff8450  str r1,[sp,#0x0]
01ff8454  add r0,sp,#0xb4
01ff8458  mov r1,#0x0
01ff845c  bne 0x01ff84a4
01ff8460  str r1,[sp,#0x4]
01ff8464  str r1,[sp,#0x8]
01ff8468  mov r1,#0x1
01ff846c  str r1,[sp,#0xc]
01ff8470  ldr r2,[r4,#0x50]
01ff8474  mov r1,#0x3
01ff8478  str r2,[sp,#0x10]
01ff847c  ldr r3,[r4,#0x74]
01ff8480  mov r2,#0x1
01ff8484  blx 0x020660d0
01ff8488  ldrb r3,[r9,#0x5]
01ff848c  ldr r1,[sp,#0x54]
01ff8490  add r0,sp,#0xb4
01ff8494  mov r2,#0x3
01ff8498  add r1,r1,r3, lsl #0x5
01ff849c  blx 0x0206609c
01ff84a0  b 0x01ff84e8
01ff84a4  str r1,[sp,#0x4]
01ff84a8  str r1,[sp,#0x8]
01ff84ac  mov r1,#0x1
01ff84b0  str r1,[sp,#0xc]
01ff84b4  ldr r2,[r4,#0x50]
01ff84b8  mov r1,#0x2
01ff84bc  str r2,[sp,#0x10]
01ff84c0  ldr r3,[r4,#0x74]
01ff84c4  mov r2,#0x1
01ff84c8  add r3,r3,#0x1
01ff84cc  blx 0x020660d0
01ff84d0  ldrb r3,[r9,#0x5]
01ff84d4  ldr r1,[sp,#0x54]
01ff84d8  add r0,sp,#0xb4
01ff84dc  mov r2,#0x2
01ff84e0  add r1,r1,r3, lsl #0x5
01ff84e4  blx 0x0206609c
01ff84e8  ldrh r3,[r9,#0x0]
01ff84ec  ldrb r0,[r9,#0x4]
01ff84f0  ldrb r1,[r10,#0x48]
01ff84f4  mov r2,r3, lsl #0x1b
01ff84f8  mov r2,r2, lsr #0x18
01ff84fc  mov r6,r2, lsl #0xc
01ff8500  mov r2,r3, asr #0x5
01ff8504  mov r7,r2, lsl #0xf
01ff8508  ldr r2,[0x1ff8ae4]
01ff850c  and r3,r0,#0xf
01ff8510  ldr r8,[r2,r3,lsl #0x2]
01ff8514  ldr r2,[0x1ff8ae8]
01ff8518  add r11,r6,r8, lsl #0xf
01ff851c  ldr r3,[r2,r3,lsl #0x2]
01ff8520  mov r2,r8, lsl #0x7
01ff8524  str r2,[sp,#0x30]
01ff8528  mov r2,r3, lsl #0x7
01ff852c  str r2,[sp,#0x2c]
01ff8530  ldr r12,[sp,#0x30]
01ff8534  mov r2,r1, lsl #0x1
01ff8538  add r8,r7,r3, lsl #0xf
01ff853c  rsb r3,r2,#0x1
01ff8540  ldrsb r2,[r9,#0x2]
01ff8544  mul r12,r1,r12
01ff8548  mov r2,r2, lsl #0x4
01ff854c  mul r2,r3,r2
01ff8550  sub r2,r2,r12
01ff8554  mov r2,r2, lsl #0x10
01ff8558  mov r2,r2, lsr #0x10
01ff855c  mov r2,r2, lsl #0x10
01ff8560  ldrsb r3,[r9,#0x3]
01ff8564  mov r2,r2, asr #0x10
01ff8568  ldrb r12,[r10,#0x49]
01ff856c  str r2,[sp,#0x14]
01ff8570  mov r3,r3, lsl #0x4
01ff8574  mov r2,r12, lsl #0x1
01ff8578  rsb r2,r2,#0x1
01ff857c  mul r3,r2,r3
01ff8580  ldr r2,[sp,#0x2c]
01ff8584  tst r0,#0x10
01ff8588  mul r2,r12,r2
01ff858c  sub r2,r3,r2
01ff8590  mov r2,r2, lsl #0x10
01ff8594  mov r2,r2, lsr #0x10
01ff8598  mov r2,r2, lsl #0x10
01ff859c  mov r2,r2, asr #0x10
01ff85a0  str r2,[sp,#0x18]
01ff85a4  movne r2,#0x1
01ff85a8  moveq r2,#0x0
01ff85ac  str r6,[sp,#0x38]
01ff85b0  eors r1,r1,r2
01ff85b4  ldrne r2,[sp,#0x38]
01ff85b8  subne r6,r11,#0x800
01ff85bc  subne r11,r2,#0x800
01ff85c0  tst r0,#0x20
01ff85c4  movne r0,#0x1
01ff85c8  moveq r0,#0x0
01ff85cc  str r7,[sp,#0x34]
01ff85d0  eors r0,r12,r0
01ff85d4  ldrne r2,[sp,#0x34]
01ff85d8  subne r7,r8,#0x800
01ff85dc  subne r8,r2,#0x800
01ff85e0  ldr r2,[sp,#0x40]
01ff85e4  cmp r2,#0x0
01ff85e8  beq 0x01ff895c
01ff85ec  ldr r3,[sp,#0x14]
01ff85f0  ldr r2,[sp,#0x30]
01ff85f4  add r2,r3,r2
01ff85f8  str r2,[sp,#0x4c]
01ff85fc  ldr r3,[sp,#0x18]
01ff8600  ldr r2,[sp,#0x2c]
01ff8604  add r2,r3,r2
01ff8608  str r2,[sp,#0x48]
01ff860c  mov r2,#0x0
01ff8610  str r2,[sp,#0x44]
01ff8614  mov r9,r2
01ff8618  ldr r2,[0x1ff8ad4]
01ff861c  ldrb r2,[r2,#0x19]
01ff8620  cmp r2,#0x0
01ff8624  beq 0x01ff86b0
01ff8628  cmp r1,#0x0
01ff862c  beq 0x01ff8654
01ff8630  ldr r2,[r5,#0x0]
01ff8634  ldr r1,[r5,#0x4]
01ff8638  sub r6,r6,#0x1000
01ff863c  add r1,r2,r1
01ff8640  rsb r1,r1,#0x0
01ff8644  mov r1,r1, asr #0x1
01ff8648  add r11,r11,#0x1000
01ff864c  str r1,[sp,#0x44]
01ff8650  b 0x01ff8670
01ff8654  ldr r2,[r5,#0x0]
01ff8658  ldr r1,[r5,#0x4]
01ff865c  add r6,r6,#0x1000
01ff8660  add r1,r2,r1
01ff8664  mov r1,r1, asr #0x1
01ff8668  sub r11,r11,#0x1000
01ff866c  str r1,[sp,#0x44]
01ff8670  cmp r0,#0x0
01ff8674  beq 0x01ff8698
01ff8678  sub r7,r7,#0x1000
01ff867c  add r8,r8,#0x1000
01ff8680  ldr r1,[r5,#0x8]
01ff8684  ldr r0,[r5,#0xc]
01ff8688  add r0,r1,r0
01ff868c  rsb r0,r0,#0x0
01ff8690  mov r9,r0, asr #0x1
01ff8694  b 0x01ff86b0
01ff8698  add r7,r7,#0x1000
01ff869c  sub r8,r8,#0x1000
01ff86a0  ldr r1,[r5,#0x8]
01ff86a4  ldr r0,[r5,#0xc]
01ff86a8  add r0,r1,r0
01ff86ac  mov r9,r0, asr #0x1
01ff86b0  ldr r1,[sp,#0x44]
01ff86b4  add r0,sp,#0xb4
01ff86b8  add r1,r1,r6
01ff86bc  add r2,r9,r7
01ff86c0  blx 0x02066178
01ff86c4  ldr r0,[sp,#0x18]
01ff86c8  add r1,r5,#0xc
01ff86cc  mov r0,r0, lsl #0xc
01ff86d0  str r0,[sp,#0x28]
01ff86d4  str r0,[sp,#0x90]
01ff86d8  add r0,sp,#0x90
01ff86dc  bl 0x02018ac8
01ff86e0  ldr r0,[sp,#0x14]
01ff86e4  add r1,r5,#0x4
01ff86e8  mov r0,r0, lsl #0xc
01ff86ec  str r0,[sp,#0x24]
01ff86f0  str r0,[sp,#0x94]
01ff86f4  add r0,sp,#0x94
01ff86f8  bl 0x02018ac8
01ff86fc  ldr r0,[sp,#0x28]
01ff8700  ldr r2,[sp,#0x94]
01ff8704  ldr r1,[sp,#0x90]
01ff8708  str r0,[sp,#0x98]
01ff870c  add r1,r2,r1
01ff8710  str r1,[sp,#0x1c]
01ff8714  add r0,sp,#0x98
01ff8718  add r1,r5,#0x8
01ff871c  bl 0x02018ac8
01ff8720  ldr r0,[sp,#0x24]
01ff8724  mov r1,r5
01ff8728  str r0,[sp,#0x9c]
01ff872c  add r0,sp,#0x9c
01ff8730  bl 0x02018ac8
01ff8734  ldr r2,[sp,#0x9c]
01ff8738  ldr r1,[sp,#0x98]
01ff873c  add r0,sp,#0xb4
01ff8740  add r2,r2,r1
01ff8744  mov r1,r2, asr #0xb
01ff8748  add r1,r2,r1, lsr #0x14
01ff874c  ldr r2,[sp,#0x1c]
01ff8750  mov r1,r1, lsl #0x4
01ff8754  mov r3,r2, asr #0xb
01ff8758  add r2,r2,r3, lsr #0x14
01ff875c  mov r2,r2, lsl #0x4
01ff8760  mov r1,r1, asr #0x10
01ff8764  mov r2,r2, asr #0x10
01ff8768  blx 0x02066124
01ff876c  ldr r1,[sp,#0x44]
01ff8770  add r2,r9,r7
01ff8774  add r0,sp,#0xb4
01ff8778  add r1,r1,r11
01ff877c  blx 0x02066178
01ff8780  ldr r0,[sp,#0x28]
01ff8784  add r1,r5,#0xc
01ff8788  str r0,[sp,#0x80]
01ff878c  add r0,sp,#0x80
01ff8790  bl 0x02018ac8
01ff8794  ldr r0,[sp,#0x4c]
01ff8798  add r1,r5,#0x4
01ff879c  mov r0,r0, lsl #0xc
01ff87a0  str r0,[sp,#0x20]
01ff87a4  str r0,[sp,#0x84]
01ff87a8  add r0,sp,#0x84
01ff87ac  bl 0x02018ac8
01ff87b0  ldr r0,[sp,#0x28]
01ff87b4  ldr r2,[sp,#0x84]
01ff87b8  ldr r1,[sp,#0x80]
01ff87bc  str r0,[sp,#0x88]
01ff87c0  add r7,r2,r1
01ff87c4  add r0,sp,#0x88
01ff87c8  add r1,r5,#0x8
01ff87cc  bl 0x02018ac8
01ff87d0  ldr r0,[sp,#0x20]
01ff87d4  mov r1,r5
01ff87d8  str r0,[sp,#0x8c]
01ff87dc  add r0,sp,#0x8c
01ff87e0  bl 0x02018ac8
01ff87e4  ldr r2,[sp,#0x8c]
01ff87e8  ldr r1,[sp,#0x88]
01ff87ec  add r0,sp,#0xb4
01ff87f0  add r2,r2,r1
01ff87f4  mov r1,r2, asr #0xb
01ff87f8  add r1,r2,r1, lsr #0x14
01ff87fc  mov r2,r7, asr #0xb
01ff8800  add r2,r7,r2, lsr #0x14
01ff8804  mov r1,r1, lsl #0x4
01ff8808  mov r2,r2, lsl #0x4
01ff880c  mov r1,r1, asr #0x10
01ff8810  mov r2,r2, asr #0x10
01ff8814  blx 0x02066124
01ff8818  ldr r0,[sp,#0x44]
01ff881c  add r2,r9,r8
01ff8820  add r1,r0,r11
01ff8824  add r0,sp,#0xb4
01ff8828  blx 0x02066178
01ff882c  ldr r0,[sp,#0x48]
01ff8830  add r1,r5,#0xc
01ff8834  mov r7,r0, lsl #0xc
01ff8838  add r0,sp,#0x70
01ff883c  str r7,[sp,#0x70]
01ff8840  bl 0x02018ac8
01ff8844  ldr r0,[sp,#0x20]
01ff8848  add r1,r5,#0x4
01ff884c  str r0,[sp,#0x74]
01ff8850  add r0,sp,#0x74
01ff8854  bl 0x02018ac8
01ff8858  ldr r2,[sp,#0x74]
01ff885c  ldr r1,[sp,#0x70]
01ff8860  add r0,sp,#0x78
01ff8864  add r11,r2,r1
01ff8868  add r1,r5,#0x8
01ff886c  str r7,[sp,#0x78]
01ff8870  bl 0x02018ac8
01ff8874  ldr r0,[sp,#0x20]
01ff8878  mov r1,r5
01ff887c  str r0,[sp,#0x7c]
01ff8880  add r0,sp,#0x7c
01ff8884  bl 0x02018ac8
01ff8888  ldr r2,[sp,#0x7c]
01ff888c  ldr r1,[sp,#0x78]
01ff8890  add r0,sp,#0xb4
01ff8894  add r2,r2,r1
01ff8898  mov r1,r2, asr #0xb
01ff889c  add r1,r2,r1, lsr #0x14
01ff88a0  mov r2,r11, asr #0xb
01ff88a4  add r2,r11,r2, lsr #0x14
01ff88a8  mov r1,r1, lsl #0x4
01ff88ac  mov r2,r2, lsl #0x4
01ff88b0  mov r1,r1, asr #0x10
01ff88b4  mov r2,r2, asr #0x10
01ff88b8  blx 0x02066124
01ff88bc  ldr r0,[sp,#0x44]
01ff88c0  add r2,r9,r8
01ff88c4  add r1,r0,r6
01ff88c8  add r0,sp,#0xb4
01ff88cc  blx 0x02066178
01ff88d0  add r0,sp,#0x60
01ff88d4  add r1,r5,#0xc
01ff88d8  str r7,[sp,#0x60]
01ff88dc  bl 0x02018ac8
01ff88e0  ldr r0,[sp,#0x24]
01ff88e4  add r1,r5,#0x4
01ff88e8  str r0,[sp,#0x64]
01ff88ec  add r0,sp,#0x64
01ff88f0  bl 0x02018ac8
01ff88f4  ldr r2,[sp,#0x64]
01ff88f8  ldr r1,[sp,#0x60]
01ff88fc  add r0,sp,#0x68
01ff8900  add r6,r2,r1
01ff8904  add r1,r5,#0x8
01ff8908  str r7,[sp,#0x68]
01ff890c  bl 0x02018ac8
01ff8910  ldr r0,[sp,#0x24]
01ff8914  mov r1,r5
01ff8918  str r0,[sp,#0x6c]
01ff891c  add r0,sp,#0x6c
01ff8920  bl 0x02018ac8
01ff8924  ldr r2,[sp,#0x6c]
01ff8928  ldr r1,[sp,#0x68]
01ff892c  add r0,sp,#0xb4
01ff8930  add r2,r2,r1
01ff8934  mov r1,r2, asr #0xb
01ff8938  add r1,r2,r1, lsr #0x14
01ff893c  mov r2,r6, asr #0xb
01ff8940  add r2,r6,r2, lsr #0x14
01ff8944  mov r1,r1, lsl #0x4
01ff8948  mov r2,r2, lsl #0x4
01ff894c  mov r1,r1, asr #0x10
01ff8950  mov r2,r2, asr #0x10
01ff8954  blx 0x02066124
01ff8958  b 0x01ff8a44
01ff895c  add r0,sp,#0xb4
01ff8960  mov r1,r6
01ff8964  mov r2,r7
01ff8968  blx 0x02066178
01ff896c  ldr r1,[sp,#0x14]
01ff8970  ldr r2,[sp,#0x18]
01ff8974  add r0,sp,#0xb4
01ff8978  blx 0x02066124
01ff897c  mov r2,r7
01ff8980  add r0,sp,#0xb4
01ff8984  mov r1,r11
01ff8988  blx 0x02066178
01ff898c  ldrb r1,[r9,#0x4]
01ff8990  ldr r2,[sp,#0x18]
01ff8994  add r0,sp,#0xb4
01ff8998  and r3,r1,#0xf
01ff899c  ldr r1,[0x1ff8ae4]
01ff89a0  ldr r3,[r1,r3,lsl #0x2]
01ff89a4  ldr r1,[sp,#0x14]
01ff89a8  add r1,r1,r3, lsl #0x7
01ff89ac  mov r1,r1, lsl #0x10
01ff89b0  mov r1,r1, asr #0x10
01ff89b4  blx 0x02066124
01ff89b8  mov r1,r11
01ff89bc  add r0,sp,#0xb4
01ff89c0  mov r2,r8
01ff89c4  blx 0x02066178
01ff89c8  ldrb r1,[r9,#0x4]
01ff89cc  add r0,sp,#0xb4
01ff89d0  and r3,r1,#0xf
01ff89d4  ldr r1,[0x1ff8ae4]
01ff89d8  ldr r2,[r1,r3,lsl #0x2]
01ff89dc  ldr r1,[0x1ff8ae8]
01ff89e0  ldr r3,[r1,r3,lsl #0x2]
01ff89e4  ldr r1,[sp,#0x14]
01ff89e8  add r1,r1,r2, lsl #0x7
01ff89ec  ldr r2,[sp,#0x18]
01ff89f0  mov r1,r1, lsl #0x10
01ff89f4  add r2,r2,r3, lsl #0x7
01ff89f8  mov r2,r2, lsl #0x10
01ff89fc  mov r1,r1, asr #0x10
01ff8a00  mov r2,r2, asr #0x10
01ff8a04  blx 0x02066124
01ff8a08  mov r1,r6
01ff8a0c  mov r2,r8
01ff8a10  add r0,sp,#0xb4
01ff8a14  blx 0x02066178
01ff8a18  ldrb r2,[r9,#0x4]
01ff8a1c  ldr r1,[sp,#0x14]
01ff8a20  add r0,sp,#0xb4
01ff8a24  and r3,r2,#0xf
01ff8a28  ldr r2,[0x1ff8ae8]
01ff8a2c  ldr r3,[r2,r3,lsl #0x2]
01ff8a30  ldr r2,[sp,#0x18]
01ff8a34  add r2,r2,r3, lsl #0x7
01ff8a38  mov r2,r2, lsl #0x10
01ff8a3c  mov r2,r2, asr #0x10
01ff8a40  blx 0x02066124
01ff8a44  mov r1,#0x0
01ff8a48  add r0,sp,#0xb4
01ff8a4c  mov r2,r1
01ff8a50  mov r3,#0x100
01ff8a54  blx 0x020661c4
01ff8a58  ldr r0,[sp,#0x50]
01ff8a5c  add r0,r0,#0x1
01ff8a60  str r0,[sp,#0x50]
01ff8a64  ldr r1,[sp,#0x50]
01ff8a68  ldr r0,[sp,#0x5c]
01ff8a6c  cmp r1,r0
01ff8a70  bcc 0x01ff8434
01ff8a74  add r0,sp,#0xb4
01ff8a78  blx 0x02066068
01ff8a7c  add r0,sp,#0xb4
01ff8a80  bl 0x020671c8
01ff8a84  str r0,[r10,#0x6c]
01ff8a88  ldr r0,[r10,#0x64]
01ff8a8c  ldr r1,[r10,#0x6c]
01ff8a90  bl 0x0205401c
01ff8a94  ldr r0,[sp,#0x54]
01ff8a98  str r0,[r10,#0x50]
01ff8a9c  ldr r0,[sp,#0x3c]
01ff8aa0  str r0,[r10,#0x54]
01ff8aa4  ldr r0,[0x1ff8aec]
01ff8aa8  ldr r1,[r10,#0x64]
01ff8aac  ldr r0,[r0,#0x0]
01ff8ab0  ldr r2,[r10,#0x6c]
01ff8ab4  bl 0x01ff8d20
01ff8ab8  ldr r2,[r10,#0x34]
01ff8abc  ldr r0,[sp,#0x5c]
01ff8ac0  ldr r1,[r2,#0x4bc]
01ff8ac4  add r0,r0,r1
01ff8ac8  str r0,[r2,#0x4bc]
01ff8acc  add sp,sp,#0xc8
01ff8ad0  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
