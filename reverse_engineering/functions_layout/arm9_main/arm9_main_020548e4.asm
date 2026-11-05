020548e4  mrc p15,0x0,r2,cr5,cr0,0x2
020548e8  bic r2,r2,r0
020548ec  orr r2,r2,r1
020548f0  mcr p15,0x0,r2,cr5,cr0,0x2
020548f4  bx lr
