021b7f6c  push {r3,lr}
021b7f6e  mov r2,#0x52
021b7f70  lsl r2,r2,#0x2
021b7f72  ldr r2,[r0,r2]
021b7f74  cmp r2,#0x0
021b7f76  beq 0x021b7f7a
021b7f78  blx r2
021b7f7a  pop {r3,pc}
