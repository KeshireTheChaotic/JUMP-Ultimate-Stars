0215e9f4  stmdb sp!,{lr}
0215e9f8  sub sp,sp,#0x4
0215e9fc  ldr r3,[r0,#0x20]
0215ea00  ldr r3,[r3,#0xc]
0215ea04  ldr r3,[r3,#0x18]
0215ea08  blx r3
0215ea0c  add sp,sp,#0x4
0215ea10  ldmia sp!,{pc}
