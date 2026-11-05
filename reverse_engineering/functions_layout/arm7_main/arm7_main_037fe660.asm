037fe660  mov r12,#0x0
037fe664  cmp r12,r2
037fe668  ldrhlt r3,[r0,r12]
037fe66c  strhlt r3,[r1,r12]
037fe670  addlt r12,r12,#0x2
037fe674  blt 0x037fe664
037fe678  bx lr
