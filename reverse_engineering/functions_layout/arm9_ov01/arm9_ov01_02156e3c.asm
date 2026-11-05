02156e3c  ldr r2,[r0,#0x0]
02156e40  ldr r0,[r2,#0x74]
02156e44  ldr r1,[r2,#0x70]
02156e48  add r0,r2,r0, lsl #0x2
02156e4c  add r1,r2,r1, lsl #0x2
02156e50  ldr r0,[r0,#0x18]
02156e54  ldr r1,[r1,#0x18]
02156e58  mvn r0,r0
02156e5c  ldr r2,[r2,#0x28]
02156e60  and r0,r1,r0
02156e64  orr r0,r2,r0
02156e68  bx lr
