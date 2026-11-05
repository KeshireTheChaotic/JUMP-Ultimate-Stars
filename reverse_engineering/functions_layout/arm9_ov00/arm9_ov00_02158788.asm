02158788  stmdb sp!,{r3,r4,r5,lr}
0215878c  mov r5,r0
02158790  mov r4,#0x5
02158794  add r0,r5,r4, lsl #0x2
02158798  ldr r0,[r0,#0x5c]
0215879c  ldr r0,[r0,#0x4]
021587a0  blx 0x021b77dc
021587a4  add r0,r4,#0x1
021587a8  and r4,r0,#0xff
021587ac  cmp r4,#0xb
021587b0  bcc 0x02158794
021587b4  ldmia sp!,{r3,r4,r5,pc}
