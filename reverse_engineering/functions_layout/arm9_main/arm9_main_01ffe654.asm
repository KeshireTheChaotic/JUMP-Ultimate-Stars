01ffe5fc  mov r4,r3, lsr #0x1a
01ffe600  mov r3,r3, lsl #0x6
01ffe604  subs r2,r2,#0x6
01ffe608  bllt 0x01ff943c
01ffe60c  and r5,r4,#0x3
01ffe610  mov r4,r4, lsr #0x2
01ffe614  add r4,r4,#0x1
01ffe618  cmp r5,r4
01ffe61c  movgt r4,#0x0
01ffe620  strb r4,[r12,#0x0]
01ffe624  ldmiagt sp!,{r4,r12,pc}
01ffe628  b 0x01ffe6f0
01ffe62c  clz r9,r3
01ffe630  add r9,r9,#0x1
01ffe634  cmp r9,#0x4
01ffe638  addge r8,r9,#0x3
01ffe63c  bge 0x01ffe7f0
01ffe640  mov r8,r3, lsr #0x1d
01ffe644  rsb r8,r8,#0x7
01ffe648  mov r3,r3, lsl #0x3
01ffe64c  subs r2,r2,#0x3
01ffe650  b 0x01ffe7f8
01ffe654  stmdb sp!,{r4,r12,lr}
01ffe658  cmp r10,#0x8
01ffe65c  bge 0x01ffe5fc
01ffe660  ldr r9,[0x1ffec68]
01ffe664  mov r4,r3
01ffe668  add r10,r10,r9
01ffe66c  ldrb r7,[r10,#0x8]
01ffe670  ldrb r6,[r10,#0x0]
01ffe674  add r7,r7,r9
01ffe678  ldr r9,[0x1ffec6c]
01ffe67c  mov r5,r4, lsr #0x1c
01ffe680  add r10,r9,r6, lsl #0x4
01ffe684  ldrsb r6,[r10,r5]
01ffe688  cmp r6,#0x0
01ffe68c  bge 0x01ffe6d0
01ffe690  mov r4,r4, lsl #0x4
01ffe694  sub r10,r9,r6, lsl #0x4
01ffe698  mov r5,r4, lsr #0x1c
01ffe69c  ldrsb r6,[r10,r5]
01ffe6a0  cmp r6,#0x0
01ffe6a4  bge 0x01ffe6d0
01ffe6a8  mov r4,r4, lsl #0x4
01ffe6ac  sub r10,r9,r6, lsl #0x4
01ffe6b0  mov r5,r4, lsr #0x1c
01ffe6b4  ldrsb r6,[r10,r5]
01ffe6b8  cmp r6,#0x0
01ffe6bc  bge 0x01ffe6d0
01ffe6c0  mov r4,r4, lsl #0x4
01ffe6c4  sub r10,r9,r6, lsl #0x4
01ffe6c8  mov r5,r4, lsr #0x1c
01ffe6cc  ldrsb r6,[r10,r5]
01ffe6d0  ldrb r8,[r7,r6]
01ffe6d4  and r5,r6,#0x3
01ffe6d8  mov r3,r3, lsl r8
01ffe6dc  subs r2,r2,r8
01ffe6e0  bllt 0x01ff943c
01ffe6e4  movs r4,r6, lsr #0x2
01ffe6e8  strb r4,[r12,#0x0]
01ffe6ec  ldmiaeq sp!,{r4,r12,pc}
01ffe6f0  sub r7,sp,#0x40
01ffe6f4  cmp r4,#0x10
01ffe6f8  moveq r6,#0x0
01ffe6fc  beq 0x01ffe750
01ffe700  ldr r9,[0x1ffec70]
01ffe704  sub r10,r4,#0x1
01ffe708  ldrb r8,[r9,r10]
01ffe70c  add r10,r10,#0x4
01ffe710  ldr r9,[r9,r10,lsl #0x2]
01ffe714  rsb r10,r8,#0x20
01ffe718  mov r8,r3, lsr r10
01ffe71c  add r8,r8,#0x10
01ffe720  ldrb r6,[r9,r8]
01ffe724  ldrb r8,[r9,r6]
01ffe728  mov r3,r3, lsl r8
01ffe72c  subs r2,r2,r8
01ffe730  bllt 0x01ff943c
01ffe734  add r9,r4,r6
01ffe738  rsbs r9,r9,#0x10
01ffe73c  beq 0x01ffe750
01ffe740  mov r10,#0x0
01ffe744  str r10,[r7,#-0x4]!
01ffe748  subs r9,r9,#0x1
01ffe74c  bne 0x01ffe744
01ffe750  mov r12,#0x0
01ffe754  subs r5,r5,#0x1
01ffe758  bge 0x01ffe81c
01ffe75c  clz r8,r3
01ffe760  mov r3,r3, lsl r8
01ffe764  add r3,r3,r3
01ffe768  sub r2,r2,r8
01ffe76c  subs r2,r2,#0x1
01ffe770  bllt 0x01ff943c
01ffe774  cmp r8,#0xf
01ffe778  beq 0x01ffe838
01ffe77c  rsb r9,r12,#0x20
01ffe780  mov r9,r3, lsr r9
01ffe784  add r9,r9,r8, lsl r12
01ffe788  adr r8,0x1ffe5e4
01ffe78c  ldr r8,[r8,r12,lsl #0x2]
01ffe790  add r10,r12,#0x1
01ffe794  cmp r9,r8
01ffe798  addgt r12,r12,#0x1
01ffe79c  movs r3,r3, lsl r10
01ffe7a0  add r9,r9,#0x1
01ffe7a4  rsbcs r9,r9,#0x0
01ffe7a8  str r9,[r7,#-0x4]!
01ffe7ac  subs r2,r2,r10
01ffe7b0  bllt 0x01ff943c
01ffe7b4  subs r4,r4,#0x1
01ffe7b8  beq 0x01ffe870
01ffe7bc  subs r10,r6,#0x1
01ffe7c0  blt 0x01ffe754
01ffe7c4  cmp r10,#0x6
01ffe7c8  bge 0x01ffe62c
01ffe7cc  ldr r9,[0x1ffec74]
01ffe7d0  ldrb r8,[r9,r10]
01ffe7d4  add r10,r10,#0x2
01ffe7d8  ldr r9,[r9,r10,lsl #0x2]
01ffe7dc  rsb r10,r8,#0x20
01ffe7e0  mov r8,r3, lsr r10
01ffe7e4  add r8,r8,#0x10
01ffe7e8  ldrb r8,[r9,r8]
01ffe7ec  ldrb r9,[r9,r8]
01ffe7f0  mov r3,r3, lsl r9
01ffe7f4  subs r2,r2,r9
01ffe7f8  bllt 0x01ff943c
01ffe7fc  cmp r8,#0x0
01ffe800  beq 0x01ffe754
01ffe804  sub r6,r6,r8
01ffe808  mov r9,#0x0
01ffe80c  str r9,[r7,#-0x4]!
01ffe810  subs r8,r8,#0x1
01ffe814  bne 0x01ffe80c
01ffe818  b 0x01ffe754
01ffe81c  adds r3,r3,r3
01ffe820  mvncs r10,#0x0
01ffe824  movcc r10,#0x1
01ffe828  str r10,[r7,#-0x4]!
01ffe82c  subs r2,r2,#0x1
01ffe830  bllt 0x01ff943c
01ffe834  b 0x01ffe7b4
01ffe838  mov r9,r3, lsr #0x15
01ffe83c  mov r8,#0xf
01ffe840  add r9,r9,r8, lsl r12
01ffe844  adr r8,0x1ffe5e4
01ffe848  ldr r8,[r8,r12,lsl #0x2]
01ffe84c  cmp r9,r8
01ffe850  addgt r12,r12,#0x1
01ffe854  movs r3,r3, lsl #0xc
01ffe858  add r9,r9,#0x1
01ffe85c  rsbcs r9,r9,#0x0
01ffe860  str r9,[r7,#-0x4]!
01ffe864  subs r2,r2,#0xc
01ffe868  bllt 0x01ff943c
01ffe86c  b 0x01ffe7b4
01ffe870  cmp r6,#0x0
01ffe874  beq 0x01ffe888
01ffe878  mov r9,#0x0
01ffe87c  str r9,[r7,#-0x4]!
01ffe880  subs r6,r6,#0x1
01ffe884  bne 0x01ffe87c
01ffe888  ldr r5,[r0,#0x14]
01ffe88c  ldr r4,[r7,#0x0]
01ffe890  ldr r12,[r7,#0xc]
01ffe894  smulbb r9,r4,r5
01ffe898  smulbb r10,r12,r5
01ffe89c  add r6,r9,r10
01ffe8a0  sub r8,r9,r10
01ffe8a4  ldr r5,[r0,#0x24]
01ffe8a8  ldr r4,[r7,#0x8]
01ffe8ac  ldr r12,[r7,#0x24]
01ffe8b0  smulbb r9,r4,r5
01ffe8b4  smulbb r10,r12,r5
01ffe8b8  rsb r4,r10,r9, asr #0x1
01ffe8bc  add r12,r9,r10, asr #0x1
01ffe8c0  add r9,r6,r12
01ffe8c4  add r10,r8,r4
01ffe8c8  str r9,[r7,#0x40]
01ffe8cc  str r10,[r7,#0x50]
01ffe8d0  sub r9,r8,r4
01ffe8d4  sub r10,r6,r12
01ffe8d8  str r9,[r7,#0x60]
01ffe8dc  str r10,[r7,#0x70]
01ffe8e0  ldr r5,[r0,#0x18]
01ffe8e4  ldr r4,[r7,#0x4]
01ffe8e8  ldr r12,[r7,#0x20]
01ffe8ec  smulbb r9,r4,r5
01ffe8f0  smulbb r10,r12,r5
01ffe8f4  add r6,r9,r10
01ffe8f8  sub r8,r9,r10
01ffe8fc  ldr r5,[r0,#0x28]
01ffe900  ldr r4,[r7,#0x10]
01ffe904  ldr r12,[r7,#0x28]
01ffe908  smulbb r9,r4,r5
01ffe90c  smulbb r10,r12,r5
01ffe910  rsb r4,r10,r9, asr #0x1
01ffe914  add r12,r9,r10, asr #0x1
01ffe918  add r9,r6,r12
01ffe91c  add r10,r8,r4
01ffe920  str r9,[r7,#0x44]
01ffe924  str r10,[r7,#0x54]
01ffe928  sub r9,r8,r4
01ffe92c  sub r10,r6,r12
01ffe930  str r9,[r7,#0x64]
01ffe934  str r10,[r7,#0x74]
01ffe938  ldr r5,[r0,#0x1c]
01ffe93c  ldr r4,[r7,#0x14]
01ffe940  ldr r12,[r7,#0x2c]
01ffe944  smulbb r9,r4,r5
01ffe948  smulbb r10,r12,r5
01ffe94c  add r6,r9,r10
01ffe950  sub r8,r9,r10
01ffe954  ldr r5,[r0,#0x2c]
01ffe958  ldr r4,[r7,#0x1c]
01ffe95c  ldr r12,[r7,#0x38]
01ffe960  smulbb r9,r4,r5
01ffe964  smulbb r10,r12,r5
01ffe968  rsb r4,r10,r9, asr #0x1
01ffe96c  add r12,r9,r10, asr #0x1
01ffe970  add r9,r6,r12
01ffe974  add r10,r8,r4
01ffe978  str r9,[r7,#0x48]
01ffe97c  str r10,[r7,#0x58]
01ffe980  sub r9,r8,r4
01ffe984  sub r10,r6,r12
01ffe988  str r9,[r7,#0x68]
01ffe98c  str r10,[r7,#0x78]
01ffe990  ldr r5,[r0,#0x20]
01ffe994  ldr r4,[r7,#0x18]
01ffe998  ldr r12,[r7,#0x34]
01ffe99c  smulbb r9,r4,r5
01ffe9a0  smulbb r10,r12,r5
01ffe9a4  add r6,r9,r10
01ffe9a8  sub r8,r9,r10
01ffe9ac  ldr r5,[r0,#0x30]
01ffe9b0  ldr r4,[r7,#0x30]
01ffe9b4  ldr r12,[r7,#0x3c]
01ffe9b8  smulbb r9,r4,r5
01ffe9bc  smulbb r10,r12,r5
01ffe9c0  rsb r4,r10,r9, asr #0x1
01ffe9c4  add r12,r9,r10, asr #0x1
01ffe9c8  add r9,r6,r12
01ffe9cc  add r10,r8,r4
01ffe9d0  str r9,[r7,#0x4c]
01ffe9d4  str r10,[r7,#0x5c]
01ffe9d8  sub r9,r8,r4
01ffe9dc  sub r10,r6,r12
01ffe9e0  str r9,[r7,#0x6c]
01ffe9e4  str r10,[r7,#0x7c]
01ffe9e8  add r7,r7,#0x40
01ffe9ec  ldr r12,[sp,#0x0]
01ffe9f0  ldmia r7!,{r4,r5,r6,r8}
01ffe9f4  add r9,r4,r6
01ffe9f8  sub r10,r4,r6
01ffe9fc  rsb r4,r8,r5, asr #0x1
01ffea00  add r6,r5,r8, asr #0x1
01ffea04  ldrb r8,[r11,#0x0]
01ffea08  add r5,r9,r6
01ffea0c  add r5,r5,#0x20
01ffea10  adds r8,r8,r5, asr #0x6
01ffea14  movlt r8,#0x0
01ffea18  cmp r8,#0xff
01ffea1c  movgt r8,#0xff
01ffea20  strb r8,[r11],r12
01ffea24  ldrb r8,[r11,#0x0]
01ffea28  add r5,r10,r4
01ffea2c  add r5,r5,#0x20
01ffea30  adds r8,r8,r5, asr #0x6
01ffea34  movlt r8,#0x0
01ffea38  cmp r8,#0xff
01ffea3c  movgt r8,#0xff
01ffea40  strb r8,[r11],r12
01ffea44  ldrb r8,[r11,#0x0]
01ffea48  sub r5,r10,r4
01ffea4c  add r5,r5,#0x20
01ffea50  adds r8,r8,r5, asr #0x6
01ffea54  movlt r8,#0x0
01ffea58  cmp r8,#0xff
01ffea5c  movgt r8,#0xff
01ffea60  strb r8,[r11],r12
01ffea64  ldrb r8,[r11,#0x0]
01ffea68  sub r5,r9,r6
01ffea6c  add r5,r5,#0x20
01ffea70  adds r8,r8,r5, asr #0x6
01ffea74  movlt r8,#0x0
01ffea78  cmp r8,#0xff
01ffea7c  movgt r8,#0xff
01ffea80  strb r8,[r11],r12
01ffea84  add r11,r11,#0x100
01ffea88  sub r11,r11,r12, lsl #0x2
01ffea8c  ldmia r7!,{r4,r5,r6,r8}
01ffea90  add r9,r4,r6
01ffea94  sub r10,r4,r6
01ffea98  rsb r4,r8,r5, asr #0x1
01ffea9c  add r6,r5,r8, asr #0x1
01ffeaa0  ldrb r8,[r11,#0x0]
01ffeaa4  add r5,r9,r6
01ffeaa8  add r5,r5,#0x20
01ffeaac  adds r8,r8,r5, asr #0x6
01ffeab0  movlt r8,#0x0
01ffeab4  cmp r8,#0xff
01ffeab8  movgt r8,#0xff
01ffeabc  strb r8,[r11],r12
01ffeac0  ldrb r8,[r11,#0x0]
01ffeac4  add r5,r10,r4
01ffeac8  add r5,r5,#0x20
01ffeacc  adds r8,r8,r5, asr #0x6
01ffead0  movlt r8,#0x0
01ffead4  cmp r8,#0xff
01ffead8  movgt r8,#0xff
01ffeadc  strb r8,[r11],r12
01ffeae0  ldrb r8,[r11,#0x0]
01ffeae4  sub r5,r10,r4
01ffeae8  add r5,r5,#0x20
01ffeaec  adds r8,r8,r5, asr #0x6
01ffeaf0  movlt r8,#0x0
01ffeaf4  cmp r8,#0xff
01ffeaf8  movgt r8,#0xff
01ffeafc  strb r8,[r11],r12
01ffeb00  ldrb r8,[r11,#0x0]
01ffeb04  sub r5,r9,r6
01ffeb08  add r5,r5,#0x20
01ffeb0c  adds r8,r8,r5, asr #0x6
01ffeb10  movlt r8,#0x0
01ffeb14  cmp r8,#0xff
01ffeb18  movgt r8,#0xff
01ffeb1c  strb r8,[r11],r12
01ffeb20  add r11,r11,#0x100
01ffeb24  sub r11,r11,r12, lsl #0x2
01ffeb28  ldmia r7!,{r4,r5,r6,r8}
01ffeb2c  add r9,r4,r6
01ffeb30  sub r10,r4,r6
01ffeb34  rsb r4,r8,r5, asr #0x1
01ffeb38  add r6,r5,r8, asr #0x1
01ffeb3c  ldrb r8,[r11,#0x0]
01ffeb40  add r5,r9,r6
01ffeb44  add r5,r5,#0x20
01ffeb48  adds r8,r8,r5, asr #0x6
01ffeb4c  movlt r8,#0x0
01ffeb50  cmp r8,#0xff
01ffeb54  movgt r8,#0xff
01ffeb58  strb r8,[r11],r12
01ffeb5c  ldrb r8,[r11,#0x0]
01ffeb60  add r5,r10,r4
01ffeb64  add r5,r5,#0x20
01ffeb68  adds r8,r8,r5, asr #0x6
01ffeb6c  movlt r8,#0x0
01ffeb70  cmp r8,#0xff
01ffeb74  movgt r8,#0xff
01ffeb78  strb r8,[r11],r12
01ffeb7c  ldrb r8,[r11,#0x0]
01ffeb80  sub r5,r10,r4
01ffeb84  add r5,r5,#0x20
01ffeb88  adds r8,r8,r5, asr #0x6
01ffeb8c  movlt r8,#0x0
01ffeb90  cmp r8,#0xff
01ffeb94  movgt r8,#0xff
01ffeb98  strb r8,[r11],r12
01ffeb9c  ldrb r8,[r11,#0x0]
01ffeba0  sub r5,r9,r6
01ffeba4  add r5,r5,#0x20
01ffeba8  adds r8,r8,r5, asr #0x6
01ffebac  movlt r8,#0x0
01ffebb0  cmp r8,#0xff
01ffebb4  movgt r8,#0xff
01ffebb8  strb r8,[r11],r12
01ffebbc  add r11,r11,#0x100
01ffebc0  sub r11,r11,r12, lsl #0x2
01ffebc4  ldmia r7!,{r4,r5,r6,r8}
01ffebc8  add r9,r4,r6
01ffebcc  sub r10,r4,r6
01ffebd0  rsb r4,r8,r5, asr #0x1
01ffebd4  add r6,r5,r8, asr #0x1
01ffebd8  ldrb r8,[r11,#0x0]
01ffebdc  add r5,r9,r6
01ffebe0  add r5,r5,#0x20
01ffebe4  adds r8,r8,r5, asr #0x6
01ffebe8  movlt r8,#0x0
01ffebec  cmp r8,#0xff
01ffebf0  movgt r8,#0xff
01ffebf4  strb r8,[r11],r12
01ffebf8  ldrb r8,[r11,#0x0]
01ffebfc  add r5,r10,r4
01ffec00  add r5,r5,#0x20
01ffec04  adds r8,r8,r5, asr #0x6
01ffec08  movlt r8,#0x0
01ffec0c  cmp r8,#0xff
01ffec10  movgt r8,#0xff
01ffec14  strb r8,[r11],r12
01ffec18  ldrb r8,[r11,#0x0]
01ffec1c  sub r5,r10,r4
01ffec20  add r5,r5,#0x20
01ffec24  adds r8,r8,r5, asr #0x6
01ffec28  movlt r8,#0x0
01ffec2c  cmp r8,#0xff
01ffec30  movgt r8,#0xff
01ffec34  strb r8,[r11],r12
01ffec38  ldrb r8,[r11,#0x0]
01ffec3c  sub r5,r9,r6
01ffec40  add r5,r5,#0x20
01ffec44  adds r8,r8,r5, asr #0x6
01ffec48  movlt r8,#0x0
01ffec4c  cmp r8,#0xff
01ffec50  movgt r8,#0xff
01ffec54  strb r8,[r11],r12
01ffec58  add r11,r11,#0x100
01ffec5c  sub r11,r11,r12, lsl #0x2
01ffec60  sub r11,r11,#0x400
01ffec64  ldmia sp!,{r4,r12,pc}
