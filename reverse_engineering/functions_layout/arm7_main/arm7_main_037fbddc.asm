037fbddc  ldr r3,[0x37fbe6c]
037fbde0  ldr r1,[r3,#0x0]
037fbde4  mov r2,#0x0
037fbde8  mov r0,#0x80000000
037fbdec  tst r1,r0
037fbdf0  bne 0x037fbe08
037fbdf4  add r2,r2,#0x1
037fbdf8  cmp r2,#0x20
037fbdfc  beq 0x037fbe08
037fbe00  mov r0,r0, lsr #0x1
037fbe04  b 0x037fbdec
037fbe08  cmp r2,#0x20
037fbe0c  movne r0,#0x80
037fbe10  bne 0x037fbe50
037fbe14  add r3,r3,#0x4
037fbe18  ldr r1,[r3,#0x0]
037fbe1c  mov r2,#0x0
037fbe20  mov r0,#0x80000000
037fbe24  tst r1,r0
037fbe28  bne 0x037fbe40
037fbe2c  add r2,r2,#0x1
037fbe30  cmp r2,#0x20
037fbe34  beq 0x037fbe40
037fbe38  mov r0,r0, lsr #0x1
037fbe3c  b 0x037fbe24
037fbe40  cmp r2,#0x20
037fbe44  ldr r0,[0x37fbe70]
037fbe48  bxeq lr
037fbe4c  mov r0,#0xa0
037fbe50  add r0,r0,r2
037fbe54  mov r1,#0x80000000
037fbe58  mov r1,r1, lsr r2
037fbe5c  ldr r2,[r3,#0x0]
037fbe60  bic r2,r2,r1
037fbe64  str r2,[r3,#0x0]
037fbe68  bx lr
