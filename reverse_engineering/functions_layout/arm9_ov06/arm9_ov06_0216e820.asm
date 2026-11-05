0216e820  stmdb sp!,{r3,lr}
0216e824  ldr r3,[r0,#0x10]
0216e828  str r2,[r3,#0x68]
0216e82c  ldr r3,[r1,#0x10]
0216e830  ldr r2,[r0,#0x10]
0216e834  ldr r3,[r3,#0x6c]
0216e838  str r3,[r2,#0x6c]
0216e83c  ldr r1,[r1,#0x10]
0216e840  ldr r0,[r0,#0x10]
0216e844  ldrb lr,[r1,#0x175]
0216e848  ldrb r2,[r0,#0x175]
0216e84c  mov r1,lr, lsl #0x1e
0216e850  mov r1,r1, lsr #0x1e
0216e854  bic r2,r2,#0x3
0216e858  and r1,r1,#0x3
0216e85c  orr r12,r2,r1
0216e860  mov r1,lr, lsl #0x1c
0216e864  mov r3,r1, lsr #0x1e
0216e868  mov r2,lr, lsl #0x1a
0216e86c  and r1,r12,#0xff
0216e870  mov lr,r2, lsr #0x1e
0216e874  bic r2,r1,#0xc
0216e878  mov r1,r3, lsl #0x1e
0216e87c  orr r3,r2,r1, lsr #0x1c
0216e880  and r1,r3,#0xff
0216e884  bic r2,r1,#0x30
0216e888  mov r1,lr, lsl #0x1e
0216e88c  orr r1,r2,r1, lsr #0x1a
0216e890  strb r1,[r0,#0x175]
0216e894  ldmia sp!,{r3,pc}
