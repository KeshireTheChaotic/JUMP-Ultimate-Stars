037feab8  stmdb sp!,{r4,r5,lr}
037feabc  sub sp,sp,#0x4
037feac0  mov r4,r0
037feac4  mov r5,r1
037feac8  bl 0x037fe3a4
037feacc  ldr r1,[0x37feb1c]
037fead0  str r5,[r1,r4,lsl #0x2]
037fead4  cmp r5,#0x0
037fead8  beq 0x037feaf4
037feadc  ldr r3,[0x37feb20]
037feae0  ldr r2,[r3,#0x38c]
037feae4  mov r1,#0x1
037feae8  orr r1,r2,r1, lsl r4
037feaec  str r1,[r3,#0x38c]
037feaf0  b 0x037feb0c
037feaf4  ldr r3,[0x37feb20]
037feaf8  ldr r2,[r3,#0x38c]
037feafc  mov r1,#0x1
037feb00  mvn r1,r1, lsl r4
037feb04  and r1,r2,r1
037feb08  str r1,[r3,#0x38c]
037feb0c  bl 0x037fe3b8
037feb10  add sp,sp,#0x4
037feb14  ldmia sp!,{r4,r5,lr}
037feb18  bx lr
