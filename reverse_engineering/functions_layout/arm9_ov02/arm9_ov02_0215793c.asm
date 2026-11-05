0215793c  stmdb sp!,{r3,lr}
02157940  mov r1,r1, lsl #0xc
02157944  str r1,[sp,#0x0]
02157948  ldr r0,[r0,#0x4]
0215794c  add r1,sp,#0x0
02157950  ldr r2,[r0,#0x0]
02157954  ldr r2,[r2,#0x10]
02157958  blx r2
0215795c  ldmia sp!,{r3,pc}
