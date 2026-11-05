02079680  stmdb sp!,{r4,lr}
02079684  ldr r0,[r0,#0x4]
02079688  ldr r0,[r0,#0x64]
0207968c  add r0,r0,r1, lsl #0x2
02079690  ldr r4,[r0,#0x20]
02079694  ldr r0,[r4,#0x38]
02079698  cmp r0,#0x0
0207969c  bne 0x020796b0
020796a0  mov r0,r4
020796a4  ldr r1,[r0,#0x0]
020796a8  ldr r1,[r1,#0x14]
020796ac  blx r1
020796b0  ldr r0,[r4,#0x38]
020796b4  ldmia sp!,{r4,pc}
