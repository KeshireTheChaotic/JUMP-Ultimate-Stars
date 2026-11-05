02154014  stmdb sp!,{r4,r5,r6,lr}
02154018  mov r5,#0x0
0215401c  mov r6,r0
02154020  mov r4,r5
02154024  add r0,r6,r5, lsl #0x2
02154028  ldr r0,[r0,#0x250]
0215402c  mov r1,r4
02154030  ldr r0,[r0,#0x4]
02154034  ldr r2,[r0,#0x0]
02154038  ldr r2,[r2,#0xd8]
0215403c  blx r2
02154040  add r5,r5,#0x1
02154044  cmp r5,#0xa
02154048  blt 0x02154024
0215404c  ldmia sp!,{r4,r5,r6,pc}
