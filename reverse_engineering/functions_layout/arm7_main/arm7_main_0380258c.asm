0380258c  stmdb sp!,{r4,r5,lr}
03802590  sub sp,sp,#0x4
03802594  mov r5,r0
03802598  mov r4,r1
0380259c  bl 0x037ff660
038025a0  add r0,r5,r4, lsl #0x2
038025a4  ldr r4,[r0,#0x3c]
038025a8  cmp r4,#0x0
038025ac  beq 0x038025bc
038025b0  cmp r4,#0x2000000
038025b4  addcc r4,r5,r4
038025b8  b 0x038025c0
038025bc  mov r4,#0x0
038025c0  bl 0x037ff65c
038025c4  mov r0,r4
038025c8  add sp,sp,#0x4
038025cc  ldmia sp!,{r4,r5,lr}
038025d0  bx lr
