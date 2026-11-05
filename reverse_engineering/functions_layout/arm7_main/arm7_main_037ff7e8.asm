037ff7e8  stmdb sp!,{r4,r5,lr}
037ff7ec  sub sp,sp,#0x4
037ff7f0  mov r4,r0, lsl #0x3
037ff7f4  ldr r12,[sp,#0x10]
037ff7f8  cmp r12,#0x0
037ff7fc  movne r5,#0x0
037ff800  moveq r5,#0x1
037ff804  ldr lr,[sp,#0x18]
037ff808  ldr r12,[sp,#0x14]
037ff80c  mov r1,r1, lsl #0x3
037ff810  orr r1,r1,r5, lsl #0x2
037ff814  orr r1,r1,r12, lsl #0x1
037ff818  orr r1,lr,r1
037ff81c  add r0,r0,#0x4000000
037ff820  strb r1,[r0,#0x508]
037ff824  add r0,r4,#0x4000000
037ff828  str r2,[r0,#0x510]
037ff82c  add r0,r0,#0x500
037ff830  strh r3,[r0,#0x14]
037ff834  add sp,sp,#0x4
037ff838  ldmia sp!,{r4,r5,lr}
037ff83c  bx lr
