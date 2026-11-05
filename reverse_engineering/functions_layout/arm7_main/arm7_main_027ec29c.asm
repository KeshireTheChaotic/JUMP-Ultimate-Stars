027ec29c  ldr r1,[0x27ec2b8]
027ec2a0  ldr r1,[r1,#0x0]
027ec2a4  add r1,r1,#0x500
027ec2a8  ldrh r1,[r1,#0x30]
027ec2ac  mov r0,r1, asr r0
027ec2b0  and r0,r0,#0x1
027ec2b4  bx lr
