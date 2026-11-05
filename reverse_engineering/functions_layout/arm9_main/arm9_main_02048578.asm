02048578  stmdb sp!,{r4,r5,r6,lr}
0204857c  ldr r0,[r0,#0x34]
02048580  mov r6,r1
02048584  ldr r0,[r0,#0x948]
02048588  mov r5,r2
0204858c  mov r4,r3
02048590  blx r0
02048594  ldr r1,[sp,#0x10]
02048598  sub r2,r4,#0x1
0204859c  sub r1,r1,#0x1
020485a0  and r2,r6,r2
020485a4  and r1,r5,r1
020485a8  mla r1,r4,r1,r2
020485ac  add r0,r0,r1, lsl #0x1
020485b0  ldmia sp!,{r4,r5,r6,pc}
