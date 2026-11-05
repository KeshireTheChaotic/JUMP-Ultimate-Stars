02178f40  mov r1,#0x0
02178f44  strb r1,[r0,#0x18b]
02178f48  ldr r1,[r0,#0x180]
02178f4c  orr r1,r1,#0x4
02178f50  bic r1,r1,#0x20
02178f54  str r1,[r0,#0x180]
02178f58  bx lr
