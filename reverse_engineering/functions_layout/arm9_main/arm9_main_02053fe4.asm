02053fe4  add r1,r1,r0
02053fe8  bic r0,r0,#0x1f
02053fec  mcr p15,0x0,r0,cr7,cr6,0x1
02053ff0  add r0,r0,#0x20
02053ff4  cmp r0,r1
02053ff8  blt 0x02053fec
02053ffc  bx lr
