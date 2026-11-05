0207387c  stmdb sp!,{r3,lr}
02073880  ldrb r1,[r0,#0x8]
02073884  cmp r1,#0x0
02073888  movne r0,#0x1
0207388c  ldmiane sp!,{r3,pc}
02073890  ldrh r1,[r0,#0x2]
02073894  add r1,r1,#0x4
02073898  strh r1,[r0,#0x2]
0207389c  ldrh r2,[r0,#0x2]
020738a0  ldrb r1,[r0,#0x1]
020738a4  mov r1,r2, asr r1
020738a8  mov r1,r1, lsl #0x10
020738ac  mov r1,r1, lsr #0x10
020738b0  cmp r1,#0x10
020738b4  movcs r1,#0x1
020738b8  strbcs r1,[r0,#0x8]
020738bc  ldr r2,[r0,#0xc]
020738c0  movcs r1,#0x10
020738c4  blx r2
020738c8  mov r0,#0x0
020738cc  ldmia sp!,{r3,pc}
