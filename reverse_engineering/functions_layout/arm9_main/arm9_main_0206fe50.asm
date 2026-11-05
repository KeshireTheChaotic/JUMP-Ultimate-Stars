0206fe50  stmdb sp!,{r3,r4,r5,lr}
0206fe54  mov r4,r1
0206fe58  mov r5,r0
0206fe5c  cmp r4,#0xf
0206fe60  addls pc,pc,r4, lsl #0x2
0206fe64  b 0x02070030
02070030  str r4,[r5,#0x4]
02070034  ldmia sp!,{r3,r4,r5,pc}
