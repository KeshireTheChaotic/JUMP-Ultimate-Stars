037ff408  stmdb sp!,{r4,lr}
037ff40c  mov r4,r0
037ff410  ldr r0,[0x37ff478]
037ff414  cmp r4,r0
037ff418  movlt r4,r0
037ff41c  blt 0x037ff428
037ff420  cmp r4,#0x0
037ff424  movgt r4,#0x0
037ff428  ldr r0,[0x37ff47c]
037ff42c  add r0,r4,r0
037ff430  bl 0x037ff480
037ff434  mvn r1,#0xef
037ff438  cmp r4,r1
037ff43c  movlt r1,#0x3
037ff440  blt 0x037ff464
037ff444  mvn r1,#0x77
037ff448  cmp r4,r1
037ff44c  movlt r1,#0x2
037ff450  blt 0x037ff464
037ff454  mvn r1,#0x3b
037ff458  cmp r4,r1
037ff45c  movlt r1,#0x1
037ff460  movge r1,#0x0
037ff464  orr r0,r0,r1, lsl #0x8
037ff468  mov r0,r0, lsl #0x10
037ff46c  mov r0,r0, lsr #0x10
037ff470  ldmia sp!,{r4,lr}
037ff474  bx lr
