02029210  ldr r1,[r0,#0x74]
02029214  ldr r2,[r0,#0x70]
02029218  add r1,r0,r1, lsl #0x2
0202921c  add r2,r0,r2, lsl #0x2
02029220  ldr r0,[r1,#0x18]
02029224  ldr r1,[r2,#0x18]
02029228  mvn r0,r0
0202922c  and r0,r1,r0
02029230  bx lr
