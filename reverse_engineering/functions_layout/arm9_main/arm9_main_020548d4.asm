020548d4  mrc p15,0x0,r0,cr1,cr0,0x0
020548d8  bic r0,r0,#0x1
020548dc  mcr p15,0x0,r0,cr1,cr0,0x0
020548e0  bx lr
