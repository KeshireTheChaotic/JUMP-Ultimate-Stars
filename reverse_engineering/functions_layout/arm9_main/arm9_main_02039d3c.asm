02039d3c  stmdb sp!,{r4,lr}
02039d40  mov r4,r0
02039d44  mul r0,r1,r2
02039d48  bl 0x0201a228
02039d4c  str r0,[r4,#0xc]
02039d50  mov r0,#0x1
02039d54  strb r0,[r4,#0x10]
02039d58  ldmia sp!,{r4,pc}
