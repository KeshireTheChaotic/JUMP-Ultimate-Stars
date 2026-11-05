02014f2c  stmdb sp!,{r4,lr}
02014f30  mov r4,r0
02014f34  ldrb r0,[r4,#0x10]
02014f38  mov r2,r0, lsl #0x1f
02014f3c  mov r2,r2, lsr #0x1f
02014f40  cmp r2,r1
02014f44  ldmiaeq sp!,{r4,pc}
02014f48  bic r2,r0,#0x1
02014f4c  and r0,r1,#0x1
02014f50  orr r0,r2,r0
02014f54  strb r0,[r4,#0x10]
02014f58  ldrb r0,[r4,#0x11]
02014f5c  mov r0,r0, lsl #0x1f
02014f60  movs r0,r0, lsr #0x1f
02014f64  beq 0x02014f94
02014f68  ldrb r0,[r4,#0x10]
02014f6c  mov r1,r4
02014f70  mov r0,r0, lsl #0x1f
02014f74  movs r0,r0, lsr #0x1f
02014f78  ldr r0,[r4,#0x34]
02014f7c  beq 0x02014f8c
02014f80  add r0,r0,#0x8c
02014f84  bl 0x0201cdb4
02014f88  b 0x02014f94
02014f8c  add r0,r0,#0x8c
02014f90  bl 0x0201cca0
02014f94  mov r0,r4
02014f98  bl 0x02014ae0
02014f9c  mov r0,#0x0
02014fa0  str r0,[r4,#0x3c]
02014fa4  ldmia sp!,{r4,pc}
