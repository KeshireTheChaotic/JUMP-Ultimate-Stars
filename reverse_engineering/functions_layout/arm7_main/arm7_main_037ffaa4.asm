037ffaa4  stmdb sp!,{lr}
037ffaa8  sub sp,sp,#0x4
037ffaac  mov r1,r0
037ffab0  cmp r1,#0x7f
037ffab4  ldreq r0,[0x37ffb00]
037ffab8  beq 0x037ffaf4
037ffabc  cmp r1,#0x7e
037ffac0  moveq r0,#0x3c00
037ffac4  beq 0x037ffaf4
037ffac8  cmp r1,#0x32
037ffacc  movlt r0,r1, lsl #0x1
037ffad0  addlt r0,r0,#0x1
037ffad4  movlt r0,r0, lsl #0x10
037ffad8  movlt r0,r0, lsr #0x10
037ffadc  blt 0x037ffaf4
037ffae0  mov r0,#0x1e00
037ffae4  rsb r1,r1,#0x7e
037ffae8  bl 0x038078c0
037ffaec  mov r0,r0, lsl #0x10
037ffaf0  mov r0,r0, lsr #0x10
037ffaf4  add sp,sp,#0x4
037ffaf8  ldmia sp!,{lr}
037ffafc  bx lr
