021cb310  ldr r0,[r0,#0x40]
021cb312  lsl r1,r1,#0x3
021cb314  add r2,r0,#0x2
021cb316  ldrh r0,[r2,r1]
021cb318  add r0,r0,#0x1
021cb31a  strh r0,[r2,r1]
021cb31c  bx lr
