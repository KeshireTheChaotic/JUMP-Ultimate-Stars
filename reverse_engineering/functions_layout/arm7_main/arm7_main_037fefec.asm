037fefec  stmdb sp!,{r4,lr}
037feff0  ldr r2,[0x37ff054]
037feff4  strb r1,[r2,r0]
037feff8  ldr r2,[0x37ff058]
037feffc  ldr r2,[r2,#0x0]
037ff000  cmp r2,#0x0
037ff004  movge r1,r2
037ff008  mov r4,r0, lsl #0x4
037ff00c  add r2,r4,#0x4000000
037ff010  strb r1,[r2,#0x402]
037ff014  ldr r2,[0x37ff05c]
037ff018  ldr r2,[r2,#0x0]
037ff01c  cmp r2,#0x0
037ff020  ble 0x037ff04c
037ff024  mov r2,#0x1
037ff028  mov r3,r2, lsl r0
037ff02c  ldr r2,[0x37ff060]
037ff030  ands r2,r3,r2
037ff034  beq 0x037ff04c
037ff038  ldr r2,[0x37ff064]
037ff03c  ldrb r0,[r2,r0]
037ff040  bl 0x037fee8c
037ff044  add r1,r4,#0x4000000
037ff048  strb r0,[r1,#0x400]
037ff04c  ldmia sp!,{r4,lr}
037ff050  bx lr
