0200cc64  eors r2,r0,r1
0200cc68  eormi r1,r1,#0x80000000
0200cc6c  bmi 0x0200bfc0
0200cc70  subs r12,r0,r1
0200cc74  eorcc r12,r12,#0x80000000
0200cc78  subcc r0,r0,r12
0200cc7c  addcc r1,r1,r12
0200cc80  mov r2,#0x80000000
0200cc84  mov r3,r0, lsr #0x17
0200cc88  orr r0,r2,r0, lsl #0x8
0200cc8c  ands r12,r3,#0xff
0200cc90  cmpne r12,#0xff
0200cc94  beq 0x0200cd84
0200cc98  mov r12,r1, lsr #0x17
0200cc9c  orr r1,r2,r1, lsl #0x8
0200cca0  ands r2,r12,#0xff
0200cca4  beq 0x0200cdc4
0200cca8  subs r12,r3,r12
0200ccac  beq 0x0200ccf0
0200ccb0  rsb r2,r12,#0x20
0200ccb4  movs r2,r1, lsl r2
0200ccb8  mov r1,r1, lsr r12
0200ccbc  orrne r1,r1,#0x1
0200ccc0  subs r0,r0,r1
0200ccc4  bpl 0x0200cd30
0200ccc8  ands r1,r0,#0xff
0200cccc  add r0,r0,r0
0200ccd0  mov r0,r0, lsr #0x9
0200ccd4  orr r0,r0,r3, lsl #0x17
0200ccd8  tst r1,#0x80
0200ccdc  bxeq lr
0200cce0  ands r1,r1,#0x7f
0200cce4  andeqs r1,r0,#0x1
0200cce8  addne r0,r0,#0x1
0200ccec  bx lr
0200ccf0  subs r0,r0,r1
0200ccf4  beq 0x0200ceb8
0200ccf8  mov r2,r3, lsl #0x17
0200ccfc  and r2,r2,#0x80000000
0200cd00  bic r3,r3,#0x100
0200cd04  clz r12,r0
0200cd08  movs r0,r0, lsl r12
0200cd0c  sub r3,r3,r12
0200cd10  cmp r3,#0x0
0200cd14  bgt 0x0200cd20
0200cd18  mov r0,#0x0
0200cd1c  bx lr
0200cd20  add r0,r0,r0
0200cd24  orr r0,r2,r0, lsr #0x9
0200cd28  orr r0,r0,r3, lsl #0x17
0200cd2c  bx lr
0200cd30  mov r2,r3, lsl #0x17
0200cd34  and r2,r2,#0x80000000
0200cd38  bic r3,r3,#0x100
0200cd3c  clz r12,r0
0200cd40  movs r0,r0, lsl r12
0200cd44  sub r3,r3,r12
0200cd48  cmp r3,#0x0
0200cd4c  bgt 0x0200cd58
0200cd50  mov r0,#0x0
0200cd54  bx lr
0200cd58  ands r1,r0,#0xff
0200cd5c  add r0,r0,r0
0200cd60  orr r0,r2,r0, lsr #0x9
0200cd64  orr r0,r0,r3, lsl #0x17
0200cd68  bxeq lr
0200cd6c  tst r1,#0x80
0200cd70  bxeq lr
0200cd74  ands r1,r1,#0x7f
0200cd78  andeqs r1,r0,#0x1
0200cd7c  addne r0,r0,#0x1
0200cd80  bx lr
0200cd84  cmp r3,#0x100
0200cd88  movge r2,#0x80000000
0200cd8c  movlt r2,#0x0
0200cd90  ands r3,r3,#0xff
0200cd94  beq 0x0200ce70
0200cd98  movs r0,r0, lsl #0x1
0200cd9c  bne 0x0200cef4
0200cda0  mov r12,r1, lsr #0x17
0200cda4  mov r1,r1, lsl #0x9
0200cda8  ands r12,r12,#0xff
0200cdac  beq 0x0200cee8
0200cdb0  cmp r12,#0xff
0200cdb4  blt 0x0200cee8
0200cdb8  cmp r1,#0x0
0200cdbc  beq 0x0200cefc
0200cdc0  b 0x0200cef4
0200cdc4  cmp r12,#0x100
0200cdc8  movge r2,#0x80000000
0200cdcc  movlt r2,#0x0
0200cdd0  and r3,r3,#0xff
0200cdd4  ands r12,r12,#0xff
0200cdd8  beq 0x0200ce84
0200cddc  eor r2,r2,#0x80000000
0200cde0  movs r1,r1, lsl #0x1
0200cde4  bne 0x0200cef4
0200cde8  b 0x0200cee8
0200ce70  mov r3,r1, lsr #0x17
0200ce74  ands r3,r3,#0xff
0200ce78  moveq r1,#0x0
0200ce7c  mov r0,r1
0200ce80  bx lr
0200ce84  add r0,r0,r0
0200ce88  mov r0,r0, lsr #0x9
0200ce8c  orr r0,r0,r3, lsl #0x17
0200ce90  orr r0,r0,r2
0200ce94  bx lr
0200ceb8  mov r0,#0x0
0200cebc  bx lr
0200cee8  mov r0,#0xff000000
0200ceec  orr r0,r2,r0, lsr #0x1
0200cef0  bx lr
0200cef4  mvn r0,#0x80000000
0200cef8  bx lr
0200cefc  mvn r0,#0x80000000
0200cf00  bx lr
