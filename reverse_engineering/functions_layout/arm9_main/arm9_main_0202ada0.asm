0202ada0  stmdb sp!,{r3,r4,r5,lr}
0202ada4  mov r5,r0
0202ada8  mov r4,r1
0202adac  ldrb r1,[r5,#0x24]
0202adb0  ldrb r0,[r4,#0x25]
0202adb4  orr r0,r1,r0
0202adb8  strb r0,[r5,#0x25]
0202adbc  ldrb r0,[r5,#0x24]
0202adc0  bic r1,r0,#0x8
0202adc4  and r0,r1,#0xff
0202adc8  mov r0,r0, lsl #0x1a
0202adcc  strb r1,[r5,#0x24]
0202add0  movs r0,r0, lsr #0x1f
0202add4  beq 0x0202ae74
0202add8  ldrb r0,[r5,#0x24]
0202addc  bic r2,r0,#0x20
0202ade0  and r0,r2,#0xff
0202ade4  mov r1,r0, lsl #0x1e
0202ade8  strb r2,[r5,#0x24]
0202adec  movs r1,r1, lsr #0x1f
0202adf0  beq 0x0202ae48
0202adf4  mov r0,r0, lsl #0x1d
0202adf8  movs r0,r0, lsr #0x1f
0202adfc  ldr r1,[r5,#0x30]
0202ae00  add r0,r5,#0x3c
0202ae04  beq 0x0202ae40
0202ae08  bl 0x02019f00
0202ae0c  add r0,r5,#0x3c
0202ae10  add r1,r5,#0x34
0202ae14  bl 0x02018ac8
0202ae18  add r0,r5,#0x44
0202ae1c  add r1,r5,#0x38
0202ae20  bl 0x02018ac8
0202ae24  add r0,r5,#0x40
0202ae28  add r1,r5,#0x34
0202ae2c  bl 0x02018ac8
0202ae30  add r0,r5,#0x48
0202ae34  add r1,r5,#0x38
0202ae38  bl 0x02018ac8
0202ae3c  b 0x0202ae64
0202ae40  bl 0x02019f00
0202ae44  b 0x0202ae64
0202ae48  ldr r1,[r5,#0x34]
0202ae4c  mov r0,#0x0
0202ae50  str r1,[r5,#0x3c]
0202ae54  ldr r1,[r5,#0x38]
0202ae58  str r1,[r5,#0x48]
0202ae5c  str r0,[r5,#0x44]
0202ae60  str r0,[r5,#0x40]
0202ae64  ldr r0,[r5,#0xc]
0202ae68  str r0,[r5,#0x4c]
0202ae6c  ldr r0,[r5,#0x10]
0202ae70  str r0,[r5,#0x50]
0202ae74  ldr r2,[r5,#0x28]
0202ae78  mov r0,r5
0202ae7c  mov r1,r4
0202ae80  blx r2
0202ae84  ldmia sp!,{r3,r4,r5,pc}
