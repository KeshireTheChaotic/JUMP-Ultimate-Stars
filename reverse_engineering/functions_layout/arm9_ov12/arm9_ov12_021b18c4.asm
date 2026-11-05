021b18c4  push {r4,lr}
021b18c6  ldr r4,[r1,#0x4]
021b18c8  add r1,#0x8
021b18ca  blx 0x02037ed8
021b18ce  mov r0,#0x0
021b18d0  mvn r0,r0
021b18d2  str r0,[r4,#0x50]
021b18d4  pop {r4,pc}
