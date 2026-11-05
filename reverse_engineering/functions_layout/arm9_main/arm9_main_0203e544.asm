0203e544  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
0203e548  sub sp,sp,#0x20
0203e54c  ldr r0,[0x203ec30]
0203e550  ldr r1,[r0,#0x288]
0203e554  cmp r1,#0x0
0203e558  beq 0x0203ec28
0203e55c  subs r1,r1,#0x1
0203e560  str r1,[r0,#0x288]
0203e564  beq 0x0203ec28
0203e568  mov r4,#0x0
0203e56c  ldr r5,[0x203ec34]
0203e570  ldr r8,[0x203ec38]
0203e574  mov r7,r4
0203e578  add r9,sp,#0x10
0203e57c  ldr r1,[r5,r7,lsl #0x2]
0203e580  ldrb r0,[r1,#0x957]
0203e584  ldr r1,[r1,#0x94c]
0203e588  blx r1
0203e58c  ldr r0,[r5,r7,lsl #0x2]
0203e590  ldr r0,[r0,#0x948]
0203e594  blx r0
0203e598  ldr r1,[r5,r7,lsl #0x2]
0203e59c  ldr r1,[r1,#0x964]
0203e5a0  and r1,r1,r8
0203e5a4  add r0,r1,r0
0203e5a8  str r0,[r9,r7,lsl #0x2]
0203e5ac  add r7,r7,#0x1
0203e5b0  cmp r7,#0x4
0203e5b4  bcc 0x0203e57c
0203e5b8  ldr r0,[0x203ec3c]
0203e5bc  ldr r1,[0x203ec40]
0203e5c0  ldrb r2,[r0,#0x2]
0203e5c4  ldrb r0,[r0,#0x0]
0203e5c8  mov r5,#0x0
0203e5cc  orr r0,r2,r0, lsl #0x4
0203e5d0  strb r0,[r1,#0x0]
0203e5d4  blx 0x020650a4
0203e5d8  tst r0,#0x1
0203e5dc  addne r5,r5,#0x20000
0203e5e0  tst r0,#0x2
0203e5e4  addne r5,r5,#0x20000
0203e5e8  tst r0,#0x4
0203e5ec  addne r5,r5,#0x20000
0203e5f0  tst r0,#0x8
0203e5f4  addne r5,r5,#0x20000
0203e5f8  tst r0,#0x10
0203e5fc  addne r5,r5,#0x10000
0203e600  tst r0,#0x20
0203e604  addne r5,r5,#0x4000
0203e608  tst r0,#0x40
0203e60c  addne r5,r5,#0x4000
0203e610  tst r0,#0x80
0203e614  addne r5,r5,#0x8000
0203e618  tst r0,#0x100
0203e61c  mov r3,#0x800
0203e620  ldr r0,[0x203ec34]
0203e624  addne r5,r5,#0x4000
0203e628  mov r1,#0x0
0203e62c  rsb r3,r3,#0x0
0203e630  ldr r7,[r0,r1,lsl #0x2]
0203e634  ldr r2,[r7,#0x960]
0203e638  cmp r2,#0x0
0203e63c  beq 0x0203e65c
0203e640  str r4,[r7,#0x968]
0203e644  ldr r2,[r0,r1,lsl #0x2]
0203e648  ldr r2,[r2,#0x960]
0203e64c  add r2,r2,#0xff
0203e650  add r2,r2,#0x700
0203e654  and r2,r2,r3
0203e658  add r4,r4,r2
0203e65c  add r1,r1,#0x1
0203e660  cmp r1,#0x4
0203e664  bcc 0x0203e630
0203e668  add r0,r4,#0xff
0203e66c  mov r7,#0x4000
0203e670  add r0,r0,#0x3f00
0203e674  rsb r7,r7,#0x0
0203e678  and r2,r0,r7
0203e67c  ldr r0,[0x203ec34]
0203e680  mov r1,#0x0
0203e684  ldr r8,[r0,r1,lsl #0x2]
0203e688  ldr r3,[r8,#0x95c]
0203e68c  cmp r3,#0x0
0203e690  beq 0x0203e6b0
0203e694  str r2,[r8,#0x964]
0203e698  ldr r3,[r0,r1,lsl #0x2]
0203e69c  ldr r3,[r3,#0x95c]
0203e6a0  add r3,r3,#0xff
0203e6a4  add r3,r3,#0x3f00
0203e6a8  and r3,r3,r7
0203e6ac  add r2,r2,r3
0203e6b0  add r1,r1,#0x1
0203e6b4  cmp r1,#0x4
0203e6b8  bcc 0x0203e684
0203e6bc  cmp r2,r5
0203e6c0  bls 0x0203e70c
0203e6c4  mov r1,#0x800
0203e6c8  ldr r3,[0x203ec34]
0203e6cc  mov r5,#0x0
0203e6d0  rsb r1,r1,#0x0
0203e6d4  ldr r2,[r3,r5,lsl #0x2]
0203e6d8  ldr r0,[r2,#0x95c]
0203e6dc  cmp r0,#0x0
0203e6e0  beq 0x0203e700
0203e6e4  str r4,[r2,#0x964]
0203e6e8  ldr r0,[r3,r5,lsl #0x2]
0203e6ec  ldr r0,[r0,#0x95c]
0203e6f0  add r0,r0,#0xff
0203e6f4  add r0,r0,#0x700
0203e6f8  and r0,r0,r1
0203e6fc  add r4,r4,r0
0203e700  add r5,r5,#0x1
0203e704  cmp r5,#0x4
0203e708  bcc 0x0203e6d4
0203e70c  ldr r0,[0x203ec30]
0203e710  ldr r1,[r0,#0xae0]
0203e714  ldr r1,[r1,#0x8e4]
0203e718  cmp r1,#0x1
0203e71c  bne 0x0203e7d8
0203e720  ldr r1,[r0,#0xae4]
0203e724  ldr r1,[r1,#0x8e4]
0203e728  cmp r1,#0x1
0203e72c  bne 0x0203e778
0203e730  ldr r0,[r0,#0xae8]
0203e734  ldr r0,[r0,#0x8e4]
0203e738  cmp r0,#0x1
0203e73c  bne 0x0203e74c
0203e740  mov r0,#0x0
0203e744  blx 0x02064e28
0203e748  b 0x0203e7d8
0203e74c  cmp r0,#0x2
0203e750  bne 0x0203e760
0203e754  mov r0,#0x1
0203e758  blx 0x02064e28
0203e75c  b 0x0203e7d8
0203e760  sub r0,r0,#0x3
0203e764  cmp r0,#0x2
0203e768  bhi 0x0203e7d8
0203e76c  mov r0,#0x3
0203e770  blx 0x02064e28
0203e774  b 0x0203e7d8
0203e778  cmp r1,#0x2
0203e77c  bne 0x0203e7b4
0203e780  ldr r0,[r0,#0xae8]
0203e784  ldr r0,[r0,#0x8e4]
0203e788  cmp r0,#0x2
0203e78c  bne 0x0203e79c
0203e790  mov r0,#0x2
0203e794  blx 0x02064e28
0203e798  b 0x0203e7d8
0203e79c  sub r0,r0,#0x3
0203e7a0  cmp r0,#0x2
0203e7a4  bhi 0x0203e7d8
0203e7a8  mov r0,#0x4
0203e7ac  blx 0x02064e28
0203e7b0  b 0x0203e7d8
0203e7b4  sub r1,r1,#0x3
0203e7b8  cmp r1,#0x2
0203e7bc  ldrls r0,[r0,#0xae8]
0203e7c0  ldrls r0,[r0,#0x8e4]
0203e7c4  subls r0,r0,#0x3
0203e7c8  cmpls r0,#0x2
0203e7cc  bhi 0x0203e7d8
0203e7d0  mov r0,#0x5
0203e7d4  blx 0x02064e28
0203e7d8  ldr r5,[0x203ec34]
0203e7dc  ldr r4,[0x203ec44]
0203e7e0  ldr r10,[0x203ec38]
0203e7e4  mov r9,#0x0
0203e7e8  ldr r0,[r5,r9,lsl #0x2]
0203e7ec  ldr r1,[r0,#0x8e4]
0203e7f0  cmp r1,#0x1
0203e7f4  bne 0x0203e878
0203e7f8  add r2,r0,#0x800
0203e7fc  ldrh r1,[r2,#0xc8]
0203e800  cmp r1,#0x0
0203e804  beq 0x0203e818
0203e808  cmp r1,#0x20
0203e80c  ldrheq r2,[r2,#0xca]
0203e810  cmpeq r2,#0x20
0203e814  bne 0x0203e824
0203e818  mov r1,#0x0
0203e81c  str r1,[sp,#0xc]
0203e820  b 0x0203e8dc
0203e824  cmp r1,#0x40
0203e828  addeq r2,r0,#0x800
0203e82c  ldrheq r2,[r2,#0xca]
0203e830  cmpeq r2,#0x20
0203e834  moveq r1,#0x1
0203e838  streq r1,[sp,#0xc]
0203e83c  beq 0x0203e8dc
0203e840  cmp r1,#0x20
0203e844  addeq r2,r0,#0x800
0203e848  ldrheq r2,[r2,#0xca]
0203e84c  cmpeq r2,#0x40
0203e850  moveq r1,#0x2
0203e854  streq r1,[sp,#0xc]
0203e858  beq 0x0203e8dc
0203e85c  cmp r1,#0x40
0203e860  addeq r1,r0,#0x800
0203e864  ldrheq r1,[r1,#0xca]
0203e868  cmpeq r1,#0x40
0203e86c  moveq r1,#0x3
0203e870  streq r1,[sp,#0xc]
0203e874  b 0x0203e8dc
0203e878  sub r1,r1,#0x2
0203e87c  cmp r1,#0x3
0203e880  bhi 0x0203e8dc
0203e884  add r1,r0,#0x800
0203e888  ldrh r1,[r1,#0xc8]
0203e88c  cmp r1,#0x20
0203e890  bgt 0x0203e8b4
0203e894  bge 0x0203e8d8
0203e898  cmp r1,#0x0
0203e89c  bgt 0x0203e8a8
0203e8a0  beq 0x0203e8d0
0203e8a4  b 0x0203e8dc
0203e8a8  cmp r1,#0x10
0203e8ac  beq 0x0203e8d0
0203e8b0  b 0x0203e8dc
0203e8b4  cmp r1,#0x40
0203e8b8  bgt 0x0203e8c4
0203e8bc  moveq r6,#0x2
0203e8c0  b 0x0203e8dc
0203e8c4  cmp r1,#0x80
0203e8c8  moveq r6,#0x3
0203e8cc  b 0x0203e8dc
0203e8d0  mov r6,#0x0
0203e8d4  b 0x0203e8dc
0203e8d8  mov r6,#0x1
0203e8dc  ldr r1,[r0,#0x8dc]
0203e8e0  mov r11,r9, lsr #0x1
0203e8e4  cmp r1,#0x4
0203e8e8  movne r0,#0x1
0203e8ec  strne r0,[sp,#0x4]
0203e8f0  moveq r0,#0x0
0203e8f4  streq r0,[sp,#0x4]
0203e8f8  ldr r0,[r5,r9,lsl #0x2]
0203e8fc  mov r1,r1, lsl #0x3
0203e900  ldr r2,[r0,#0x968]
0203e904  str r0,[sp,#0x8]
0203e908  ldr r0,[r0,#0x964]
0203e90c  mov r7,r2, lsr #0xb
0203e910  mov r8,r0, lsr #0xe
0203e914  and r0,r0,r10
0203e918  bl 0x0200d338
0203e91c  ldr r1,[sp,#0x8]
0203e920  cmp r9,#0x3
0203e924  str r0,[r1,#0x8e0]
0203e928  addls pc,pc,r9, lsl #0x2
0203e92c  b 0x0203eba4
0203e930  b 0x0203e940
0203e934  b 0x0203e97c
0203e938  b 0x0203e9b8
0203e93c  b 0x0203eab0
0203e940  str r11,[sp,#0x0]
0203e944  ldr r1,[sp,#0x4]
0203e948  ldr r0,[sp,#0xc]
0203e94c  mov r2,r7
0203e950  mov r3,r8
0203e954  bl 0x0203ec50
0203e958  blx 0x02065d08
0203e95c  ldr r2,[r5,r9,lsl #0x2]
0203e960  ldr r1,[0x203ec48]
0203e964  ldr r2,[r2,#0x964]
0203e968  ldr r1,[r1,r9,lsl #0x2]
0203e96c  and r2,r2,r10
0203e970  add r0,r2,r0
0203e974  str r0,[r1,#0x1c]
0203e978  b 0x0203eba4
0203e97c  str r11,[sp,#0x0]
0203e980  ldr r1,[sp,#0x4]
0203e984  ldr r0,[sp,#0xc]
0203e988  mov r2,r7
0203e98c  mov r3,r8
0203e990  bl 0x0203ec84
0203e994  blx 0x02065cbc
0203e998  ldr r2,[r5,r9,lsl #0x2]
0203e99c  ldr r1,[0x203ec48]
0203e9a0  ldr r2,[r2,#0x964]
0203e9a4  ldr r1,[r1,r9,lsl #0x2]
0203e9a8  and r2,r2,r10
0203e9ac  add r0,r2,r0
0203e9b0  str r0,[r1,#0x1c]
0203e9b4  b 0x0203eba4
0203e9b8  ldr r1,[r5,r9,lsl #0x2]
0203e9bc  ldr r0,[r1,#0x8e4]
0203e9c0  cmp r0,#0x1
0203e9c4  bne 0x0203e9e0
0203e9c8  ldr r1,[sp,#0x4]
0203e9cc  ldr r0,[sp,#0xc]
0203e9d0  mov r2,r7
0203e9d4  mov r3,r8
0203e9d8  bl 0x0203ecb8
0203e9dc  b 0x0203ea8c
0203e9e0  cmp r0,#0x2
0203e9e4  bne 0x0203ea0c
0203e9e8  ldr r0,[r1,#0x970]
0203e9ec  ldrh r1,[r4,#0x0]
0203e9f0  and r1,r1,#0x43
0203e9f4  orr r1,r1,r6, lsl #0xe
0203e9f8  orr r1,r1,r7, lsl #0x8
0203e9fc  orr r1,r1,r8, lsl #0x2
0203ea00  orr r0,r1,r0, lsl #0xd
0203ea04  strh r0,[r4,#0x0]
0203ea08  b 0x0203ea8c
0203ea0c  cmp r0,#0x3
0203ea10  bne 0x0203ea38
0203ea14  ldr r0,[r1,#0x970]
0203ea18  ldrh r1,[r4,#0x0]
0203ea1c  and r1,r1,#0x43
0203ea20  orr r1,r1,r6, lsl #0xe
0203ea24  orr r1,r1,r8, lsl #0x2
0203ea28  orr r1,r1,r7, lsl #0x8
0203ea2c  orr r0,r1,r0, lsl #0xd
0203ea30  strh r0,[r4,#0x0]
0203ea34  b 0x0203ea8c
0203ea38  cmp r0,#0x4
0203ea3c  bne 0x0203ea64
0203ea40  ldr r1,[r1,#0x970]
0203ea44  ldrh r0,[r4,#0x0]
0203ea48  and r0,r0,#0x43
0203ea4c  orr r0,r0,r6, lsl #0xe
0203ea50  orr r0,r0,#0x80
0203ea54  orr r0,r0,r8, lsl #0x8
0203ea58  orr r0,r0,r1, lsl #0xd
0203ea5c  strh r0,[r4,#0x0]
0203ea60  b 0x0203ea8c
0203ea64  cmp r0,#0x5
0203ea68  bne 0x0203ea8c
0203ea6c  ldr r1,[r1,#0x970]
0203ea70  ldrh r0,[r4,#0x0]
0203ea74  and r0,r0,#0x43
0203ea78  orr r0,r0,r6, lsl #0xe
0203ea7c  orr r0,r0,#0x84
0203ea80  orr r0,r0,r8, lsl #0x8
0203ea84  orr r0,r0,r1, lsl #0xd
0203ea88  strh r0,[r4,#0x0]
0203ea8c  blx 0x02065c38
0203ea90  ldr r2,[r5,r9,lsl #0x2]
0203ea94  ldr r1,[0x203ec48]
0203ea98  ldr r2,[r2,#0x964]
0203ea9c  ldr r1,[r1,r9,lsl #0x2]
0203eaa0  and r2,r2,r10
0203eaa4  add r0,r2,r0
0203eaa8  str r0,[r1,#0x1c]
0203eaac  b 0x0203eba4
0203eab0  ldr r1,[r5,r9,lsl #0x2]
0203eab4  ldr r0,[r1,#0x8e4]
0203eab8  cmp r0,#0x1
0203eabc  bne 0x0203ead8
0203eac0  ldr r1,[sp,#0x4]
0203eac4  ldr r0,[sp,#0xc]
0203eac8  mov r2,r7
0203eacc  mov r3,r8
0203ead0  bl 0x0203ece4
0203ead4  b 0x0203eb84
0203ead8  cmp r0,#0x2
0203eadc  bne 0x0203eb04
0203eae0  ldr r0,[r1,#0x970]
0203eae4  ldrh r1,[r4,#0x2]
0203eae8  and r1,r1,#0x43
0203eaec  orr r1,r1,r6, lsl #0xe
0203eaf0  orr r1,r1,r7, lsl #0x8
0203eaf4  orr r1,r1,r8, lsl #0x2
0203eaf8  orr r0,r1,r0, lsl #0xd
0203eafc  strh r0,[r4,#0x2]
0203eb00  b 0x0203eb84
0203eb04  cmp r0,#0x3
0203eb08  bne 0x0203eb30
0203eb0c  ldr r0,[r1,#0x970]
0203eb10  ldrh r1,[r4,#0x2]
0203eb14  and r1,r1,#0x43
0203eb18  orr r1,r1,r6, lsl #0xe
0203eb1c  orr r1,r1,r8, lsl #0x2
0203eb20  orr r1,r1,r7, lsl #0x8
0203eb24  orr r0,r1,r0, lsl #0xd
0203eb28  strh r0,[r4,#0x2]
0203eb2c  b 0x0203eb84
0203eb30  cmp r0,#0x4
0203eb34  bne 0x0203eb5c
0203eb38  ldr r1,[r1,#0x970]
0203eb3c  ldrh r0,[r4,#0x2]
0203eb40  and r0,r0,#0x43
0203eb44  orr r0,r0,r6, lsl #0xe
0203eb48  orr r0,r0,#0x80
0203eb4c  orr r0,r0,r8, lsl #0x8
0203eb50  orr r0,r0,r1, lsl #0xd
0203eb54  strh r0,[r4,#0x2]
0203eb58  b 0x0203eb84
0203eb5c  cmp r0,#0x5
0203eb60  bne 0x0203eb84
0203eb64  ldr r1,[r1,#0x970]
0203eb68  ldrh r0,[r4,#0x2]
0203eb6c  and r0,r0,#0x43
0203eb70  orr r0,r0,r6, lsl #0xe
0203eb74  orr r0,r0,#0x84
0203eb78  orr r0,r0,r8, lsl #0x8
0203eb7c  orr r0,r0,r1, lsl #0xd
0203eb80  strh r0,[r4,#0x2]
0203eb84  blx 0x02065bac
0203eb88  ldr r2,[r5,r9,lsl #0x2]
0203eb8c  ldr r1,[0x203ec48]
0203eb90  ldr r2,[r2,#0x964]
0203eb94  ldr r1,[r1,r9,lsl #0x2]
0203eb98  and r2,r2,r10
0203eb9c  add r0,r2,r0
0203eba0  str r0,[r1,#0x1c]
0203eba4  ldr r1,[r5,r9,lsl #0x2]
0203eba8  ldr r0,[0x203ec48]
0203ebac  ldr r1,[r1,#0x95c]
0203ebb0  ldr r0,[r0,r9,lsl #0x2]
0203ebb4  str r1,[r0,#0x4]
0203ebb8  ldr r7,[r5,r9,lsl #0x2]
0203ebbc  ldr r0,[r7,#0x948]
0203ebc0  blx r0
0203ebc4  add r1,sp,#0x10
0203ebc8  ldr r2,[r7,#0x964]
0203ebcc  ldr r3,[r1,r9,lsl #0x2]
0203ebd0  and r1,r2,r10
0203ebd4  add r0,r1,r0
0203ebd8  cmp r3,r0
0203ebdc  beq 0x0203ec1c
0203ebe0  ldr r0,[0x203ec4c]
0203ebe4  ldr r7,[r5,r9,lsl #0x2]
0203ebe8  ldr r8,[r0,#0x0]
0203ebec  ldr r0,[r7,#0x948]
0203ebf0  blx r0
0203ebf4  ldr r3,[r7,#0x960]
0203ebf8  ldr r7,[r5,r9,lsl #0x2]
0203ebfc  add r1,sp,#0x10
0203ec00  ldr r7,[r7,#0x964]
0203ec04  mov r2,r0
0203ec08  and r7,r7,r10
0203ec0c  ldr r1,[r1,r9,lsl #0x2]
0203ec10  mov r0,r8
0203ec14  add r2,r7,r2
0203ec18  bl 0x0205160c
0203ec1c  add r9,r9,#0x1
0203ec20  cmp r9,#0x4
0203ec24  bcc 0x0203e7e8
0203ec28  add sp,sp,#0x20
0203ec2c  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
