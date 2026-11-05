021554e8  ldr r12,[r0,#0x4]
021554ec  mov r0,#0x1
021554f0  strb r0,[r12,#0x901]
021554f4  ldrsh r3,[r2,#0x0]
021554f8  add r0,r12,r1, lsl #0x3
021554fc  add r0,r0,#0x800
02155500  strh r3,[r0,#0xd8]
02155504  ldrsh r1,[r2,#0x2]
02155508  strh r1,[r0,#0xda]
0215550c  ldrsh r1,[r2,#0x4]
02155510  strh r1,[r0,#0xdc]
02155514  ldrsh r1,[r2,#0x6]
02155518  strh r1,[r0,#0xde]
0215551c  bx lr
