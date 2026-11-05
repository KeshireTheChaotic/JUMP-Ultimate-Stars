0201cca0  stmdb sp!,{r3,r4,r5,lr}
0201cca4  mov r5,r0
0201cca8  ldr r0,[r5,#0x40c]
0201ccac  mov r4,r1
0201ccb0  add r0,r0,#0x1
0201ccb4  str r0,[r5,#0x40c]
0201ccb8  ldrh r3,[r4,#0x6]
0201ccbc  mov r0,r3, asr #0x8
0201ccc0  add r0,r5,r0, lsl #0x2
0201ccc4  ldr r2,[r0,#0xc]
0201ccc8  cmp r2,#0x0
0201cccc  beq 0x0201cd3c
0201ccd0  ldrh r0,[r2,#0x6]
0201ccd4  cmp r0,r3
0201ccd8  bcs 0x0201cd10
0201ccdc  b 0x0201cce4
0201cce0  ldr r2,[r2,#0xc]
0201cce4  ldrh r0,[r2,#0x6]
0201cce8  cmp r0,r3
0201ccec  bcc 0x0201cce0
0201ccf0  str r2,[r4,#0xc]
0201ccf4  ldr r0,[r2,#0x8]
0201ccf8  str r0,[r4,#0x8]
0201ccfc  ldr r0,[r4,#0xc]
0201cd00  str r4,[r0,#0x8]
0201cd04  ldr r0,[r4,#0x8]
0201cd08  str r4,[r0,#0xc]
0201cd0c  ldmia sp!,{r3,r4,r5,pc}
0201cd10  str r2,[r4,#0xc]
0201cd14  ldr r0,[r2,#0x8]
0201cd18  str r0,[r4,#0x8]
0201cd1c  ldr r0,[r2,#0x8]
0201cd20  str r4,[r0,#0xc]
0201cd24  str r4,[r2,#0x8]
0201cd28  ldrh r0,[r4,#0x6]
0201cd2c  mov r0,r0, asr #0x8
0201cd30  add r0,r5,r0, lsl #0x2
0201cd34  str r4,[r0,#0xc]
0201cd38  ldmia sp!,{r3,r4,r5,pc}
0201cd3c  add r0,sp,#0x0
0201cd40  blx 0x02011990
0201cd44  add r0,sp,#0x0
0201cd48  ldr r0,[r0,#0x0]
0201cd4c  add r1,r0,#0x1000
0201cd50  mov r0,r1, asr #0xb
0201cd54  add r0,r1,r0, lsr #0x14
0201cd58  mov r2,r0, asr #0xc
0201cd5c  b 0x0201cda8
0201cd60  add r1,r5,r2, lsl #0x2
0201cd64  ldr r0,[r1,#0xc]
0201cd68  cmp r0,#0x0
0201cd6c  beq 0x0201cda4
0201cd70  str r0,[r4,#0xc]
0201cd74  ldr r0,[r1,#0xc]
0201cd78  ldr r0,[r0,#0x8]
0201cd7c  str r0,[r4,#0x8]
0201cd80  ldr r0,[r4,#0xc]
0201cd84  str r4,[r0,#0x8]
0201cd88  ldr r0,[r4,#0x8]
0201cd8c  str r4,[r0,#0xc]
0201cd90  ldrh r0,[r4,#0x6]
0201cd94  mov r0,r0, asr #0x8
0201cd98  add r0,r5,r0, lsl #0x2
0201cd9c  str r4,[r0,#0xc]
0201cda0  ldmia sp!,{r3,r4,r5,pc}
0201cda4  add r2,r2,#0x1
0201cda8  cmp r2,#0x100
0201cdac  bcc 0x0201cd60
0201cdb0  ldmia sp!,{r3,r4,r5,pc}
