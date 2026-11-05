02150938  stmdb sp!,{r3,lr}
0215093c  mov r1,r1, lsl #0xc
02150940  str r1,[sp,#0x0]
02150944  ldr r0,[r0,#0x4]
02150948  add r1,sp,#0x0
0215094c  ldr r2,[r0,#0x0]
02150950  ldr r2,[r2,#0x10]
02150954  blx r2
02150958  ldmia sp!,{r3,pc}
