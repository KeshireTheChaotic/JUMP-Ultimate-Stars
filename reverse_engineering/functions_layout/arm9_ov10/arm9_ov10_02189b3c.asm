02189b3c  ldr r0,[0x02189b4c]
02189b3e  ldr r2,[r0,#0x0]
02189b40  mov r0,#0x0
02189b42  mvn r1,r0
02189b44  cmp r2,r1
02189b46  beq 0x02189b4a
02189b48  mov r0,#0x1
02189b4a  bx lr
