020196c4  stmdb sp!,{r4,r5,r6,lr}
020196c8  mov r6,r0
020196cc  mov r4,r2
020196d0  add r0,r6,r4, lsl #0x2
020196d4  ldr r2,[r0,#0xc]
020196d8  mov r5,r1
020196dc  cmp r5,r2
020196e0  ldmiaeq sp!,{r4,r5,r6,pc}
020196e4  ldr r0,[0x2019824]
020196e8  ldr r3,[r0,#0x420]
020196ec  cmp r2,r3
020196f0  bne 0x0201972c
020196f4  cmp r5,#0x0
020196f8  beq 0x0201972c
020196fc  ldr r1,[r6,#0x8]
02019700  add r0,r4,#0x1
02019704  mov r1,r1, lsl #0x4
02019708  cmp r0,r1, lsr #0x1d
0201970c  mov r2,r1, lsr #0x1d
02019710  ldr r1,[r6,#0x8]
02019714  movcs r2,r0
02019718  mov r0,r2, lsl #0x1d
0201971c  bic r1,r1,#0xe000000
02019720  orr r0,r1,r0, lsr #0x4
02019724  str r0,[r6,#0x8]
02019728  b 0x0201978c
0201972c  cmp r2,r3
02019730  beq 0x0201978c
02019734  cmp r5,#0x0
02019738  ldreq r0,[r6,#0x8]
0201973c  addeq r1,r4,#0x1
02019740  moveq r0,r0, lsl #0x4
02019744  cmpeq r1,r0, lsr #0x1d
02019748  bne 0x0201978c
0201974c  sub r1,r4,#0x1
02019750  mov r2,#0x0
02019754  b 0x02019770
02019758  add r0,r6,r1, lsl #0x2
0201975c  ldr r0,[r0,#0xc]
02019760  cmp r0,r3
02019764  addne r2,r1,#0x1
02019768  bne 0x02019778
0201976c  sub r1,r1,#0x1
02019770  cmp r1,#0x0
02019774  bge 0x02019758
02019778  ldr r1,[r6,#0x8]
0201977c  mov r0,r2, lsl #0x1d
02019780  bic r1,r1,#0xe000000
02019784  orr r0,r1,r0, lsr #0x4
02019788  str r0,[r6,#0x8]
0201978c  cmp r5,#0x0
02019790  beq 0x020197fc
02019794  mov r0,r5
02019798  ldr r1,[r0,#0x0]
0201979c  ldr r1,[r1,#0x8]
020197a0  blx r1
020197a4  add r0,r6,r4, lsl #0x2
020197a8  ldr r0,[r0,#0xc]
020197ac  ldr r1,[r0,#0x0]
020197b0  ldr r1,[r1,#0xc]
020197b4  blx r1
020197b8  add r0,r6,r4, lsl #0x2
020197bc  str r5,[r0,#0xc]
020197c0  ldrb r0,[r5,#0x29]
020197c4  add r3,r6,#0x1c
020197c8  mov r2,r4, lsl #0x1
020197cc  ldrh r1,[r3,r2]
020197d0  mov r0,r0, lsl #0x1e
020197d4  bic r1,r1,#0xc0
020197d8  orr r0,r1,r0, lsr #0x18
020197dc  strh r0,[r3,r2]
020197e0  ldrb r0,[r5,#0x2a]
020197e4  ldrh r1,[r3,r2]
020197e8  mov r0,r0, lsl #0x1e
020197ec  bic r1,r1,#0x300
020197f0  orr r0,r1,r0, lsr #0x16
020197f4  strh r0,[r3,r2]
020197f8  ldmia sp!,{r4,r5,r6,pc}
020197fc  add r0,r6,r4, lsl #0x2
02019800  ldr r0,[r0,#0xc]
02019804  ldr r1,[r0,#0x0]
02019808  ldr r1,[r1,#0xc]
0201980c  blx r1
02019810  ldr r0,[0x2019824]
02019814  add r1,r6,r4, lsl #0x2
02019818  ldr r0,[r0,#0x420]
0201981c  str r0,[r1,#0xc]
02019820  ldmia sp!,{r4,r5,r6,pc}
