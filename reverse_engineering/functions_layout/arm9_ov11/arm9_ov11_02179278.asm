02179278  ldrb r1,[r0,#0x12]
0217927c  ldr r0,[r0,#0x38]
02179280  mov r0,r0, lsr #0x3
02179284  cmp r1,#0x1f
02179288  movhi r1,#0x1f
0217928c  and r0,r0,#0x1f
02179290  cmp r0,r1
02179294  movhi r0,#0x1
02179298  movls r0,#0x0
0217929c  bx lr
