0216220c  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
02162210  sub sp,sp,#0x84
02162214  ldr r4,[sp,#0xa8]
02162218  mov r6,r1
0216221c  str r4,[sp,#0xa8]
02162220  ldr r4,[sp,#0xac]
02162224  str r0,[sp,#0x0]
02162228  str r4,[sp,#0xac]
0216222c  mov r4,#0x0
02162230  str r4,[sp,#0x3c]
02162234  mov r5,r2
02162238  ldr r1,[sp,#0x3c]
0216223c  mov r4,r3
02162240  ldr r2,[sp,#0xac]
02162244  mov r3,r1
02162248  str r3,[r2,#0x0]
0216224c  ldr r3,[sp,#0xb0]
02162250  ldr r0,[sp,#0xa8]
02162254  mov r2,#0x10
02162258  str r3,[sp,#0xb0]
0216225c  bl 0x020517fc
02162260  ldr r3,[r4,#0x0]
02162264  ldr r7,[r6,#0x0]
02162268  ldr r1,[r5,#0x0]
0216226c  sub r0,r7,r3
02162270  cmp r0,r1
02162274  ldr r8,[r6,#0x8]
02162278  movle r0,r1
0216227c  ldr r9,[r6,#0x4]
02162280  ldr r4,[r4,#0x4]
02162284  ldr r2,[r5,#0x8]
02162288  sub r1,r8,r3
0216228c  cmp r1,r2
02162290  movge r1,r2
02162294  ldr r2,[r5,#0x4]
02162298  sub r10,r9,r4
0216229c  cmp r10,r2
021622a0  movle r10,r2
021622a4  ldr r6,[r6,#0xc]
021622a8  ldr r2,[r5,#0xc]
021622ac  sub r5,r6,r4
021622b0  cmp r5,r2
021622b4  movge r5,r2
021622b8  cmp r3,#0x0
021622bc  str r0,[sp,#0x54]
021622c0  str r0,[sp,#0x44]
021622c4  movge r0,#0x0
021622c8  movlt r0,#0x2
021622cc  cmp r4,#0x0
021622d0  addlt r0,r0,#0x1
021622d4  andlt r0,r0,#0xff
021622d8  str r1,[sp,#0x5c]
021622dc  str r1,[sp,#0x4c]
021622e0  ldr r1,[0x2162918]
021622e4  add r0,r0,r0, lsl #0x1
021622e8  add r0,r1,r0
021622ec  str r0,[sp,#0x10]
021622f0  mov r0,#0x0
021622f4  str r10,[sp,#0x50]
021622f8  str r10,[sp,#0x48]
021622fc  str r5,[sp,#0x60]
02162300  str r5,[sp,#0x58]
02162304  str r7,[sp,#0x74]
02162308  str r7,[sp,#0x64]
0216230c  str r9,[sp,#0x70]
02162310  str r9,[sp,#0x68]
02162314  str r8,[sp,#0x7c]
02162318  str r8,[sp,#0x6c]
0216231c  str r6,[sp,#0x80]
02162320  str r6,[sp,#0x78]
02162324  str r0,[sp,#0x40]
02162328  ldr r1,[sp,#0x10]
0216232c  ldr r0,[sp,#0x40]
02162330  mov r9,#0x0
02162334  ldrb r5,[r1,r0]
02162338  ldr r0,[sp,#0xb0]
0216233c  add r2,sp,#0x64
02162340  add r1,r2,r5, lsl #0x3
02162344  ldmia r1,{r6,r7}
02162348  str r0,[sp,#0x38]
0216234c  cmp r5,#0x1
02162350  movls r0,#0x1
02162354  strls r0,[sp,#0x38]
02162358  ldr r0,[sp,#0x0]
0216235c  mov r1,r7
02162360  mov r11,r9
02162364  bl 0x02162928
02162368  add r2,sp,#0x44
0216236c  ldr r1,[r2,r5,lsl #0x3]
02162370  str r0,[sp,#0x14]
02162374  str r1,[sp,#0x8]
02162378  add r1,r2,r5, lsl #0x3
0216237c  ldr r1,[r1,#0x4]
02162380  ldr r0,[sp,#0x0]
02162384  str r1,[sp,#0x4]
02162388  ldr r1,[sp,#0x8]
0216238c  mov r8,r1, asr #0xc
02162390  ldr r1,[sp,#0x4]
02162394  bl 0x02162928
02162398  ldr r1,[sp,#0x8]
0216239c  add r4,r0,r1, asr #0xc
021623a0  ldr r1,[sp,#0x14]
021623a4  add r1,r1,r6, asr #0xc
021623a8  cmp r1,r4
021623ac  moveq r0,#0x0
021623b0  streq r0,[sp,#0x34]
021623b4  beq 0x021627ec
021623b8  ldr r1,[sp,#0x8]
021623bc  cmp r6,r1
021623c0  mov r1,#0x0
021623c4  str r1,[sp,#0x30]
021623c8  ble 0x02162404
021623cc  rsb r2,r8,r6, asr #0xc
021623d0  add r8,r1,r2
021623d4  mov r1,#0x1
021623d8  str r1,[sp,#0x20]
021623dc  ldr r1,[sp,#0x0]
021623e0  add r2,sp,#0x44
021623e4  ldr r10,[r1,#0x14]
021623e8  ldr r3,[r2,r5,lsl #0x3]
021623ec  add r1,r10,r4, lsl #0x3
021623f0  ldrh r2,[r1,#0x4]
021623f4  sub r1,r6,r3
021623f8  str r1,[sp,#0x18]
021623fc  sub r1,r3,r2, lsl #0x8
02162400  b 0x0216243c
02162404  sub r2,r8,r6, asr #0xc
02162408  add r8,r1,r2
0216240c  sub r1,r1,#0x1
02162410  str r1,[sp,#0x20]
02162414  ldr r1,[sp,#0x0]
02162418  add r2,sp,#0x44
0216241c  ldr r10,[r1,#0x14]
02162420  ldr r3,[r2,r5,lsl #0x3]
02162424  add r1,r10,r4, lsl #0x3
02162428  ldrh r2,[r1,#0xc]
0216242c  sub r1,r3,r6
02162430  str r1,[sp,#0x18]
02162434  rsb r1,r3,r2, lsl #0x8
02162438  sub r1,r1,#0x1
0216243c  ldr r2,[sp,#0x4]
02162440  cmp r7,r2
02162444  ble 0x02162480
02162448  ldr r2,[sp,#0x14]
0216244c  sub r0,r2,r0
02162450  add r8,r8,r0, asr #0x6
02162454  mov r0,#0x40
02162458  add r2,sp,#0x44
0216245c  str r0,[sp,#0x24]
02162460  add r0,r2,r5, lsl #0x3
02162464  ldr r3,[r0,#0x4]
02162468  add r0,r10,r4, lsl #0x3
0216246c  ldrh r2,[r0,#0x6]
02162470  sub r0,r7,r3
02162474  str r0,[sp,#0x1c]
02162478  sub r0,r3,r2, lsl #0x8
0216247c  b 0x021624bc
02162480  ldr r2,[sp,#0x14]
02162484  sub r0,r0,r2
02162488  add r8,r8,r0, asr #0x6
0216248c  mvn r0,#0x3f
02162490  add r2,sp,#0x44
02162494  str r0,[sp,#0x24]
02162498  add r0,r2,r5, lsl #0x3
0216249c  add r2,r10,r4, lsl #0x3
021624a0  add r2,r2,#0x200
021624a4  ldrh r3,[r2,#0x6]
021624a8  ldr r0,[r0,#0x4]
021624ac  sub r2,r0,r7
021624b0  rsb r0,r0,r3, lsl #0x8
021624b4  str r2,[sp,#0x1c]
021624b8  sub r0,r0,#0x1
021624bc  ldr r3,[sp,#0x18]
021624c0  ldr r2,[sp,#0x1c]
021624c4  cmp r3,r2
021624c8  ble 0x02162550
021624cc  mov r0,r2
021624d0  mul r0,r1,r0
021624d4  mov r0,r0, lsl #0x4
021624d8  mov r1,r3
021624dc  bl 0x0200d12c
021624e0  ldr r1,[sp,#0x4]
021624e4  cmp r7,r1
021624e8  ble 0x02162504
021624ec  rsb r1,r0,r1, lsl #0x4
021624f0  add r0,r10,r4, lsl #0x3
021624f4  ldrh r0,[r0,#0x6]
021624f8  sub r0,r1,r0, lsl #0xc
021624fc  str r0,[sp,#0x28]
02162500  b 0x02162528
02162504  movge r0,#0x0
02162508  strge r0,[sp,#0x28]
0216250c  bge 0x02162528
02162510  add r1,r0,r1, lsl #0x4
02162514  add r0,r10,r4, lsl #0x3
02162518  add r0,r0,#0x200
0216251c  ldrh r0,[r0,#0x6]
02162520  rsb r0,r1,r0, lsl #0xc
02162524  str r0,[sp,#0x28]
02162528  ldr r0,[sp,#0x1c]
0216252c  ldr r1,[sp,#0x18]
02162530  mov r0,r0, lsl #0x10
02162534  bl 0x0200d12c
02162538  mov r1,#0x10000
0216253c  str r1,[sp,#0x2c]
02162540  ldr r1,[sp,#0x24]
02162544  ldr r2,[sp,#0x20]
02162548  str r1,[sp,#0xc]
0216254c  b 0x021625cc
02162550  mov r1,r3
02162554  mul r1,r0,r1
02162558  mov r0,r1, lsl #0x4
0216255c  mov r1,r2
02162560  bl 0x0200d12c
02162564  ldr r1,[sp,#0x8]
02162568  cmp r6,r1
0216256c  ble 0x02162588
02162570  rsb r1,r0,r1, lsl #0x4
02162574  add r0,r10,r4, lsl #0x3
02162578  ldrh r0,[r0,#0x4]
0216257c  sub r0,r1,r0, lsl #0xc
02162580  str r0,[sp,#0x28]
02162584  b 0x021625a8
02162588  movge r0,#0x0
0216258c  strge r0,[sp,#0x28]
02162590  bge 0x021625a8
02162594  add r0,r0,r1, lsl #0x4
02162598  add r1,r10,r4, lsl #0x3
0216259c  ldrh r1,[r1,#0xc]
021625a0  rsb r0,r0,r1, lsl #0xc
021625a4  str r0,[sp,#0x28]
021625a8  ldr r0,[sp,#0x18]
021625ac  ldr r1,[sp,#0x1c]
021625b0  mov r0,r0, lsl #0x10
021625b4  bl 0x0200d12c
021625b8  mov r1,#0x10000
021625bc  str r1,[sp,#0x2c]
021625c0  ldr r1,[sp,#0x20]
021625c4  ldr r2,[sp,#0x24]
021625c8  str r1,[sp,#0xc]
021625cc  mov r1,#0x0
021625d0  b 0x021627dc
021625d4  ldr r3,[sp,#0x28]
021625d8  mov r10,r4
021625dc  add r12,r3,r0
021625e0  ldr r3,[sp,#0x2c]
021625e4  str r12,[sp,#0x28]
021625e8  cmp r12,r3
021625ec  addlt r4,r4,r2
021625f0  blt 0x02162608
021625f4  sub r3,r12,r3
021625f8  sub r3,r3,r0
021625fc  str r3,[sp,#0x28]
02162600  ldr r3,[sp,#0xc]
02162604  add r4,r4,r3
02162608  ldr r3,[sp,#0x0]
0216260c  ldr r3,[r3,#0x14]
02162610  add r12,r3,r4, lsl #0x3
02162614  ldrb lr,[r12,#0x2]
02162618  str r12,[sp,#0x34]
0216261c  cmp lr,#0x7
02162620  beq 0x021627ec
02162624  ldrb r12,[r12,#0x3]
02162628  add r1,r1,#0x1
0216262c  cmp r12,#0x0
02162630  bne 0x021627dc
02162634  ldr r12,[sp,#0x38]
02162638  cmp r12,#0x1
0216263c  bne 0x02162654
02162640  ldr r12,[0x216291c]
02162644  ldrsb r12,[r12,lr]
02162648  cmp r12,#0x0
0216264c  movne r12,#0x1
02162650  bne 0x02162658
02162654  mov r12,#0x0
02162658  cmp r12,#0x0
0216265c  bne 0x021627dc
02162660  ldr r12,[0x216291c]
02162664  ldrsb r12,[r12,lr]
02162668  cmp r12,#0x0
0216266c  bne 0x02162710
02162670  add r12,r10,#0x1
02162674  cmp r4,r12
02162678  bne 0x021626c4
0216267c  add r0,r3,r4, lsl #0x3
02162680  ldrh r1,[r0,#0x4]
02162684  ldr r0,[sp,#0x0]
02162688  add r2,r7,r9
0216268c  rsb r1,r6,r1, lsl #0x8
02162690  sub r11,r1,#0x1
02162694  add r1,r6,r11
02162698  mov r4,r10
0216269c  bl 0x02161bac
021626a0  mov r8,r0
021626a4  mov r0,#0x0
021626a8  mov r3,r10, asr #0x6
021626ac  rsbs r8,r3,r8, asr #0x6
021626b0  str r0,[sp,#0x28]
021626b4  ldr r2,[sp,#0x24]
021626b8  mov r1,r0
021626bc  rsbmi r8,r8,#0x0
021626c0  b 0x02162710
021626c4  sub r12,r10,#0x1
021626c8  cmp r4,r12
021626cc  bne 0x02162710
021626d0  add r0,r3,r4, lsl #0x3
021626d4  ldrh r1,[r0,#0xc]
021626d8  ldr r0,[sp,#0x0]
021626dc  add r2,r7,r9
021626e0  rsb r11,r6,r1, lsl #0x8
021626e4  add r1,r6,r11
021626e8  mov r4,r10
021626ec  bl 0x02161bac
021626f0  mov r8,r0
021626f4  mov r0,#0x0
021626f8  mov r3,r10, asr #0x6
021626fc  rsbs r8,r3,r8, asr #0x6
02162700  ldr r2,[sp,#0x24]
02162704  str r0,[sp,#0x28]
02162708  mov r1,r0
0216270c  rsbmi r8,r8,#0x0
02162710  add r3,r10,#0x40
02162714  cmp r4,r3
02162718  bne 0x02162770
0216271c  ldr r0,[sp,#0x34]
02162720  str r0,[sp,#0x30]
02162724  ldr r0,[sp,#0x0]
02162728  ldr r1,[r0,#0x14]
0216272c  add r1,r1,r4, lsl #0x3
02162730  ldrh r2,[r1,#0x6]
02162734  add r1,r6,r11
02162738  mov r4,r10
0216273c  rsb r2,r7,r2, lsl #0x8
02162740  sub r9,r2,#0x1
02162744  add r2,r7,r9
02162748  bl 0x02161bac
0216274c  and r1,r10,#0x3f
02162750  and r0,r0,#0x3f
02162754  subs r8,r0,r1
02162758  mov r0,#0x0
0216275c  str r0,[sp,#0x28]
02162760  ldr r2,[sp,#0x20]
02162764  mov r1,r0
02162768  rsbmi r8,r8,#0x0
0216276c  b 0x021627dc
02162770  sub r3,r10,#0x40
02162774  cmp r4,r3
02162778  bne 0x021627dc
0216277c  ldr r3,[sp,#0x34]
02162780  ldrb r12,[r3,#0x2]
02162784  ldr r3,[0x2162920]
02162788  ldrsb r3,[r3,r12]
0216278c  cmp r3,#0x0
02162790  beq 0x021627dc
02162794  ldr r0,[sp,#0x0]
02162798  ldr r1,[r0,#0x14]
0216279c  add r1,r1,r4, lsl #0x3
021627a0  add r1,r1,#0x200
021627a4  ldrh r2,[r1,#0x6]
021627a8  add r1,r6,r11
021627ac  mov r4,r10
021627b0  rsb r9,r7,r2, lsl #0x8
021627b4  add r2,r7,r9
021627b8  bl 0x02161bac
021627bc  and r1,r10,#0x3f
021627c0  and r0,r0,#0x3f
021627c4  subs r8,r0,r1
021627c8  mov r0,#0x0
021627cc  ldr r2,[sp,#0x20]
021627d0  str r0,[sp,#0x28]
021627d4  mov r1,r0
021627d8  rsbmi r8,r8,#0x0
021627dc  cmp r1,r8
021627e0  bcc 0x021625d4
021627e4  ldr r0,[sp,#0x30]
021627e8  str r0,[sp,#0x34]
021627ec  cmp r5,#0x2
021627f0  bcc 0x02162800
021627f4  ldr r0,[sp,#0x34]
021627f8  cmp r0,#0x0
021627fc  strne r0,[sp,#0x3c]
02162800  cmp r11,#0x0
02162804  cmpeq r9,#0x0
02162808  beq 0x021628f8
0216280c  ldr r0,[sp,#0x40]
02162810  add r2,sp,#0x64
02162814  add r6,r0,#0x1
02162818  mov r0,#0x0
0216281c  b 0x02162848
02162820  ldr r1,[sp,#0x10]
02162824  ldrb r4,[r1,r6]
02162828  add r6,r6,#0x1
0216282c  ldr r1,[r2,r4,lsl #0x3]
02162830  add r3,r2,r4, lsl #0x3
02162834  add r1,r1,r11
02162838  str r1,[r2,r4,lsl #0x3]
0216283c  ldr r1,[r3,#0x4]
02162840  add r1,r1,r9
02162844  str r1,[r3,#0x4]
02162848  cmp r6,#0x3
0216284c  blt 0x02162820
02162850  cmp r11,#0x0
02162854  ble 0x02162874
02162858  add r1,sp,#0x64
0216285c  ldr r1,[r1,r5,lsl #0x3]
02162860  orr r0,r0,#0x8
02162864  add r2,r11,r1
02162868  ldr r1,[sp,#0xa8]
0216286c  str r2,[r1,#0x0]
02162870  b 0x02162890
02162874  bge 0x02162890
02162878  add r1,sp,#0x64
0216287c  ldr r1,[r1,r5,lsl #0x3]
02162880  orr r0,r0,#0x2
02162884  add r2,r11,r1
02162888  ldr r1,[sp,#0xa8]
0216288c  str r2,[r1,#0x8]
02162890  cmp r9,#0x0
02162894  ble 0x021628b8
02162898  add r1,sp,#0x64
0216289c  add r1,r1,r5, lsl #0x3
021628a0  ldr r1,[r1,#0x4]
021628a4  orr r0,r0,#0x1
021628a8  add r2,r9,r1
021628ac  ldr r1,[sp,#0xa8]
021628b0  str r2,[r1,#0x4]
021628b4  b 0x021628d8
021628b8  bge 0x021628d8
021628bc  add r1,sp,#0x64
021628c0  add r1,r1,r5, lsl #0x3
021628c4  ldr r1,[r1,#0x4]
021628c8  orr r0,r0,#0x4
021628cc  add r2,r9,r1
021628d0  ldr r1,[sp,#0xa8]
021628d4  str r2,[r1,#0xc]
021628d8  ldr r1,[sp,#0xac]
021628dc  ldr r2,[0x2162924]
021628e0  ldr r3,[r1,#0x0]
021628e4  ldrb r1,[r2,r5]
021628e8  and r0,r0,r1
021628ec  orr r1,r3,r0
021628f0  ldr r0,[sp,#0xac]
021628f4  str r1,[r0,#0x0]
021628f8  ldr r0,[sp,#0x40]
021628fc  add r0,r0,#0x1
02162900  str r0,[sp,#0x40]
02162904  cmp r0,#0x3
02162908  blt 0x02162328
0216290c  ldr r0,[sp,#0x3c]
02162910  add sp,sp,#0x84
02162914  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,pc}
