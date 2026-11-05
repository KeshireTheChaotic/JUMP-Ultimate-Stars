021502d8  stmdb sp!,{r3,r4,r5,lr}
021502dc  mov r4,r1
021502e0  mov r5,r0
021502e4  cmp r4,#0x3
021502e8  bne 0x0215030c
021502ec  ldr r0,[r5,#0x4]
021502f0  bl 0x0214fb7c
021502f4  bl 0x0214fde8
021502f8  cmp r0,#0x0
021502fc  ldreq r0,[0x215032c]
02150300  movne r1,#0x30
02150304  ldreq r1,[r0,r4,lsl #0x2]
02150308  b 0x02150314
0215030c  ldr r0,[0x215032c]
02150310  ldr r1,[r0,r4,lsl #0x2]
02150314  ldr r0,[r5,#0x68]
02150318  cmp r0,#0x0
0215031c  ldmiaeq sp!,{r3,r4,r5,pc}
02150320  mov r2,#0x0
02150324  blx 0x021bd730
02150328  ldmia sp!,{r3,r4,r5,pc}
