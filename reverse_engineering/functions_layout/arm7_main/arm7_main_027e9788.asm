027e9788  ldr r1,[0x27e9794]
027e978c  ldr r12,[0x27e9798]
027e9790  bx r12
037fb7b0  stmdb sp!,{r4,lr}
037fb7b4  sub sp,sp,#0x8
037fb7b8  mov r4,r1
037fb7bc  mov r1,#0x1
037fb7c0  str r1,[sp,#0x4]
037fb7c4  mov r3,#0x0
037fb7c8  ldr r1,[0x37fb830]
037fb7cc  umull r12,r2,r0,r1
037fb7d0  mla r2,r0,r3,r2
037fb7d4  mla r2,r3,r1,r2
037fb7d8  mov r1,r2, lsr #0x6
037fb7dc  mov r0,r12, lsr #0x6
037fb7e0  orr r0,r0,r2, lsl #0x1a
037fb7e4  mov r2,#0x3e8
037fb7e8  bl 0x038076b8
037fb7ec  mov r3,r0
037fb7f0  mov r2,r1
037fb7f4  add r0,sp,#0x4
037fb7f8  str r0,[sp,#0x0]
037fb7fc  ldr r0,[0x37fb834]
037fb800  ldr r1,[r0,#0x0]
037fb804  ldr r0,[0x37fb838]
037fb808  add r0,r1,r0
037fb80c  mov r1,r3
037fb810  mov r3,r4
037fb814  bl 0x037fdaa4
037fb818  ldr r0,[sp,#0x4]
037fb81c  cmp r0,#0x0
037fb820  bne 0x037fb818
037fb824  add sp,sp,#0x8
037fb828  ldmia sp!,{r4,lr}
037fb82c  bx lr
