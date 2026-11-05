0207aa20  stmdb sp!,{r4,r5,r6,r7,r8,lr}
0207aa24  mov r7,r0
0207aa28  mov r6,r1
0207aa2c  mov r4,r7
0207aa30  mov r5,#0x7
0207aa34  mvn r8,#0x0
0207aa38  ldrb r0,[r4,#0xf]
0207aa3c  mov r0,r0, lsl #0x18
0207aa40  movs r0,r0, lsr #0x1f
0207aa44  ldrsbne r0,[r4,#0xf]
0207aa48  movne r0,r0, lsl #0x1a
0207aa4c  movne r0,r0, asr #0x1a
0207aa50  cmpne r0,r8
0207aa54  beq 0x0207aa68
0207aa58  mov r0,r7
0207aa5c  mov r1,r4
0207aa60  mov r2,r6
0207aa64  bl 0x02079e40
0207aa68  sub r5,r5,#0x1
0207aa6c  cmp r5,#0x0
0207aa70  add r4,r4,#0x10
0207aa74  bgt 0x0207aa38
0207aa78  ldmia sp!,{r4,r5,r6,r7,r8,pc}
