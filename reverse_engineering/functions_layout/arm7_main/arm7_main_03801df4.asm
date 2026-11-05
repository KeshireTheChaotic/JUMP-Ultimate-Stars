03801df4  stmdb sp!,{r4,r5,r6,r7,r8,lr}
03801df8  mov r7,r0
03801dfc  mov r6,r1
03801e00  mov r5,#0x0
03801e04  ldr r4,[0x3801e50]
03801e08  mov r8,#0x24
03801e0c  mul r1,r5,r8
03801e10  add r0,r4,r1
03801e14  ldrb r1,[r4,r1]
03801e18  mov r1,r1, lsl #0x1f
03801e1c  movs r1,r1, lsr #0x1f
03801e20  beq 0x03801e3c
03801e24  ldr r1,[r0,#0x20]
03801e28  cmp r7,r1
03801e2c  bhi 0x03801e3c
03801e30  cmp r1,r6
03801e34  bhi 0x03801e3c
03801e38  bl 0x038016bc
03801e3c  add r5,r5,#0x1
03801e40  cmp r5,#0x10
03801e44  blt 0x03801e0c
03801e48  ldmia sp!,{r4,r5,r6,r7,r8,lr}
03801e4c  bx lr
