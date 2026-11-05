0215e93c  stmdb sp!,{lr}
0215e940  sub sp,sp,#0x4
0215e944  ldr r2,[r0,#0x20]
0215e948  ldr r2,[r2,#0xc]
0215e94c  ldr r2,[r2,#0x4]
0215e950  blx r2
0215e954  add sp,sp,#0x4
0215e958  ldmia sp!,{pc}
