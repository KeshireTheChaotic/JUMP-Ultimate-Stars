03802c18  stmdb sp!,{r4,r5,r6,lr}
03802c1c  mov r6,r0
03802c20  mov r5,r1
03802c24  mov r4,#0x0
03802c28  b 0x03802c48
03802c2c  ands r0,r6,#0x1
03802c30  beq 0x03802c40
03802c34  mov r0,r4
03802c38  mov r1,r5
03802c3c  bl 0x037fefec
03802c40  add r4,r4,#0x1
03802c44  mov r6,r6, lsr #0x1
03802c48  cmp r4,#0x10
03802c4c  bge 0x03802c58
03802c50  cmp r6,#0x0
03802c54  bne 0x03802c2c
03802c58  ldmia sp!,{r4,r5,r6,lr}
03802c5c  bx lr
