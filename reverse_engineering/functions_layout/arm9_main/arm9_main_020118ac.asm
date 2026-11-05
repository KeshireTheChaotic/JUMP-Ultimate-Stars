020118ac  lsl r2,r1,#0x1
020118ae  add r1,r1,#0x1
020118b0  lsl r1,r1,#0x1
020118b2  ldrh r2,[r0,r2]
020118b4  ldrh r0,[r0,r1]
020118b6  lsl r0,r0,#0x10
020118b8  orr r0,r2
020118ba  bx lr
