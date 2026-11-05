0201ba68  stmdb sp!,{r4,r5,r6,lr}
0201ba6c  mov r6,r0
0201ba70  mov r5,r1
0201ba74  mov r4,r2
0201ba78  bl 0x020134b0
0201ba7c  ldr r0,[0x201bbac]
0201ba80  cmp r4,#0x0
0201ba84  str r0,[r6,#0x0]
0201ba88  ldrh r0,[r5,#0x2a]
0201ba8c  strh r0,[r6,#0x2a]
0201ba90  ldrh r0,[r5,#0x2c]
0201ba94  strh r0,[r6,#0x2c]
0201ba98  ldrh r0,[r5,#0x2e]
0201ba9c  strh r0,[r6,#0x2e]
0201baa0  ldrh r0,[r5,#0x30]
0201baa4  strh r0,[r6,#0x30]
0201baa8  ldrb r0,[r6,#0x32]
0201baac  bic r1,r0,#0x1
0201bab0  strb r1,[r6,#0x32]
0201bab4  ldrb r0,[r5,#0x32]
0201bab8  and r1,r1,#0xff
0201babc  bic r1,r1,#0x2
0201bac0  mov r0,r0, lsl #0x1e
0201bac4  mov r0,r0, lsr #0x1f
0201bac8  mov r0,r0, lsl #0x1f
0201bacc  orr r1,r1,r0, lsr #0x1e
0201bad0  strb r1,[r6,#0x32]
0201bad4  ldrb r0,[r5,#0x32]
0201bad8  and r1,r1,#0xff
0201badc  bic r1,r1,#0x4
0201bae0  mov r0,r0, lsl #0x1d
0201bae4  mov r0,r0, lsr #0x1f
0201bae8  mov r0,r0, lsl #0x1f
0201baec  orr r2,r1,r0, lsr #0x1d
0201baf0  and r0,r2,#0xff
0201baf4  orr r1,r0,#0x8
0201baf8  strb r1,[r6,#0x32]
0201bafc  ldrb r0,[r5,#0x32]
0201bb00  bic r1,r1,#0x10
0201bb04  mov r0,r0, lsl #0x1b
0201bb08  mov r0,r0, lsr #0x1f
0201bb0c  mov r0,r0, lsl #0x1f
0201bb10  orr r0,r1,r0, lsr #0x1b
0201bb14  strb r0,[r6,#0x32]
0201bb18  ldr r0,[r5,#0x34]
0201bb1c  str r0,[r6,#0x34]
0201bb20  ldr r0,[r5,#0x38]
0201bb24  str r0,[r6,#0x38]
0201bb28  ldr r0,[r5,#0x3c]
0201bb2c  str r0,[r6,#0x3c]
0201bb30  ldr r0,[r5,#0x44]
0201bb34  str r0,[r6,#0x44]
0201bb38  beq 0x0201bb70
0201bb3c  add r0,r4,#0x1c
0201bb40  add r1,r6,#0x20
0201bb44  bl 0x02037ed8
0201bb48  mov r0,r6
0201bb4c  ldr r2,[r0,#0x0]
0201bb50  mov r1,r4
0201bb54  ldr r2,[r2,#0x64]
0201bb58  blx r2
0201bb5c  mov r0,r4
0201bb60  ldr r2,[r0,#0x0]
0201bb64  mov r1,r6
0201bb68  ldr r2,[r2,#0x80]
0201bb6c  blx r2
0201bb70  mov r0,r5
0201bb74  ldr r1,[r0,#0x0]
0201bb78  ldr r1,[r1,#0x68]
0201bb7c  blx r1
0201bb80  cmp r0,#0x0
0201bb84  moveq r0,#0x1
0201bb88  movne r0,#0x0
0201bb8c  cmp r0,#0x0
0201bb90  bne 0x0201bba4
0201bb94  mov r0,r6
0201bb98  ldr r1,[r0,#0x0]
0201bb9c  ldr r1,[r1,#0x70]
0201bba0  blx r1
0201bba4  mov r0,r6
0201bba8  ldmia sp!,{r4,r5,r6,pc}
