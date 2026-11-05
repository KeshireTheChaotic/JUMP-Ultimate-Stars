027f688c  stmdb sp!,{r4,r5,lr}
027f6890  sub sp,sp,#0x4
027f6894  add r0,sp,#0x0
027f6898  bl 0x027f7554
027f689c  add r0,sp,#0x2
027f68a0  bl 0x027f74fc
027f68a4  ldrh r0,[sp,#0x0]
027f68a8  mov r1,r0, lsl #0x18
027f68ac  movs r1,r1, lsr #0x1f
027f68b0  bne 0x027f68d0
027f68b4  mov r0,r0, lsl #0x19
027f68b8  movs r0,r0, lsr #0x1f
027f68bc  bne 0x027f68d0
027f68c0  ldrh r0,[sp,#0x2]
027f68c4  mov r0,r0, lsl #0x18
027f68c8  movs r0,r0, lsr #0x1f
027f68cc  beq 0x027f68e8
027f68d0  ldrh r0,[sp,#0x0]
027f68d4  bic r0,r0,#0x1
027f68d8  orr r0,r0,#0x1
027f68dc  strh r0,[sp,#0x0]
027f68e0  add r0,sp,#0x0
027f68e4  bl 0x027f7528
027f68e8  ldrh r0,[sp,#0x0]
027f68ec  mov r1,r0, lsl #0x1b
027f68f0  movs r1,r1, lsr #0x1f
027f68f4  bne 0x027f6904
027f68f8  mov r0,r0, lsl #0x1a
027f68fc  movs r0,r0, lsr #0x1f
027f6900  beq 0x027f6924
027f6904  ldrh r0,[sp,#0x2]
027f6908  bic r0,r0,#0xf
027f690c  strh r0,[sp,#0x2]
027f6910  ldrh r0,[sp,#0x2]
027f6914  bic r0,r0,#0x40
027f6918  strh r0,[sp,#0x2]
027f691c  add r0,sp,#0x2
027f6920  bl 0x027f74d0
027f6924  ldr r0,[0x27f69bc]
027f6928  bl 0x027f7810
027f692c  ldr r0,[0x27f69bc]
027f6930  ldrb r0,[r0,#0x0]
027f6934  bl 0x027f6798
027f6938  mov r4,r0
027f693c  ldr r0,[0x27f69bc]
027f6940  ldr r0,[r0,#0x0]
027f6944  mov r0,r0, lsl #0x13
027f6948  mov r0,r0, lsr #0x1b
027f694c  bl 0x027f6798
027f6950  mov r5,r0
027f6954  ldr r0,[0x27f69bc]
027f6958  ldr r0,[r0,#0x0]
027f695c  mov r0,r0, lsl #0xa
027f6960  mov r0,r0, lsr #0x1a
027f6964  bl 0x027f6798
027f6968  mov r2,r0
027f696c  add r0,r4,#0x7d0
027f6970  mov r1,r5
027f6974  bl 0x027f6810
027f6978  ldr r2,[0x27f69bc]
027f697c  ldr r1,[r2,#0x0]
027f6980  mov r3,r1, lsl #0x5
027f6984  mov r3,r3, lsr #0x1d
027f6988  cmp r3,r0
027f698c  beq 0x027f69a8
027f6990  bic r1,r1,#0x7000000
027f6994  and r0,r0,#0x7
027f6998  orr r0,r1,r0, lsl #0x18
027f699c  str r0,[r2,#0x0]
027f69a0  mov r0,r2
027f69a4  bl 0x027f77e4
027f69a8  mov r0,#0x1
027f69ac  bl 0x027f783c
027f69b0  add sp,sp,#0x4
027f69b4  ldmia sp!,{r4,r5,lr}
027f69b8  bx lr
