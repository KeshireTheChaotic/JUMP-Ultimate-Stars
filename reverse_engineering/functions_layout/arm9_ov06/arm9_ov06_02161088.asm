02161088  ldr r0,[0x21610a8]
0216108c  ldr r1,[r0,#0x0]
02161090  ldrb r0,[r1,#0xc6]
02161094  ldr r1,[r1,#0x1c]
02161098  cmp r1,r0
0216109c  movge r0,#0x1
021610a0  movlt r0,#0x0
021610a4  bx lr
