0217eb88  stmdb sp!,{r4,r5,r6,lr}
0217eb8c  mov r5,r0
0217eb90  ldr r0,[r5,#0x1c]
0217eb94  bl 0x02175628
0217eb98  ldrsb r1,[r5,#0x7a]
0217eb9c  ldr r0,[r0,#0x4]
0217eba0  ldr r4,[r0,#0x10]
0217eba4  cmp r1,#0x0
0217eba8  movlt r0,#0x1
0217ebac  strblt r0,[r5,#0x7c]
0217ebb0  ldmialt sp!,{r4,r5,r6,pc}
0217ebb4  ldr r0,[r5,#0xd4]
0217ebb8  add r1,r4,r1, lsl #0x2
0217ebbc  mov r0,r0, lsr #0x1c
0217ebc0  add r0,r4,r0, lsl #0x2
0217ebc4  ldr r1,[r1,#0x98]
0217ebc8  ldr r0,[r0,#0x98]
0217ebcc  ldr r1,[r1,#0x0]
0217ebd0  ldr r0,[r0,#0x0]
0217ebd4  mov r6,#0x1
0217ebd8  sub r0,r1,r0
0217ebdc  movs r0,r0, asr #0x8
0217ebe0  rsbmi r0,r0,#0x0
0217ebe4  cmp r0,#0x50
0217ebe8  blt 0x0217ec08
0217ebec  ldr r0,[r5,#0x24]
0217ebf0  bl 0x0217ec64
0217ebf4  cmp r0,#0x0
0217ebf8  blt 0x0217ec08
0217ebfc  ldr r0,[r5,#0x24]
0217ec00  bl 0x0217ec64
0217ec04  and r6,r0,#0xff
0217ec08  ldrb r1,[r5,#0x7a]
0217ec0c  mov r0,r5
0217ec10  mov r2,r6
0217ec14  bl 0x0217aa8c
0217ec18  cmp r0,#0x0
0217ec1c  moveq r0,#0x1
0217ec20  strbeq r0,[r5,#0x7c]
0217ec24  ldmiaeq sp!,{r4,r5,r6,pc}
0217ec28  ldr r0,[r5,#0x24]
0217ec2c  bl 0x0217ec78
0217ec30  ldrsb r1,[r5,#0x7a]
0217ec34  add r1,r4,r1, lsl #0x2
0217ec38  ldr r1,[r1,#0x98]
0217ec3c  bl 0x02177010
0217ec40  ldr r1,[r5,#0xd4]
0217ec44  mov r0,#0x0
0217ec48  orr r1,r1,#0x100
0217ec4c  str r1,[r5,#0xd4]
0217ec50  strb r0,[r5,#0x7c]
0217ec54  strb r0,[r5,#0x7d]
0217ec58  mov r0,#0x2
0217ec5c  strb r0,[r5,#0x105]
0217ec60  ldmia sp!,{r4,r5,r6,pc}
