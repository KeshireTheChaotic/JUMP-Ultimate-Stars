020548c4  mrc p15,0x0,r0,cr1,cr0,0x0
020548c8  orr r0,r0,#0x1
020548cc  mcr p15,0x0,r0,cr1,cr0,0x0
020548d0  bx lr
