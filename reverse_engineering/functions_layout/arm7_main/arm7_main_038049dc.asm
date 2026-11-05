038049dc  stmdb sp!,{r4,lr}
038049e0  sub sp,sp,#0x8
038049e4  mov r4,r0
038049e8  mov r0,#0x0
038049ec  mov r1,#0x10
038049f0  mov r2,#0x1
038049f4  mov r3,r4
038049f8  bl 0x03804588
038049fc  cmp r0,#0x0
03804a00  bne 0x03804a40
03804a04  ldr r0,[sp,#0x0]
03804a08  bic r0,r0,#0x6000000
03804a0c  orr r0,r0,#0x6000000
03804a10  str r0,[sp,#0x0]
03804a14  ldrh r1,[sp,#0x0]
03804a18  ldr r0,[0x3804a4c]
03804a1c  strh r1,[r0,#0x0]
03804a20  ldrh r1,[sp,#0x2]
03804a24  ldr r0,[0x3804a50]
03804a28  strh r1,[r0,#0x0]
03804a2c  mov r0,#0x10
03804a30  and r1,r4,#0xff
03804a34  mov r1,r1, lsl #0x10
03804a38  mov r1,r1, lsr #0x10
03804a3c  bl 0x038046d4
03804a40  add sp,sp,#0x8
03804a44  ldmia sp!,{r4,lr}
03804a48  bx lr
