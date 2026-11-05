02050e14  movs r1,r0, lsr #0x10
02050e18  mov r2,#0x20
02050e1c  movne r0,r1
02050e20  subne r2,r2,#0x10
02050e24  movs r1,r0, lsr #0x8
02050e28  movne r0,r1
02050e2c  subne r2,r2,#0x8
02050e30  movs r1,r0, lsr #0x4
02050e34  movne r0,r1
02050e38  subne r2,r2,#0x4
02050e3c  movs r1,r0, lsr #0x2
02050e40  movne r0,r1
02050e44  subne r2,r2,#0x2
02050e48  movs r1,r0, lsr #0x1
02050e4c  subne r2,r2,#0x2
02050e50  subeq r2,r2,r0
02050e54  mov r0,r2
02050e58  bx lr
