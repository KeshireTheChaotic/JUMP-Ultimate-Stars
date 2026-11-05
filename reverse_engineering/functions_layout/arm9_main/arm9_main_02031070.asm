02031070  stmdb sp!,{r4,lr}
02031074  mov r4,r0
02031078  ldr r1,[r4,#0x9c4]
0203107c  subs r1,r1,#0x1
02031080  str r1,[r4,#0x9c4]
02031084  bne 0x0203108c
02031088  bl 0x02030f68
0203108c  ldr r2,[r4,#0x9cc]
02031090  ldr r0,[0x20310c0]
02031094  add r1,r2,#0x4
02031098  str r1,[r4,#0x9cc]
0203109c  ldr r2,[r2,#0x0]
020310a0  ldr r1,[0x20310c4]
020310a4  eor r2,r2,r2, lsr #0xb
020310a8  and r0,r0,r2, lsl #0x7
020310ac  eor r2,r2,r0
020310b0  and r0,r1,r2, lsl #0xf
020310b4  eor r0,r2,r0
020310b8  eor r0,r0,r0, lsr #0x12
020310bc  ldmia sp!,{r4,pc}
