0202abf4  stmdb sp!,{r4,lr}
0202abf8  mov r4,r0
0202abfc  ldrb r0,[r4,#0x24]
0202ac00  mov r1,r0, lsl #0x1e
0202ac04  movs r1,r1, lsr #0x1f
0202ac08  beq 0x0202ac60
0202ac0c  mov r0,r0, lsl #0x1d
0202ac10  movs r0,r0, lsr #0x1f
0202ac14  ldr r1,[r4,#0x30]
0202ac18  add r0,r4,#0x3c
0202ac1c  beq 0x0202ac58
0202ac20  bl 0x02019f00
0202ac24  add r0,r4,#0x3c
0202ac28  add r1,r4,#0x34
0202ac2c  bl 0x02018ac8
0202ac30  add r0,r4,#0x44
0202ac34  add r1,r4,#0x38
0202ac38  bl 0x02018ac8
0202ac3c  add r0,r4,#0x40
0202ac40  add r1,r4,#0x34
0202ac44  bl 0x02018ac8
0202ac48  add r0,r4,#0x48
0202ac4c  add r1,r4,#0x38
0202ac50  bl 0x02018ac8
0202ac54  b 0x0202ac7c
0202ac58  bl 0x02019f00
0202ac5c  b 0x0202ac7c
0202ac60  ldr r1,[r4,#0x34]
0202ac64  mov r0,#0x0
0202ac68  str r1,[r4,#0x3c]
0202ac6c  ldr r1,[r4,#0x38]
0202ac70  str r1,[r4,#0x48]
0202ac74  str r0,[r4,#0x44]
0202ac78  str r0,[r4,#0x40]
0202ac7c  ldr r0,[r4,#0xc]
0202ac80  str r0,[r4,#0x4c]
0202ac84  ldr r0,[r4,#0x10]
0202ac88  str r0,[r4,#0x50]
0202ac8c  ldmia sp!,{r4,pc}
