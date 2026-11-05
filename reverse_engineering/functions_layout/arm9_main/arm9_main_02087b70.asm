02087b70  push {r3,lr}
02087b72  blx 0x0204327c
02087b76  cmp r0,#0x0
02087b78  bne 0x02087b7e
02087b7a  mov r0,#0x1
02087b7c  pop {r3,pc}
02087b7e  mov r0,#0x0
02087b80  pop {r3,pc}
