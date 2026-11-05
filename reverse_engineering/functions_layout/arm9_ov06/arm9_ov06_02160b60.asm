02160b60  ldrb r2,[r1,#0x1]
02160b64  ldrh r1,[r1,#0x2]
02160b68  add r0,r0,r2, lsl #0x1
02160b6c  ldrh r0,[r0,#0x6e]
02160b70  cmp r0,r1
02160b74  movls r0,#0x1
02160b78  movhi r0,#0x0
02160b7c  bx lr
