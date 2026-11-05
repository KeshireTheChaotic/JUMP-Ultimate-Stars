02025d34  stmdb sp!,{r4,lr}
02025d38  mov r4,r0
02025d3c  mov r0,#0x44
02025d40  bl 0x0201a228
02025d44  cmp r0,#0x0
02025d48  beq 0x02025d50
02025d4c  bl 0x02025ccc
02025d50  mov r3,#0x0
02025d54  add r1,r4,r3, lsl #0x2
02025d58  ldr r2,[r1,#0xc]
02025d5c  add r1,r0,r3, lsl #0x2
02025d60  add r3,r3,#0x1
02025d64  str r2,[r1,#0xc]
02025d68  cmp r3,#0xe
02025d6c  blt 0x02025d54
02025d70  ldr r1,[r4,#0x8]
02025d74  str r1,[r0,#0x8]
02025d78  ldmia sp!,{r4,pc}
