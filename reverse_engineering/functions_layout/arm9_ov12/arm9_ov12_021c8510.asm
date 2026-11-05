021c8510  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
021c8514  sub sp,sp,#0x1c
021c8518  mov r10,r0
021c851c  ldr r0,[r10,#0x178]
021c8520  ldr r1,[r0,#0x0]
021c8524  ldr r1,[r1,#0x64]
021c8528  blx r1
021c852c  ldr r1,[r10,#0x54]
021c8530  mov r11,r0
021c8534  ldr r0,[r1,#0x30]
021c8538  ldr r1,[r0,#0x0]
021c853c  ldr r1,[r1,#0x64]
021c8540  blx r1
021c8544  ldr r1,[r10,#0x194]
021c8548  ldrb r7,[r10,#0x173]
021c854c  cmp r1,#0x0
021c8550  mov r5,r0
021c8554  ldrbne r7,[r10,#0x198]
021c8558  ldrbne r0,[r10,#0x199]
021c855c  mov r6,#0x1
021c8560  mov r8,#0x0
021c8564  subne r0,r0,r7
021c8568  addne r6,r0,#0x1
021c856c  b 0x021c8704
021c8570  ldr r0,[r10,#0x54]
021c8574  ldr r0,[r0,#0x30]
021c8578  ldr r1,[r0,#0x0]
021c857c  ldr r1,[r1,#0x18]
021c8580  blx r1
021c8584  cmp r0,#0x1
021c8588  beq 0x021c85c0
021c858c  add r0,r7,r8
021c8590  mov r4,r0, lsl #0x4
021c8594  mov r9,#0x0
021c8598  ldr r1,[r5,#0x10]
021c859c  mov r0,r11
021c85a0  add r1,r1,r4, lsl #0x1
021c85a4  add r1,r1,r9, lsl #0x1
021c85a8  ldrh r2,[r1,#0x20]
021c85ac  add r1,r9,r8, lsl #0x4
021c85b0  bl 0x021c8ae8
021c85b4  add r9,r9,#0x1
021c85b8  cmp r9,#0x10
021c85bc  bcc 0x021c8598
021c85c0  ldrb r0,[r10,#0x172]
021c85c4  cmp r0,#0x0
021c85c8  beq 0x021c8614
021c85cc  ldr r0,[r10,#0x178]
021c85d0  ldr r1,[r0,#0x0]
021c85d4  ldr r1,[r1,#0x64]
021c85d8  blx r1
021c85dc  ldr r0,[r0,#0x10]
021c85e0  ldrh r4,[r10,#0x24]
021c85e4  ldrh r0,[r0,#0x2]
021c85e8  cmp r4,r0
021c85ec  beq 0x021c8700
021c85f0  ldr r0,[r10,#0x178]
021c85f4  ldr r1,[r0,#0x0]
021c85f8  ldr r1,[r1,#0x64]
021c85fc  blx r1
021c8600  mov r1,r8, lsl #0x4
021c8604  mov r2,r4
021c8608  add r1,r1,#0x1
021c860c  bl 0x021c8ae8
021c8610  b 0x021c8700
021c8614  ldr r0,[r10,#0x54]
021c8618  ldr r0,[r0,#0x30]
021c861c  ldr r1,[r0,#0x0]
021c8620  ldr r1,[r1,#0x18]
021c8624  blx r1
021c8628  cmp r0,#0x1
021c862c  ldr r0,[r10,#0x178]
021c8630  ldr r1,[r0,#0x0]
021c8634  bne 0x021c86c0
021c8638  ldr r1,[r1,#0x64]
021c863c  blx r1
021c8640  ldr r1,[r0,#0x10]
021c8644  add r0,r10,#0x100
021c8648  ldrh r4,[r0,#0x70]
021c864c  ldrh r0,[r1,#0x2]
021c8650  cmp r4,r0
021c8654  beq 0x021c8678
021c8658  ldr r0,[r10,#0x178]
021c865c  ldr r1,[r0,#0x0]
021c8660  ldr r1,[r1,#0x64]
021c8664  blx r1
021c8668  mov r1,r8, lsl #0x4
021c866c  mov r2,r4
021c8670  add r1,r1,#0x1
021c8674  bl 0x021c8ae8
021c8678  ldr r0,[r10,#0x178]
021c867c  ldr r1,[r0,#0x0]
021c8680  ldr r1,[r1,#0x64]
021c8684  blx r1
021c8688  ldr r0,[r0,#0x10]
021c868c  ldrh r4,[r10,#0x24]
021c8690  ldrh r0,[r0,#0x4]
021c8694  cmp r4,r0
021c8698  beq 0x021c8700
021c869c  ldr r0,[r10,#0x178]
021c86a0  ldr r1,[r0,#0x0]
021c86a4  ldr r1,[r1,#0x64]
021c86a8  blx r1
021c86ac  mov r1,r8, lsl #0x4
021c86b0  mov r2,r4
021c86b4  add r1,r1,#0x2
021c86b8  bl 0x021c8ae8
021c86bc  b 0x021c8700
021c86c0  ldr r1,[r1,#0x64]
021c86c4  blx r1
021c86c8  ldr r1,[r0,#0x10]
021c86cc  add r0,r10,#0x100
021c86d0  ldrh r4,[r0,#0x70]
021c86d4  ldrh r0,[r1,#0x2]
021c86d8  cmp r4,r0
021c86dc  beq 0x021c8700
021c86e0  ldr r0,[r10,#0x178]
021c86e4  ldr r1,[r0,#0x0]
021c86e8  ldr r1,[r1,#0x64]
021c86ec  blx r1
021c86f0  mov r1,r8, lsl #0x4
021c86f4  mov r2,r4
021c86f8  add r1,r1,#0x1
021c86fc  bl 0x021c8ae8
021c8700  add r8,r8,#0x1
021c8704  cmp r8,r6
021c8708  bcc 0x021c8570
021c870c  ldr r0,[r10,#0x178]
021c8710  ldr r1,[r0,#0x0]
021c8714  ldr r1,[r1,#0x64]
021c8718  blx r1
021c871c  mov r1,r6, lsl #0x4
021c8720  sub r1,r1,#0x1
021c8724  strh r1,[r0,#0xc]
021c8728  ldr r4,[r10,#0x34]
021c872c  mov r0,r4
021c8730  ldr r1,[r0,#0x0]
021c8734  ldr r1,[r1,#0x7c]
021c8738  blx r1
021c873c  ldr r0,[r10,#0x17c]
021c8740  mov r1,#0x0
021c8744  ldr r2,[r0,#0x0]
021c8748  ldr r2,[r2,#0x34]
021c874c  blx r2
021c8750  ldrb r0,[r4,#0x958]
021c8754  cmp r0,#0x1
021c8758  bls 0x021c8770
021c875c  ldrb r0,[r4,#0x954]
021c8760  cmp r0,#0x0
021c8764  movne r0,#0x0
021c8768  strbne r0,[r4,#0x954]
021c876c  b 0x021c8ad8
021c8770  ldr r0,[r10,#0x38]
021c8774  ldr r0,[r0,#0x50]
021c8778  ldr r1,[r0,#0x0]
021c877c  ldr r1,[r1,#0x4c]
021c8780  blx r1
021c8784  mov r1,#0x1000
021c8788  ldr r3,[r0,#0x10]
021c878c  rsb r1,r1,#0x0
021c8790  ldr r2,[r0,#0x14]
021c8794  and r5,r3,r1
021c8798  and r3,r2,r1
021c879c  mov r1,r5, asr #0xb
021c87a0  mov r2,r3, asr #0xb
021c87a4  add r1,r5,r1, lsr #0x14
021c87a8  ldr r5,[r4,#0x918]
021c87ac  add r2,r3,r2, lsr #0x14
021c87b0  ldr r3,[r4,#0x91c]
021c87b4  mov r8,r1, asr #0xc
021c87b8  mov r7,r2, asr #0xc
021c87bc  add r6,r5,r1, asr #0xc
021c87c0  add r5,r3,r2, asr #0xc
021c87c4  ldrb r3,[r4,#0x954]
021c87c8  mov r9,r8, asr #0x2
021c87cc  mov r11,r7, asr #0x2
021c87d0  mov r1,r6, asr #0x2
021c87d4  mov r2,r5, asr #0x2
021c87d8  add r8,r8,r9, lsr #0x1d
021c87dc  add r7,r7,r11, lsr #0x1d
021c87e0  add r1,r6,r1, lsr #0x1d
021c87e4  add r2,r5,r2, lsr #0x1d
021c87e8  cmp r3,#0x0
021c87ec  mov r5,r8, asr #0x3
021c87f0  mov r6,r7, asr #0x3
021c87f4  mov r7,r1, asr #0x3
021c87f8  mov r8,r2, asr #0x3
021c87fc  beq 0x021c88b0
021c8800  mov r1,#0x0
021c8804  strb r1,[r4,#0x954]
021c8808  ldr r2,[r0,#0x14]
021c880c  add r9,sp,#0x8
021c8810  mov r1,r2, asr #0xb
021c8814  add r1,r2,r1, lsr #0x14
021c8818  mov r1,r1, asr #0xc
021c881c  mov r1,r1, lsl #0x1d
021c8820  mov r1,r1, lsr #0x11
021c8824  str r1,[sp,#0x4]
021c8828  ldr r2,[r0,#0x10]
021c882c  mov r1,r9
021c8830  mov r0,r2, asr #0xb
021c8834  add r0,r2,r0, lsr #0x14
021c8838  mov r0,r0, asr #0xc
021c883c  mov r0,r0, lsl #0x1d
021c8840  mov r0,r0, lsr #0x11
021c8844  str r0,[sp,#0x8]
021c8848  ldr r0,[r4,#0x918]
021c884c  add r11,sp,#0x4
021c8850  bl 0x021c8b00
021c8854  cmp r0,#0x0
021c8858  bne 0x021c8870
021c885c  ldr r0,[r4,#0x91c]
021c8860  mov r1,r11
021c8864  bl 0x021c8b00
021c8868  cmp r0,#0x0
021c886c  beq 0x021c88b0
021c8870  ldr r2,[r9,#0x0]
021c8874  mov r1,#0x1
021c8878  mov r0,r2, asr #0xb
021c887c  add r0,r2,r0, lsr #0x14
021c8880  mov r0,r0, asr #0xc
021c8884  str r0,[r4,#0x918]
021c8888  ldr r2,[r11,#0x0]
021c888c  mov r0,r2, asr #0xb
021c8890  add r0,r2,r0, lsr #0x14
021c8894  mov r0,r0, asr #0xc
021c8898  str r0,[r4,#0x91c]
021c889c  ldr r0,[r9,#0x0]
021c88a0  str r0,[r4,#0x928]
021c88a4  ldr r0,[r11,#0x0]
021c88a8  str r0,[r4,#0x92c]
021c88ac  strb r1,[r4,#0x98c]
021c88b0  ldr r2,[r10,#0x17c]
021c88b4  ldr r1,[r10,#0x1b4]
021c88b8  ldr r0,[r2,#0x54]
021c88bc  cmp r1,r0
021c88c0  movne r0,#0x1
021c88c4  strbne r0,[r10,#0x1a5]
021c88c8  ldrne r0,[r2,#0x54]
021c88cc  strne r0,[r10,#0x1b4]
021c88d0  ldr r0,[r2,#0x54]
021c88d4  ldr r1,[r2,#0x50]
021c88d8  mov r0,r0, lsr #0x5
021c88dc  mov r0,r0, lsl #0xc
021c88e0  add r1,r0,r1, lsr #0x5
021c88e4  add r0,r10,#0x100
021c88e8  strh r1,[r0,#0x80]
021c88ec  mov r1,#0x20
021c88f0  strh r1,[r0,#0x88]
021c88f4  ldr r0,[r4,#0x948]
021c88f8  ldr r4,[r4,#0x940]
021c88fc  blx r0
021c8900  add r2,r7,#0x2
021c8904  sub r3,r2,r4
021c8908  add r1,r10,#0x100
021c890c  mul r4,r3,r4
021c8910  ldrh r2,[r1,#0x88]
021c8914  bic r4,r4,#0x1
021c8918  add r0,r0,r4
021c891c  mul r3,r2,r8
021c8920  add r0,r0,r3, lsl #0x1
021c8924  str r0,[r10,#0x184]
021c8928  ldr r0,[r10,#0xfc]
021c892c  cmp r8,#0x0
021c8930  add r0,r0,#0x7
021c8934  mov r0,r0, lsr #0x3
021c8938  str r0,[r10,#0x19c]
021c893c  ldr r0,[r10,#0x100]
021c8940  add r0,r0,#0x7
021c8944  mov r0,r0, lsr #0x3
021c8948  str r0,[r10,#0x1a0]
021c894c  bge 0x021c8988
021c8950  ldr r0,[r10,#0x19c]
021c8954  ldrh r2,[r1,#0x80]
021c8958  mul r0,r8,r0
021c895c  sub r0,r2,r0
021c8960  strh r0,[r1,#0x80]
021c8964  ldrh r0,[r1,#0x88]
021c8968  ldr r1,[r10,#0x184]
021c896c  mul r0,r8,r0
021c8970  sub r0,r1,r0, lsl #0x1
021c8974  str r0,[r10,#0x184]
021c8978  ldr r0,[r10,#0x1a0]
021c897c  add r0,r0,r8
021c8980  str r0,[r10,#0x1a0]
021c8984  mov r8,#0x0
021c8988  ldr r0,[r10,#0x1a0]
021c898c  cmp r0,#0x0
021c8990  blt 0x021c8ad8
021c8994  ldrb r0,[r10,#0x1a4]
021c8998  cmp r0,#0x0
021c899c  bne 0x021c89ec
021c89a0  add r0,r10,#0x100
021c89a4  ldrsh r1,[r0,#0xac]
021c89a8  cmp r7,r1
021c89ac  ldrsheq r0,[r0,#0xae]
021c89b0  cmpeq r8,r0
021c89b4  beq 0x021c89ec
021c89b8  ldr r1,[r10,#0x100]
021c89bc  add r0,sp,#0x14
021c89c0  add r1,r6,r1, lsr #0x3
021c89c4  str r1,[sp,#0x0]
021c89c8  ldr r3,[r10,#0xfc]
021c89cc  mov r1,r5
021c89d0  mov r2,r6
021c89d4  add r3,r5,r3, lsr #0x3
021c89d8  bl 0x021b85ec
021c89dc  ldr r0,[r10,#0x34]
021c89e0  ldr r1,[r10,#0x1b0]
021c89e4  add r2,sp,#0x14
021c89e8  bl 0x0203d870
021c89ec  add r0,r10,#0x100
021c89f0  strh r5,[r0,#0xa8]
021c89f4  strh r6,[r0,#0xaa]
021c89f8  strh r7,[r0,#0xac]
021c89fc  strh r8,[r0,#0xae]
021c8a00  ldr r1,[r10,#0x100]
021c8a04  add r0,sp,#0xc
021c8a08  add r1,r8,r1, lsr #0x3
021c8a0c  str r1,[sp,#0x0]
021c8a10  ldr r3,[r10,#0xfc]
021c8a14  mov r1,r7
021c8a18  mov r2,r8
021c8a1c  add r3,r7,r3, lsr #0x3
021c8a20  bl 0x021b85ec
021c8a24  ldrb r0,[r10,#0x1a4]
021c8a28  cmp r0,#0x0
021c8a2c  beq 0x021c8aac
021c8a30  ldr r0,[r10,#0x1b0]
021c8a34  cmp r0,#0x0
021c8a38  bne 0x021c8a7c
021c8a3c  ldr r0,[r10,#0x34]
021c8a40  ldr r1,[r0,#0x940]
021c8a44  cmp r1,#0x1
021c8a48  beq 0x021c8a7c
021c8a4c  ldr r1,[r10,#0x194]
021c8a50  cmp r1,#0x0
021c8a54  bne 0x021c8a6c
021c8a58  ldr r2,[0x21c8ae0]
021c8a5c  mov r1,r10
021c8a60  bl 0x0203d6e8
021c8a64  str r0,[r10,#0x1b0]
021c8a68  b 0x021c8a7c
021c8a6c  ldr r2,[0x21c8ae4]
021c8a70  mov r1,r10
021c8a74  bl 0x0203d6e8
021c8a78  str r0,[r10,#0x1b0]
021c8a7c  ldr r0,[r10,#0x34]
021c8a80  ldr r1,[r10,#0x1b0]
021c8a84  add r2,sp,#0xc
021c8a88  bl 0x0203d784
021c8a8c  ldr r0,[r10,#0x34]
021c8a90  ldr r1,[r10,#0x1b0]
021c8a94  add r2,sp,#0xc
021c8a98  bl 0x0203d838
021c8a9c  mov r0,#0x0
021c8aa0  strb r0,[r10,#0x1a4]
021c8aa4  strb r0,[r10,#0x1a5]
021c8aa8  b 0x021c8ad0
021c8aac  ldrb r0,[r10,#0x1a5]
021c8ab0  cmp r0,#0x0
021c8ab4  beq 0x021c8ad0
021c8ab8  ldr r0,[r10,#0x34]
021c8abc  ldr r1,[r10,#0x1b0]
021c8ac0  add r2,sp,#0xc
021c8ac4  bl 0x0203d838
021c8ac8  mov r0,#0x0
021c8acc  strb r0,[r10,#0x1a5]
021c8ad0  mov r0,r10
021c8ad4  bl 0x0201593c
021c8ad8  add sp,sp,#0x1c
021c8adc  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
