02166234  stmdb sp!,{r3,lr}
02166238  ldr r0,[r0,#0x8]
0216623c  ldr r0,[r0,#0x4]
02166240  ldr r0,[r0,#0x68]
02166244  ldr r1,[r0,#0x0]
02166248  ldr r1,[r1,#0x6c]
0216624c  blx r1
02166250  ldmia sp!,{r3,pc}
