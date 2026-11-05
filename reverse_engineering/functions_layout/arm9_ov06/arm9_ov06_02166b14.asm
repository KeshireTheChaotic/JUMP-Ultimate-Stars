02166b14  ldr r1,[r0,#0x10]
02166b18  mvn r0,#0x0
02166b1c  ldr r1,[r1,#0x158]
02166b20  mov r2,#0x0
02166b24  and r1,r1,#0xf
02166b28  tst r1,#0x1
02166b2c  movne r0,r2
02166b30  mov r1,r1, lsl #0xf
02166b34  add r2,r2,#0x1
02166b38  cmp r2,#0x4
02166b3c  mov r1,r1, lsr #0x10
02166b40  blt 0x02166b28
02166b44  bx lr
