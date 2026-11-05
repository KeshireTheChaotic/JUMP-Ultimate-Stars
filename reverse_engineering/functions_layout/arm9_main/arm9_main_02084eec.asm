02084eec  stmdb sp!,{r3,lr}
02084ef0  mov r1,r1, lsl #0xc
02084ef4  str r1,[sp,#0x0]
02084ef8  ldr r0,[r0,#0x4]
02084efc  add r1,sp,#0x0
02084f00  ldr r2,[r0,#0x0]
02084f04  ldr r2,[r2,#0x10]
02084f08  blx r2
02084f0c  ldmia sp!,{r3,pc}
