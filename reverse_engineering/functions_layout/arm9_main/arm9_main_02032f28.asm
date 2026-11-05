02032f28  stmdb sp!,{r4,r5,r6,lr}
02032f2c  mov r6,r1
02032f30  strb r6,[r0,#0x48]
02032f34  ldr r0,[r0,#0x38]
02032f38  ldr r4,[0x2032f84]
02032f3c  ldr r5,[r0,#0x4c]
02032f40  b 0x02032f78
02032f44  mov r0,r5
02032f48  ldr r1,[r0,#0x0]
02032f4c  ldr r1,[r1,#0x9c]
02032f50  blx r1
02032f54  mov r0,r0, lsl #0x10
02032f58  cmp r4,r0, lsr #0x10
02032f5c  bne 0x02032f74
02032f60  ldr r0,[r5,#0x64]
02032f64  mov r1,r6
02032f68  ldr r2,[r0,#0x0]
02032f6c  ldr r2,[r2,#0x5c]
02032f70  blx r2
02032f74  ldr r5,[r5,#0x4c]
02032f78  cmp r5,#0x0
02032f7c  bne 0x02032f44
02032f80  ldmia sp!,{r4,r5,r6,pc}
