0206af1c  stmdb sp!,{r4,lr}
0206af20  mov r4,r0
0206af24  ldr r1,[r4,#0x8]
0206af28  cmp r1,#0x0
0206af2c  beq 0x0206af44
0206af30  ldr r0,[r4,#0x4]
0206af34  ldrh r2,[r4,#0xe]
0206af38  ldrb r3,[r4,#0x10]
0206af3c  ldr r0,[r0,#0x4]
0206af40  bl 0x02029c68
0206af44  mov r0,#0x0
0206af48  strb r0,[r4,#0x11]
0206af4c  ldrb r2,[r4,#0xc]
0206af50  ldr r1,[0x206af64]
0206af54  mov r0,r4
0206af58  ldr r1,[r1,r2,lsl #0x2]
0206af5c  blx r1
0206af60  ldmia sp!,{r4,pc}
