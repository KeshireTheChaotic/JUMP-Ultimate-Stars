037fe648  mov r3,#0x0
037fe64c  cmp r3,r2
037fe650  strhlt r0,[r1,r3]
037fe654  addlt r3,r3,#0x2
037fe658  blt 0x037fe64c
037fe65c  bx lr
