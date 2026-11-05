02180bc8  stmdb sp!,{r3,lr}
02180bcc  ldrb r2,[r0,#0xa8]
02180bd0  ldr r1,[0x2180be0]
02180bd4  ldr r1,[r1,r2,lsl #0x2]
02180bd8  blx r1
02180bdc  ldmia sp!,{r3,pc}
