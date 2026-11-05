02010970  stmdb sp!,{r4,lr}
02010974  mov r4,r0
02010978  str r1,[r4,#0x4]
0201097c  ldrh r0,[r4,#0xa]
02010980  mul r0,r1,r0
02010984  bl 0x0201a228
02010988  str r0,[r4,#0x0]
0201098c  ldmia sp!,{r4,pc}
