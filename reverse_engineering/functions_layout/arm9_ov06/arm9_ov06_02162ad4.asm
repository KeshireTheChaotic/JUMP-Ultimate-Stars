02162ad4  stmdb sp!,{r3,r4,r5,lr}
02162ad8  mov r2,r2, asr #0xc
02162adc  mov r2,r2, lsl #0x6
02162ae0  mov r5,r0
02162ae4  add r4,r2,r1, asr #0xc
02162ae8  mvn r0,#0x0
02162aec  b 0x02162b50
02162af0  ldr r2,[r5,#0x14]
02162af4  mov r1,r4, lsl #0x3
02162af8  ldrsh r12,[r2,r1]
02162afc  cmp r12,r0
02162b00  beq 0x02162b4c
02162b04  add r2,r2,r1
02162b08  ldrb r1,[r2,#0x3]
02162b0c  cmp r1,#0x0
02162b10  ldrbne r1,[r2,#0x2]
02162b14  cmpne r1,#0x7
02162b18  bne 0x02162b4c
02162b1c  ldr r1,[r5,#0x18]
02162b20  mov r0,#0x18
02162b24  smlabb r1,r12,r0,r1
02162b28  mov r0,r3
02162b2c  bl 0x02162980
02162b30  ldr r3,[r5,#0x14]
02162b34  mov r2,r4, lsl #0x3
02162b38  add r0,r3,r4, lsl #0x3
02162b3c  ldrb r1,[r0,#0x2]
02162b40  ldrsh r0,[r3,r2]
02162b44  orr r0,r0,r1, lsl #0x10
02162b48  ldmia sp!,{r3,r4,r5,pc}
02162b4c  add r4,r4,#0x40
02162b50  cmp r4,#0x1000
02162b54  blt 0x02162af0
02162b58  mvn r0,#0x0
02162b5c  ldmia sp!,{r3,r4,r5,pc}
