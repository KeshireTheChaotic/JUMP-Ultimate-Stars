038078c0  eor r12,r0,r1
038078c4  and r12,r12,#0x80000000
038078c8  cmp r0,#0x0
038078cc  rsblt r0,r0,#0x0
038078d0  addlt r12,r12,#0x1
038078d4  cmp r1,#0x0
038078d8  rsblt r1,r1,#0x0
038078dc  beq 0x03807ab8
038078e0  cmp r0,r1
038078e4  movcc r1,r0
038078e8  movcc r0,#0x0
038078ec  bcc 0x03807ab8
038078f0  mov r2,#0x1c
038078f4  mov r3,r0, lsr #0x4
038078f8  cmp r1,r3, lsr #0xc
038078fc  suble r2,r2,#0x10
03807900  movle r3,r3, lsr #0x10
03807904  cmp r1,r3, lsr #0x4
03807908  suble r2,r2,#0x8
0380790c  movle r3,r3, lsr #0x8
03807910  cmp r1,r3
03807914  suble r2,r2,#0x4
03807918  movle r3,r3, lsr #0x4
0380791c  mov r0,r0, lsl r2
03807920  rsb r1,r1,#0x0
03807924  adds r0,r0,r0
03807928  add r2,r2,r2, lsl #0x1
0380792c  add pc,pc,r2, lsl #0x2
03807ab8  ands r3,r12,#0x80000000
03807abc  rsbne r0,r0,#0x0
03807ac0  ands r3,r12,#0x1
03807ac4  rsbne r1,r1,#0x0
03807ac8  bx lr
