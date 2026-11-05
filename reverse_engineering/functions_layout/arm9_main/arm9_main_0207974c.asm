0207974c  stmdb sp!,{r4,r5,r6,lr}
02079750  mov r4,r0
02079754  ldr r0,[r4,#0x8]
02079758  ldr r1,[0x20797e0]
0207975c  ldr r0,[r0,#0x4]
02079760  bl 0x02028384
02079764  mov r6,#0x0
02079768  str r6,[r4,#0x4]
0207976c  mov r5,r6
02079770  add r0,r4,r6, lsl #0x2
02079774  ldr r0,[r0,#0x14]
02079778  cmp r0,#0x0
0207977c  beq 0x02079794
02079780  ldr r1,[r0,#0x0]
02079784  ldr r1,[r1,#0x8]
02079788  blx r1
0207978c  add r0,r4,r6, lsl #0x2
02079790  str r5,[r0,#0x14]
02079794  add r6,r6,#0x1
02079798  cmp r6,#0x14
0207979c  blt 0x02079770
020797a0  mov r6,#0x0
020797a4  mov r5,r6
020797a8  add r0,r4,r6, lsl #0x2
020797ac  ldr r0,[r0,#0xb8]
020797b0  cmp r0,#0x0
020797b4  beq 0x020797d0
020797b8  ldr r1,[r0,#0x0]
020797bc  ldr r1,[r1,#0x8]
020797c0  blx r1
020797c4  add r0,r4,r6, lsl #0x2
020797c8  str r5,[r0,#0xb8]
020797cc  str r5,[r0,#0xc0]
020797d0  add r6,r6,#0x1
020797d4  cmp r6,#0x2
020797d8  blt 0x020797a8
020797dc  ldmia sp!,{r4,r5,r6,pc}
