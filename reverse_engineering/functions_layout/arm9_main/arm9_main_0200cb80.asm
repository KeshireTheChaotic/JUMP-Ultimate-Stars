0200cb80  stmdb sp!,{lr}
0200cb84  mov r2,#0xff
0200cb88  cmp r0,r2, lsl #0x17
0200cb8c  bcs 0x0200cc10
0200cb90  movs r12,r0, lsr #0x17
0200cb94  beq 0x0200cc04
0200cb98  bic r0,r0,r2, lsl #0x17
0200cb9c  orr r0,r0,#0x800000
0200cba0  movs r12,r12, asr #0x1
0200cba4  bcs 0x0200cbb0
0200cba8  sub r12,r12,#0x1
0200cbac  mov r0,r0, lsl #0x1
0200cbb0  movs r1,r0, lsl #0x1
0200cbb4  mov r0,#0x0
0200cbb8  mov r2,#0x0
0200cbbc  mov lr,#0x1000000
0200cbc0  add r3,r2,lr
0200cbc4  cmp r3,r1
0200cbc8  addle r2,r3,lr
0200cbcc  suble r1,r1,r3
0200cbd0  addle r0,r0,lr
0200cbd4  mov r1,r1, lsl #0x1
0200cbd8  movs lr,lr, lsr #0x1
0200cbdc  bne 0x0200cbc0
0200cbe0  cmp r1,#0x0
0200cbe4  biceq r0,r0,#0x1
0200cbe8  movs r0,r0, lsr #0x1
0200cbec  adc r0,r0,#0x0
0200cbf0  add r0,r0,#0x20000000
0200cbf4  sub r0,r0,#0x800000
0200cbf8  add r0,r0,r12, lsl #0x17
0200cbfc  ldmia sp!,{lr}
0200cc00  bx lr
0200cc04  mov r0,#0x0
0200cc08  ldmia sp!,{lr}
0200cc0c  bx lr
0200cc10  ldmiaeq sp!,{lr}
0200cc14  bxeq lr
0200cc18  tst r0,#0x80000000
0200cc1c  beq 0x0200cc34
0200cc20  bics r3,r0,#0x80000000
0200cc24  movs r12,r3, lsr #0x17
0200cc28  moveq r0,#0x0
0200cc2c  ldmiaeq sp!,{lr}
0200cc30  bxeq lr
0200cc34  ldr r2,[0x200cc50]
0200cc38  orr r0,r0,r2
0200cc3c  ldr r3,[0x200cc54]
0200cc40  mov r4,#0x21
0200cc44  str r4,[r3,#0x0]
0200cc48  ldmia sp!,{lr}
0200cc4c  bx lr
