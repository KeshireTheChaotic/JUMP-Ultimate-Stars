037fec1c  mvn r3,r0
037fec20  ldr r2,[0x37fec38]
037fec24  ldrh r0,[r2,#0x0]
037fec28  and r0,r3,r0
037fec2c  orr r0,r1,r0
037fec30  strh r0,[r2,#0x0]
037fec34  bx lr
