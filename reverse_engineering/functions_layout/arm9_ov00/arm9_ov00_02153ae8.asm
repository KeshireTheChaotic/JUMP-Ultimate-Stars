02153ae8  stmdb sp!,{lr}
02153aec  sub sp,sp,#0x4
02153af0  ldr r1,[r0,#0x0]
02153af4  ldr r1,[r1,#0x14]
02153af8  blx r1
02153afc  add sp,sp,#0x4
02153b00  ldmia sp!,{pc}
