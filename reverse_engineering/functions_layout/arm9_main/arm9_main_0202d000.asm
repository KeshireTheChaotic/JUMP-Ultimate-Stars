0202d000  stmdb sp!,{r3}
0202d004  sub sp,sp,#0x4
0202d008  add r2,r0,r1
0202d00c  ldrh r1,[r0,r1]
0202d010  ldrh r0,[r2,#0x2]
0202d014  orr r0,r1,r0, lsl #0x10
0202d018  str r0,[sp,#0x0]
0202d01c  add sp,sp,#0x4
0202d020  ldmia sp!,{r3}
0202d024  bx lr
