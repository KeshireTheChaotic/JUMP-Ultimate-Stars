0214cf50  stmdb sp!,{r3,r4,r5,r6,r7,lr}
0214cf54  mov r4,r0
0214cf58  ldrsh r12,[r4,#0x50]
0214cf5c  mov r6,r2
0214cf60  mov r2,r6, lsl #0x10
0214cf64  mov r7,r1
0214cf68  mov r5,r3
0214cf6c  cmp r12,r2, asr #0x10
0214cf70  ldmiaeq sp!,{r3,r4,r5,r6,r7,pc}
0214cf74  bl 0x0214cfbc
0214cf78  strh r6,[r4,#0x50]
0214cf7c  str r7,[r4,#0x0]
0214cf80  mov r0,#0x0
0214cf84  cmp r5,#0x0
0214cf88  strb r0,[r4,#0x5c]
0214cf8c  beq 0x0214cf9c
0214cf90  ldr r0,[r4,#0xc]
0214cf94  bl 0x0214d064
0214cf98  b 0x0214cfac
0214cf9c  ldr r0,[r4,#0xc]
0214cfa0  ldr r1,[0x214cfb8]
0214cfa4  ldr r0,[r0,#0x4]
0214cfa8  bl 0x02028384
0214cfac  ldrsh r0,[sp,#0x18]
0214cfb0  strh r0,[r4,#0x52]
0214cfb4  ldmia sp!,{r3,r4,r5,r6,r7,pc}
