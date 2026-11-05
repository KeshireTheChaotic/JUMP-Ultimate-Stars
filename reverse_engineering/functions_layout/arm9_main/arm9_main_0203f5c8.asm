0203f5c8  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0203f5cc  sub sp,sp,#0x10c
0203f5d0  mov r10,r0
0203f5d4  ldrsh r1,[r10,#0x4a]
0203f5d8  mvn r0,#0x0
0203f5dc  cmp r1,r0
0203f5e0  ldrne r0,[0x204008c]
0203f5e4  ldrne r5,[r10,#0x20]
0203f5e8  ldrne r0,[r0,#0x420]
0203f5ec  cmpne r5,r0
0203f5f0  beq 0x02040084
0203f5f4  mov r0,r5
0203f5f8  ldr r2,[r0,#0x0]
0203f5fc  mov r1,#0x0
0203f600  ldr r2,[r2,#0x34]
0203f604  blx r2
0203f608  mov r0,r5
0203f60c  ldr r1,[r0,#0x0]
0203f610  ldr r1,[r1,#0x3c]
0203f614  blx r1
0203f618  movs r4,r0
0203f61c  beq 0x02040084
0203f620  ldr r0,[r10,#0x38]
0203f624  ldr r0,[r0,#0x50]
0203f628  ldr r1,[r0,#0x0]
0203f62c  ldr r1,[r1,#0x4c]
0203f630  blx r1
0203f634  ldr r6,[r10,#0x34]
0203f638  mov r8,r0
0203f63c  ldrb r1,[r6,#0x903]
0203f640  add r0,r6,#0xa4
0203f644  str r0,[sp,#0x4c]
0203f648  mov r0,#0x0
0203f64c  str r0,[sp,#0x18]
0203f650  cmp r1,#0x0
0203f654  ldrbne r0,[r10,#0x64]
0203f658  cmpne r0,#0x0
0203f65c  movne r0,#0x1
0203f660  strne r0,[sp,#0x18]
0203f664  mov r0,r4
0203f668  ldr r1,[r0,#0x0]
0203f66c  ldr r1,[r1,#0x20]
0203f670  blx r1
0203f674  ldr r1,[0x2040090]
0203f678  cmp r0,r1
0203f67c  ldreq r0,[r10,#0x50]
0203f680  cmpeq r0,#0x0
0203f684  bne 0x0203f6a4
0203f688  ldr r0,[0x204008c]
0203f68c  mov r1,#0x0
0203f690  ldr r0,[r0,#0x1a4]
0203f694  mov r2,#0x2000
0203f698  bl 0x0201a418
0203f69c  str r0,[r10,#0x50]
0203f6a0  b 0x0203f748
0203f6a4  mov r0,r4
0203f6a8  ldr r1,[r0,#0x0]
0203f6ac  ldr r1,[r1,#0x20]
0203f6b0  blx r1
0203f6b4  ldr r1,[0x2040094]
0203f6b8  cmp r0,r1
0203f6bc  beq 0x0203f6dc
0203f6c0  mov r0,r4
0203f6c4  ldr r1,[r0,#0x0]
0203f6c8  ldr r1,[r1,#0x20]
0203f6cc  blx r1
0203f6d0  ldr r1,[0x2040098]
0203f6d4  cmp r0,r1
0203f6d8  bne 0x0203f748
0203f6dc  ldr r7,[r10,#0x50]
0203f6e0  cmp r7,#0x0
0203f6e4  ldrne r0,[r10,#0x20]
0203f6e8  ldrne r1,[r10,#0x5c]
0203f6ec  ldrne r0,[r0,#0x8]
0203f6f0  cmpne r1,r0
0203f6f4  beq 0x0203f72c
0203f6f8  ldr r1,[r10,#0x54]
0203f6fc  ldr r0,[r4,#0x24]
0203f700  cmp r1,r0
0203f704  bcs 0x0203f72c
0203f708  mov r0,r7
0203f70c  bl 0x0201a9ec
0203f710  cmp r0,#0x0
0203f714  bne 0x0203f724
0203f718  mov r0,r7
0203f71c  mov r1,#0x1
0203f720  bl 0x0201a958
0203f724  mov r0,#0x0
0203f728  str r0,[r10,#0x50]
0203f72c  ldr r0,[r10,#0x50]
0203f730  cmp r0,#0x0
0203f734  bne 0x0203f748
0203f738  ldr r0,[r4,#0x24]
0203f73c  str r0,[r10,#0x54]
0203f740  bl 0x0201a228
0203f744  str r0,[r10,#0x50]
0203f748  mov r0,r6
0203f74c  ldr r2,[r0,#0x0]
0203f750  ldr r1,[r4,#0xc]
0203f754  ldr r2,[r2,#0x80]
0203f758  str r1,[sp,#0x20]
0203f75c  blx r2
0203f760  str r0,[sp,#0x3c]
0203f764  mov r0,r6
0203f768  ldr r1,[r0,#0x0]
0203f76c  ldr r1,[r1,#0x84]
0203f770  blx r1
0203f774  str r0,[sp,#0x38]
0203f778  ldr r0,[r8,#0x8]
0203f77c  cmp r0,#0x0
0203f780  ldrne r0,[r8,#0x4]
0203f784  cmpne r0,#0x0
0203f788  movne r0,#0x1
0203f78c  strne r0,[sp,#0x8]
0203f790  moveq r0,#0x0
0203f794  streq r0,[sp,#0x8]
0203f798  ldr r0,[r8,#0x0]
0203f79c  cmp r0,#0x1000
0203f7a0  ldreq r0,[r8,#0xc]
0203f7a4  cmpeq r0,#0x1000
0203f7a8  ldreq r0,[sp,#0x8]
0203f7ac  cmpeq r0,#0x0
0203f7b0  movne r0,#0x1
0203f7b4  strne r0,[sp,#0x4]
0203f7b8  moveq r0,#0x0
0203f7bc  streq r0,[sp,#0x4]
0203f7c0  ldrsh r2,[r10,#0x4a]
0203f7c4  ldrsh r1,[r10,#0x4c]
0203f7c8  mov r0,r5
0203f7cc  add r1,r2,r1
0203f7d0  bl 0x02043c18
0203f7d4  str r0,[sp,#0x34]
0203f7d8  mov r0,#0x0
0203f7dc  str r0,[sp,#0x10]
0203f7e0  str r0,[sp,#0x2c]
0203f7e4  add r0,r10,#0x14
0203f7e8  bl 0x02019ddc
0203f7ec  ldr r0,[r0,#0x10]
0203f7f0  str r0,[sp,#0x28]
0203f7f4  ldr r0,[sp,#0x4]
0203f7f8  cmp r0,#0x0
0203f7fc  beq 0x0203f92c
0203f800  ldr r0,[sp,#0x8]
0203f804  cmp r0,#0x0
0203f808  bne 0x0203f81c
0203f80c  ldr r0,[r8,#0x0]
0203f810  cmp r0,#0x1000
0203f814  ldrle r0,[r8,#0xc]
0203f818  cmple r0,#0x1000
0203f81c  ldr r0,[sp,#0x8]
0203f820  cmp r0,#0x0
0203f824  bne 0x0203f83c
0203f828  ldr r0,[r8,#0x0]
0203f82c  cmp r0,#0x0
0203f830  ldrne r0,[r8,#0xc]
0203f834  cmpne r0,#0x0
0203f838  beq 0x02040084
0203f83c  ldr r0,[sp,#0x8]
0203f840  cmp r0,#0x0
0203f844  bne 0x0203f8d8
0203f848  ldr r1,[0x204009c]
0203f84c  mov r0,#0x1000000
0203f850  ldrsh r2,[r1,#0x2]
0203f854  ldrsh r1,[r1,#0x0]
0203f858  str r2,[sp,#0x5c]
0203f85c  str r1,[sp,#0x60]
0203f860  rsb r1,r1,#0x0
0203f864  str r2,[sp,#0x68]
0203f868  str r1,[sp,#0x64]
0203f86c  ldr r6,[r8,#0x0]
0203f870  mov r1,r6
0203f874  bl 0x0200d12c
0203f878  ldr r7,[r8,#0xc]
0203f87c  mov r9,r0
0203f880  mov r0,#0x1000000
0203f884  mov r1,r7
0203f888  bl 0x0200d12c
0203f88c  mov r3,r0
0203f890  ldrb r0,[r10,#0x48]
0203f894  add r1,sp,#0x6c
0203f898  cmp r0,#0x0
0203f89c  rsbne r9,r9,#0x0
0203f8a0  ldrb r0,[r10,#0x49]
0203f8a4  rsbne r6,r6,#0x0
0203f8a8  mov r2,r9
0203f8ac  cmp r0,#0x0
0203f8b0  rsbne r3,r3,#0x0
0203f8b4  rsbne r7,r7,#0x0
0203f8b8  add r0,sp,#0x5c
0203f8bc  bl 0x020506ec
0203f8c0  mov r2,r6
0203f8c4  mov r3,r7
0203f8c8  add r0,sp,#0x5c
0203f8cc  add r1,sp,#0x7c
0203f8d0  bl 0x020506ec
0203f8d4  b 0x0203f918
0203f8d8  ldr r0,[r8,#0x0]
0203f8dc  str r0,[sp,#0x6c]
0203f8e0  ldr r0,[r8,#0x4]
0203f8e4  str r0,[sp,#0x70]
0203f8e8  ldr r0,[r8,#0x8]
0203f8ec  str r0,[sp,#0x74]
0203f8f0  ldr r0,[r8,#0xc]
0203f8f4  str r0,[sp,#0x78]
0203f8f8  ldr r0,[r8,#0x0]
0203f8fc  str r0,[sp,#0x7c]
0203f900  ldr r0,[r8,#0x4]
0203f904  str r0,[sp,#0x80]
0203f908  ldr r0,[r8,#0x8]
0203f90c  str r0,[sp,#0x84]
0203f910  ldr r0,[r8,#0xc]
0203f914  str r0,[sp,#0x88]
0203f918  ldr r0,[sp,#0x4c]
0203f91c  add r1,sp,#0x6c
0203f920  add r0,r0,#0x400
0203f924  bl 0x0204121c
0203f928  str r0,[sp,#0x10]
0203f92c  ldr r0,[sp,#0x34]
0203f930  cmp r0,#0x0
0203f934  bne 0x0203f9a8
0203f938  ldr r0,[r5,#0x1c]
0203f93c  ldr r1,[r0,#0x0]
0203f940  ldr r1,[r1,#0x14]
0203f944  blx r1
0203f948  cmp r0,#0x0
0203f94c  moveq r0,#0x1
0203f950  movne r0,#0x0
0203f954  cmp r0,#0x0
0203f958  bne 0x02040084
0203f95c  mov r0,#0x1
0203f960  str r0,[sp,#0x34]
0203f964  ldrh r0,[r4,#0x8]
0203f968  cmp r0,#0x20
0203f96c  ldrheq r0,[r4,#0xa]
0203f970  cmpeq r0,#0x20
0203f974  bne 0x0203f99c
0203f978  mov r2,#0x0
0203f97c  ldr r1,[0x20400a0]
0203f980  ldr r0,[0x204008c]
0203f984  strh r2,[r1,#0x78]
0203f988  strb r2,[r0,#0x47a]
0203f98c  strb r2,[r0,#0x47b]
0203f990  mov r1,#0x2
0203f994  strb r1,[r0,#0x47c]
0203f998  strb r2,[r0,#0x47d]
0203f99c  ldr r0,[0x20400a4]
0203f9a0  str r0,[sp,#0x30]
0203f9a4  b 0x0203f9c0
0203f9a8  ldrsh r2,[r10,#0x4a]
0203f9ac  ldrsh r1,[r10,#0x4c]
0203f9b0  mov r0,r5
0203f9b4  add r1,r2,r1
0203f9b8  bl 0x02043c5c
0203f9bc  str r0,[sp,#0x30]
0203f9c0  mov r0,#0x1
0203f9c4  add r0,r0,#0x1
0203f9c8  str r0,[sp,#0x1c]
0203f9cc  mov r0,#0x1
0203f9d0  mov r0,r0, lsl #0x1
0203f9d4  add r0,r0,#0x1
0203f9d8  mov r5,#0x0
0203f9dc  str r0,[sp,#0x14]
0203f9e0  b 0x0204005c
0203f9e4  ldr r0,[sp,#0x4]
0203f9e8  mov r1,#0x6
0203f9ec  cmp r0,#0x0
0203f9f0  ldr r0,[sp,#0x30]
0203f9f4  mla r9,r5,r1,r0
0203f9f8  ldrb r2,[r9,#0x4]
0203f9fc  ldr r1,[0x20400a8]
0203fa00  ldr r0,[0x20400ac]
0203fa04  and r2,r2,#0xf
0203fa08  ldr r12,[r1,r2,lsl #0x2]
0203fa0c  ldr r0,[r0,r2,lsl #0x2]
0203fa10  mov r1,r12, lsl #0x2
0203fa14  str r0,[sp,#0xc]
0203fa18  mov r0,r0, lsl #0x2
0203fa1c  beq 0x0203fc1c
0203fa20  ldr r2,[sp,#0x8]
0203fa24  ldr r6,[r8,#0x10]
0203fa28  cmp r2,#0x0
0203fa2c  mov r2,r6, asr #0xb
0203fa30  ldr r3,[r8,#0x14]
0203fa34  add r6,r6,r2, lsr #0x14
0203fa38  mov r2,r3, asr #0xb
0203fa3c  add r2,r3,r2, lsr #0x14
0203fa40  mov r3,#0x1
0203fa44  mul r7,r3,r1
0203fa48  rsb r6,r7,r6, asr #0xc
0203fa4c  mul r7,r3,r0
0203fa50  rsb r7,r7,r2, asr #0xc
0203fa54  ldrsb r3,[r9,#0x2]
0203fa58  ldrsb r2,[r9,#0x3]
0203fa5c  add r3,r1,r3
0203fa60  add r2,r0,r2
0203fa64  beq 0x0203faac
0203fa68  rsb lr,r1,#0x0
0203fa6c  rsb r0,r0,#0x0
0203fa70  ldr r1,[sp,#0x7c]
0203fa74  str r0,[sp,#0x40]
0203fa78  ldr r0,[sp,#0x84]
0203fa7c  mul r1,r3,r1
0203fa80  add r1,lr,r1, asr #0xc
0203fa84  mul r0,r2,r0
0203fa88  add r1,r1,r0, asr #0xc
0203fa8c  ldr r0,[sp,#0x88]
0203fa90  ldr lr,[sp,#0x80]
0203fa94  mul r0,r2,r0
0203fa98  ldr r2,[sp,#0x40]
0203fa9c  add r0,r2,r0, asr #0xc
0203faa0  mul r2,r3,lr
0203faa4  add r0,r0,r2, asr #0xc
0203faa8  b 0x0203fadc
0203faac  rsb r0,r0,#0x0
0203fab0  str r0,[sp,#0x54]
0203fab4  ldr r0,[sp,#0x88]
0203fab8  ldr lr,[sp,#0x7c]
0203fabc  str r0,[sp,#0x44]
0203fac0  mul r0,r3,lr
0203fac4  rsb r1,r1,#0x0
0203fac8  add r1,r1,r0, asr #0xc
0203facc  ldr r0,[sp,#0x44]
0203fad0  mul r3,r2,r0
0203fad4  ldr r0,[sp,#0x54]
0203fad8  add r0,r0,r3, asr #0xc
0203fadc  add r6,r6,r1
0203fae0  add r7,r7,r0
0203fae4  ldrb r0,[r10,#0x10]
0203fae8  mov r0,r0, lsl #0x19
0203faec  movs r0,r0, lsr #0x1f
0203faf0  beq 0x0203fb74
0203faf4  cmp r6,#0x100
0203faf8  cmplt r7,#0xc0
0203fafc  bge 0x0203fb28
0203fb00  ldr r0,[sp,#0x1c]
0203fb04  mov r1,r12, lsl #0x3
0203fb08  mla r1,r0,r1,r6
0203fb0c  cmp r1,#0x0
0203fb10  ldrgt r0,[sp,#0xc]
0203fb14  movgt r1,r0, lsl #0x3
0203fb18  ldrgt r0,[sp,#0x1c]
0203fb1c  mlagt r1,r0,r1,r7
0203fb20  cmpgt r1,#0x0
0203fb24  bgt 0x0203fb74
0203fb28  cmp r5,#0x0
0203fb2c  bne 0x0203fb48
0203fb30  ldr r2,[sp,#0x3c]
0203fb34  ldr r3,[sp,#0x30]
0203fb38  mov r0,r10
0203fb3c  mov r1,r4
0203fb40  bl 0x0203f440
0203fb44  mov r11,r0
0203fb48  ldrb r1,[r9,#0x4]
0203fb4c  ldr r0,[0x20400b0]
0203fb50  and r1,r1,#0xf
0203fb54  ldr r0,[r0,r1,lsl #0x2]
0203fb58  mov r0,r0, lsl #0x5
0203fb5c  add r1,r0,#0x3f
0203fb60  mov r0,r1, asr #0x5
0203fb64  add r0,r1,r0, lsr #0x1a
0203fb68  mov r0,r0, asr #0x6
0203fb6c  add r11,r11,r0, lsl #0x6
0203fb70  b 0x02040058
0203fb74  ldr r2,[sp,#0x4c]
0203fb78  mov r1,r6, lsl #0x17
0203fb7c  ldr r6,[r2,#0x400]
0203fb80  and r0,r7,#0xff
0203fb84  sub r7,r6,#0x1
0203fb88  add r3,r2,#0x410
0203fb8c  str r7,[r2,#0x400]
0203fb90  mov r2,#0x0
0203fb94  ldr r12,[sp,#0x18]
0203fb98  add r6,r3,r7, lsl #0x3
0203fb9c  str r2,[r3,r7,lsl #0x3]
0203fba0  strh r2,[r6,#0x4]
0203fba4  ldr r2,[r3,r7,lsl #0x3]
0203fba8  mov r12,r12, lsl #0x1f
0203fbac  bic r2,r2,#0x1000
0203fbb0  orr r2,r2,r12, lsr #0x13
0203fbb4  ldr lr,[0x20400b4]
0203fbb8  ldr r12,[sp,#0x14]
0203fbbc  and r2,r2,lr
0203fbc0  orr r1,r2,r1, lsr #0x7
0203fbc4  bic r1,r1,#0xff
0203fbc8  orr r0,r1,r0
0203fbcc  str r0,[r3,r7,lsl #0x3]
0203fbd0  bic r1,r0,#0xc000
0203fbd4  ldrb r0,[r9,#0x4]
0203fbd8  ldr r2,[sp,#0x10]
0203fbdc  mov r12,r12, lsl #0x1e
0203fbe0  and r0,r0,#0xc
0203fbe4  mov r0,r0, asr #0x2
0203fbe8  mov r0,r0, lsl #0x1e
0203fbec  orr r0,r1,r0, lsr #0x10
0203fbf0  str r0,[r3,r7,lsl #0x3]
0203fbf4  bic r1,r0,#0xc0000000
0203fbf8  ldrb r0,[r9,#0x4]
0203fbfc  mov r2,r2, lsl #0x1b
0203fc00  orr r0,r1,r0, lsl #0x1e
0203fc04  bic r0,r0,#0x300
0203fc08  orr r0,r0,r12, lsr #0x16
0203fc0c  bic r0,r0,#0x3e000000
0203fc10  orr r0,r0,r2, lsr #0x2
0203fc14  str r0,[r3,r7,lsl #0x3]
0203fc18  b 0x0203fd60
0203fc1c  ldr r3,[r8,#0x10]
0203fc20  ldrsb r6,[r9,#0x2]
0203fc24  mov r2,r3, asr #0xb
0203fc28  add r3,r3,r2, lsr #0x14
0203fc2c  add r2,r1,r6
0203fc30  ldrb r12,[r10,#0x48]
0203fc34  ldr r6,[r8,#0x14]
0203fc38  ldrsb r7,[r9,#0x3]
0203fc3c  mov r12,r12, lsl #0x1
0203fc40  sub r12,r12,#0x1
0203fc44  mla r12,r2,r12,r1
0203fc48  rsb r2,r12,r3, asr #0xc
0203fc4c  add r3,r0,r7
0203fc50  mov r7,r6, asr #0xb
0203fc54  add r6,r6,r7, lsr #0x14
0203fc58  ldrb r12,[r10,#0x49]
0203fc5c  ldrb r7,[r10,#0x10]
0203fc60  mov r12,r12, lsl #0x1
0203fc64  sub r12,r12,#0x1
0203fc68  mla r12,r3,r12,r0
0203fc6c  rsb r3,r12,r6, asr #0xc
0203fc70  mov r6,r7, lsl #0x19
0203fc74  movs r6,r6, lsr #0x1f
0203fc78  beq 0x0203fce8
0203fc7c  cmp r2,#0x100
0203fc80  cmplt r3,#0xc0
0203fc84  bge 0x0203fc9c
0203fc88  add r1,r2,r1, lsl #0x1
0203fc8c  cmp r1,#0x0
0203fc90  addgt r0,r3,r0, lsl #0x1
0203fc94  cmpgt r0,#0x0
0203fc98  bgt 0x0203fce8
0203fc9c  cmp r5,#0x0
0203fca0  bne 0x0203fcbc
0203fca4  ldr r2,[sp,#0x3c]
0203fca8  ldr r3,[sp,#0x30]
0203fcac  mov r0,r10
0203fcb0  mov r1,r4
0203fcb4  bl 0x0203f440
0203fcb8  mov r11,r0
0203fcbc  ldrb r1,[r9,#0x4]
0203fcc0  ldr r0,[0x20400b0]
0203fcc4  and r1,r1,#0xf
0203fcc8  ldr r0,[r0,r1,lsl #0x2]
0203fccc  mov r0,r0, lsl #0x5
0203fcd0  add r1,r0,#0x3f
0203fcd4  mov r0,r1, asr #0x5
0203fcd8  add r0,r1,r0, lsr #0x1a
0203fcdc  mov r0,r0, asr #0x6
0203fce0  add r11,r11,r0, lsl #0x6
0203fce4  b 0x02040058
0203fce8  ldr r0,[sp,#0x4c]
0203fcec  and r1,r3,#0xff
0203fcf0  ldr r3,[r0,#0x400]
0203fcf4  ldr r12,[0x20400b8]
0203fcf8  sub r6,r3,#0x1
0203fcfc  add r7,r0,#0x410
0203fd00  str r6,[r0,#0x400]
0203fd04  ldrb r0,[r9,#0x4]
0203fd08  mov r3,r6, lsl #0x3
0203fd0c  add r6,r7,r6, lsl #0x3
0203fd10  and r0,r0,#0xc
0203fd14  orr r1,r1,r0, lsl #0xc
0203fd18  ldr r0,[sp,#0x18]
0203fd1c  and r2,r2,r12
0203fd20  orr r0,r1,r0, lsl #0xc
0203fd24  strh r0,[r7,r3]
0203fd28  ldrb r7,[r9,#0x4]
0203fd2c  ldrb r1,[r10,#0x48]
0203fd30  ldrb r0,[r10,#0x49]
0203fd34  mov r12,r7, asr #0x4
0203fd38  and r12,r12,#0x1
0203fd3c  eor r1,r1,r12
0203fd40  orr r1,r2,r1, lsl #0xc
0203fd44  mov r2,r7, asr #0x5
0203fd48  and r2,r2,#0x1
0203fd4c  eor r0,r0,r2
0203fd50  mov r3,r7, lsl #0x1e
0203fd54  orr r0,r1,r0, lsl #0xd
0203fd58  orr r0,r0,r3, lsr #0x10
0203fd5c  strh r0,[r6,#0x2]
0203fd60  add r0,sp,#0x58
0203fd64  mov r1,r10
0203fd68  blx 0x02011990
0203fd6c  add r1,sp,#0x58
0203fd70  ldr r0,[r6,#0x4]
0203fd74  ldr r1,[r1,#0x0]
0203fd78  bic r2,r0,#0xc00
0203fd7c  mov r0,r1, asr #0xb
0203fd80  add r0,r1,r0, lsr #0x14
0203fd84  mov r0,r0, asr #0x12
0203fd88  mov r0,r0, lsl #0x1e
0203fd8c  orr r0,r2,r0, lsr #0x14
0203fd90  str r0,[r6,#0x4]
0203fd94  mvn r0,#0x0
0203fd98  mov r1,#0x0
0203fd9c  add r7,sp,#0xcc
0203fda0  ldrb r3,[r9,#0x5]
0203fda4  b 0x0203fdc0
0203fda8  ldr r2,[r7,r1,lsl #0x2]
0203fdac  cmp r2,r3
0203fdb0  addeq r0,sp,#0x8c
0203fdb4  ldreq r0,[r0,r1,lsl #0x2]
0203fdb8  beq 0x0203fdcc
0203fdbc  add r1,r1,#0x1
0203fdc0  ldr r2,[sp,#0x2c]
0203fdc4  cmp r1,r2
0203fdc8  bcc 0x0203fda8
0203fdcc  mvn r1,#0x0
0203fdd0  cmp r0,r1
0203fdd4  bne 0x0203fe30
0203fdd8  add r0,r10,#0x14
0203fddc  bl 0x02019ddc
0203fde0  ldrb r1,[r9,#0x5]
0203fde4  mov r3,r0
0203fde8  ldr r0,[sp,#0x38]
0203fdec  str r1,[sp,#0x0]
0203fdf0  ldrb r7,[r9,#0x5]
0203fdf4  ldr r1,[sp,#0x28]
0203fdf8  mov r2,#0x20
0203fdfc  add r1,r1,r7, lsl #0x5
0203fe00  bl 0x0204572c
0203fe04  ldr r2,[sp,#0x2c]
0203fe08  add r3,sp,#0x8c
0203fe0c  str r0,[r3,r2,lsl #0x2]
0203fe10  mov r0,r2
0203fe14  ldr r0,[r3,r0,lsl #0x2]
0203fe18  ldrb r1,[r9,#0x5]
0203fe1c  add r3,sp,#0xcc
0203fe20  str r1,[r3,r2,lsl #0x2]
0203fe24  mov r1,r2
0203fe28  add r1,r1,#0x1
0203fe2c  str r1,[sp,#0x2c]
0203fe30  mov r0,r0, asr #0x5
0203fe34  mov r1,r0, lsl #0x1c
0203fe38  ldr r2,[r6,#0x4]
0203fe3c  mov r0,r4
0203fe40  bic r2,r2,#0xf000
0203fe44  orr r1,r2,r1, lsr #0x10
0203fe48  str r1,[r6,#0x4]
0203fe4c  ldr r1,[r0,#0x0]
0203fe50  ldr r1,[r1,#0x20]
0203fe54  blx r1
0203fe58  ldr r1,[0x2040094]
0203fe5c  cmp r0,r1
0203fe60  beq 0x0203fe9c
0203fe64  mov r0,r4
0203fe68  ldr r1,[r0,#0x0]
0203fe6c  ldr r1,[r1,#0x20]
0203fe70  blx r1
0203fe74  ldr r1,[0x2040090]
0203fe78  cmp r0,r1
0203fe7c  beq 0x0203fe9c
0203fe80  mov r0,r4
0203fe84  ldr r1,[r0,#0x0]
0203fe88  ldr r1,[r1,#0x20]
0203fe8c  blx r1
0203fe90  ldr r1,[0x2040098]
0203fe94  cmp r0,r1
0203fe98  bne 0x0203ff08
0203fe9c  cmp r5,#0x0
0203fea0  bne 0x0203febc
0203fea4  ldr r2,[sp,#0x3c]
0203fea8  ldr r3,[sp,#0x30]
0203feac  mov r0,r10
0203feb0  mov r1,r4
0203feb4  bl 0x0203f440
0203feb8  mov r11,r0
0203febc  ldrb r1,[r9,#0x4]
0203fec0  ldr r0,[0x20400b0]
0203fec4  ldr r2,[r6,#0x4]
0203fec8  and r1,r1,#0xf
0203fecc  ldr r0,[r0,r1,lsl #0x2]
0203fed0  mov r1,#0x400
0203fed4  mov r0,r0, lsl #0x5
0203fed8  add r3,r0,#0x3f
0203fedc  mov r0,r3, asr #0x5
0203fee0  add r0,r3,r0, lsr #0x1a
0203fee4  mov r3,r0, asr #0x6
0203fee8  rsb r1,r1,#0x0
0203feec  and r2,r2,r1
0203fef0  mov r0,r1, lsr #0x16
0203fef4  and r0,r0,r11, lsr #0x6
0203fef8  orr r0,r2,r0
0203fefc  str r0,[r6,#0x4]
0203ff00  add r11,r11,r3, lsl #0x6
0203ff04  b 0x02040058
0203ff08  mov r0,r4
0203ff0c  ldr r1,[r0,#0x0]
0203ff10  ldr r1,[r1,#0x20]
0203ff14  blx r1
0203ff18  ldr r1,[0x20400bc]
0203ff1c  cmp r0,r1
0203ff20  bne 0x0203ff88
0203ff24  ldrb r3,[r9,#0x4]
0203ff28  ldr r2,[0x20400b0]
0203ff2c  ldrh r7,[r9,#0x0]
0203ff30  and r3,r3,#0xf
0203ff34  ldr r2,[r2,r3,lsl #0x2]
0203ff38  ldr r1,[sp,#0x20]
0203ff3c  mov r2,r2, lsl #0x5
0203ff40  add r3,r2,#0x3f
0203ff44  mov r2,r3, asr #0x5
0203ff48  add r2,r3,r2, lsr #0x1a
0203ff4c  mov r2,r2, asr #0x6
0203ff50  ldr r0,[sp,#0x3c]
0203ff54  add r1,r1,r7, lsl #0x5
0203ff58  mov r2,r2, lsl #0x6
0203ff5c  bl 0x02045570
0203ff60  mov r11,r0
0203ff64  mov r0,#0x400
0203ff68  ldr r1,[r6,#0x4]
0203ff6c  rsb r0,r0,#0x0
0203ff70  and r1,r1,r0
0203ff74  mov r0,r0, lsr #0x16
0203ff78  and r0,r0,r11, lsr #0x6
0203ff7c  orr r0,r1,r0
0203ff80  str r0,[r6,#0x4]
0203ff84  b 0x02040058
0203ff88  mov r0,r4
0203ff8c  ldr r1,[r0,#0x0]
0203ff90  ldr r1,[r1,#0x20]
0203ff94  blx r1
0203ff98  ldr r1,[0x20400c0]
0203ff9c  cmp r0,r1
0203ffa0  bne 0x02040058
0203ffa4  ldrb r0,[r9,#0x4]
0203ffa8  mov r7,#0x0
0203ffac  str r7,[sp,#0x24]
0203ffb0  and r0,r0,#0xf
0203ffb4  str r0,[sp,#0x48]
0203ffb8  mov r0,#0x400
0203ffbc  rsb r0,r0,#0x0
0203ffc0  str r0,[sp,#0x50]
0203ffc4  b 0x02040024
0203ffc8  ldr r1,[0x20400a8]
0203ffcc  ldr r0,[sp,#0x48]
0203ffd0  ldr r3,[r1,r0,lsl #0x2]
0203ffd4  ldr r1,[sp,#0x24]
0203ffd8  mov r2,r3, lsl #0x5
0203ffdc  add r1,r1,r3, lsl #0x5
0203ffe0  str r1,[sp,#0x24]
0203ffe4  ldrh r1,[r9,#0x0]
0203ffe8  ldr r0,[sp,#0x3c]
0203ffec  add r3,r1,r7, lsl #0x5
0203fff0  ldr r1,[sp,#0x20]
0203fff4  add r1,r1,r3, lsl #0x5
0203fff8  bl 0x02045570
0203fffc  cmp r7,#0x0
