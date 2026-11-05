02166fd4  bl 0x02167204
02166fd8  bl 0x020735e4
02166fdc  ldr r1,[0x2167048]
02166fe0  ldr r2,[0x216704c]
02166fe4  ldr r3,[r1,#0x0]
02166fe8  ldr r0,[0x2167050]
02166fec  ldr r2,[r2,r3,lsl #0x2]
02166ff0  add r3,r3,#0x1
02166ff4  str r3,[r1,#0x0]
02166ff8  str r2,[r0,#0x0]
02166ffc  ldr r1,[r4,#0x34]
02167000  ldr r0,[r4,#0x18]
02167004  mov r1,r1, lsl #0x10
02167008  mov r0,r0, lsl #0x10
0216700c  orr r1,r1,r0, lsr #0x10
02167010  ldr r0,[0x2167054]
02167014  str r1,[r0,#0x8]
02167018  ldr r0,[r4,#0x1c]
0216701c  ldr r0,[r0,#0x4]
02167020  ldr r1,[r0,#0x0]
02167024  ldr r1,[r1,#0xc]
02167028  blx r1
0216702c  ldr r0,[r4,#0x20]
02167030  ldr r1,[r0,#0x0]
02167034  ldr r1,[r1,#0x8]
02167038  blx r1
0216703c  mov r0,r4
02167040  bl 0x0201b244
02167044  ldmia sp!,{r4,r5,r6,pc}
