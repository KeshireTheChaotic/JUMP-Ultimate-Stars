0214d7d4  stmdb sp!,{r3,r4,r5,lr}
0214d7d8  sub sp,sp,#0x50
0214d7dc  movs r5,r0
0214d7e0  bne 0x0214d810
0214d7e4  add r0,sp,#0x0
0214d7e8  bl 0x0205542c
0214d7ec  ldr r1,[0x214d880]
0214d7f0  add r0,sp,#0x4
0214d7f4  mov r2,#0x14
0214d7f8  bl 0x02051890
0214d7fc  ldr r0,[0x214d884]
0214d800  mov r1,#0x0
0214d804  strh r1,[r0,#0x16]
0214d808  ldr r0,[0x214d880]
0214d80c  b 0x0214d878
0214d810  mov r0,r5, lsl #0x10
0214d814  mov r0,r0, lsr #0x10
0214d818  bl 0x0214d51c
0214d81c  cmp r0,#0x3
0214d820  movlt r0,#0x0
0214d824  blt 0x0214d878
0214d828  mov r0,r5, lsl #0x10
0214d82c  mov r0,r0, lsr #0x10
0214d830  bl 0x0214d63c
0214d834  mov r4,r0
0214d838  mov r0,r5
0214d83c  blx 0x0208a4dc
0214d840  mov r1,r0
0214d844  add r0,r4,#0x16
0214d848  mov r2,#0x6
0214d84c  bl 0x02051890
0214d850  ldrb r2,[r4,#0x1]
0214d854  ldr r1,[0x214d880]
0214d858  add r0,r4,#0x2
0214d85c  mov r2,r2, lsl #0x1
0214d860  bl 0x02051890
0214d864  ldrb r1,[r4,#0x1]
0214d868  ldr r0,[0x214d880]
0214d86c  mov r2,#0x0
0214d870  mov r1,r1, lsl #0x1
0214d874  strh r2,[r0,r1]
0214d878  add sp,sp,#0x50
0214d87c  ldmia sp!,{r3,r4,r5,pc}
