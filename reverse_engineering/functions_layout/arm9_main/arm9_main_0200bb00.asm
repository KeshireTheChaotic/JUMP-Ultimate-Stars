0200bb00  stmdb sp!,{r4,r5,r6,lr}
0200bb04  ldr r2,[0x200bc48]
0200bb08  cmp r1,r2
0200bb0c  bcs 0x0200bc08
0200bb10  movs r12,r1, lsr #0x14
0200bb14  beq 0x0200bbf8
0200bb18  bic r1,r1,r2
0200bb1c  orr r1,r1,#0x100000
0200bb20  movs r12,r12, asr #0x1
0200bb24  bcs 0x0200bb34
0200bb28  sub r12,r12,#0x1
0200bb2c  movs r0,r0, lsl #0x1
0200bb30  adc r1,r1,r1
0200bb34  movs r3,r0, lsl #0x1
0200bb38  adc r1,r1,r1
0200bb3c  mov r2,#0x0
0200bb40  mov r4,#0x0
0200bb44  mov lr,#0x200000
0200bb48  add r6,r4,lr
0200bb4c  cmp r6,r1
0200bb50  addle r4,r6,lr
0200bb54  suble r1,r1,r6
0200bb58  addle r2,r2,lr
0200bb5c  movs r3,r3, lsl #0x1
0200bb60  adc r1,r1,r1
0200bb64  movs lr,lr, lsr #0x1
0200bb68  bne 0x0200bb48
0200bb6c  mov r0,#0x0
0200bb70  mov r5,#0x0
0200bb74  cmp r1,r4
0200bb78  cmpeq r3,#0x80000000
0200bb7c  bcc 0x0200bb90
0200bb80  subs r3,r3,#0x80000000
0200bb84  sbc r1,r1,r4
0200bb88  add r4,r4,#0x1
0200bb8c  mov r0,#0x80000000
0200bb90  movs r3,r3, lsl #0x1
0200bb94  adc r1,r1,r1
0200bb98  mov lr,#0x40000000
0200bb9c  add r6,r5,lr
0200bba0  cmp r4,r1
0200bba4  cmpeq r6,r3
0200bba8  bhi 0x0200bbbc
0200bbac  add r5,r6,lr
0200bbb0  subs r3,r3,r6
0200bbb4  sbc r1,r1,r4
0200bbb8  add r0,r0,lr
0200bbbc  movs r3,r3, lsl #0x1
0200bbc0  adc r1,r1,r1
0200bbc4  movs lr,lr, lsr #0x1
0200bbc8  bne 0x0200bb9c
0200bbcc  orrs r1,r1,r3
0200bbd0  biceq r0,r0,#0x1
0200bbd4  movs r1,r2, lsr #0x1
0200bbd8  movs r0,r0, rrx
0200bbdc  adcs r0,r0,#0x0
0200bbe0  adc r1,r1,#0x0
0200bbe4  add r1,r1,#0x20000000
0200bbe8  sub r1,r1,#0x100000
0200bbec  add r1,r1,r12, lsl #0x14
0200bbf0  ldmia sp!,{r4,r5,r6,lr}
0200bbf4  bx lr
0200bbf8  mov r1,#0x0
0200bbfc  mov r0,#0x0
0200bc00  ldmia sp!,{r4,r5,r6,lr}
0200bc04  bx lr
0200bc08  tst r1,#0x80000000
0200bc0c  beq 0x0200bc20
0200bc10  bics r3,r1,#0x80000000
0200bc14  movs r12,r3, lsr #0x14
0200bc18  beq 0x0200bbf8
0200bc1c  b 0x0200bc2c
0200bc20  orrs r2,r0,r1, lsl #0xc
0200bc24  ldmiaeq sp!,{r4,r5,r6,lr}
0200bc28  bxeq lr
0200bc2c  ldr r2,[0x200bc4c]
0200bc30  orr r1,r1,r2
0200bc34  ldr r3,[0x200bc50]
0200bc38  mov r4,#0x21
0200bc3c  str r4,[r3,#0x0]
0200bc40  ldmia sp!,{r4,r5,r6,lr}
0200bc44  bx lr
