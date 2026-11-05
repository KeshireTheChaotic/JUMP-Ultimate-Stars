037fe3a4  mrs r0,cpsr
037fe3a8  orr r1,r0,#0x80
037fe3ac  msr cpsr_c,r1
037fe3b0  and r0,r0,#0x80
037fe3b4  bx lr
