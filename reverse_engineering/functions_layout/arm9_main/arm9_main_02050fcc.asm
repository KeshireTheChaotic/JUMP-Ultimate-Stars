02050fcc  stmdb sp!,{r4,lr}
02050fd0  mov lr,#0x0
02050fd4  mov r3,lr
02050fd8  mov r4,lr
02050fdc  mov r12,r3
02050fe0  ands r2,r4,#0x1
02050fe4  eorne r4,r1,r4, lsr #0x1
02050fe8  add r12,r12,#0x1
02050fec  moveq r4,r4, lsr #0x1
02050ff0  cmp r12,#0x8
02050ff4  bcc 0x02050fe0
02050ff8  mov r2,lr, lsl #0x1
02050ffc  add lr,lr,#0x1
02051000  strh r4,[r0,r2]
02051004  cmp lr,#0x100
02051008  bcc 0x02050fd8
0205100c  ldmia sp!,{r4,lr}
02051010  bx lr
