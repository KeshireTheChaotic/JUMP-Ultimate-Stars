0215e84c  stmdb sp!,{lr}
0215e850  sub sp,sp,#0x4
0215e854  ldr r2,[r0,#0x20]
0215e858  ldr r2,[r2,#0xc]
0215e85c  ldr r2,[r2,#0x10]
0215e860  blx r2
0215e864  add sp,sp,#0x4
0215e868  ldmia sp!,{pc}
