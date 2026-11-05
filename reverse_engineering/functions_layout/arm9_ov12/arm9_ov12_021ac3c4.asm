021ac3c4  stmdb sp!,{r4,lr}
021ac3c8  mov r4,r0
021ac3cc  ldr r0,[r4,#0x0]
021ac3d0  mov r0,r0, lsl #0x1f
021ac3d4  movs r0,r0, lsr #0x1f
021ac3d8  beq 0x021ac3e4
021ac3dc  ldr r0,[r4,#0x8]
021ac3e0  bl 0x0201b244
021ac3e4  mov r0,r4
021ac3e8  ldmia sp!,{r4,pc}
