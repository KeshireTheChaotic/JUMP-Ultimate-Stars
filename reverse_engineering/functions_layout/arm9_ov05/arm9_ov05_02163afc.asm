02163afc  stmdb sp!,{r3,lr}
02163b00  ldr r2,[0x2163b2c]
02163b04  ldr r1,[0x2163b30]
02163b08  ldr r12,[r2,#0x0]
02163b0c  ldr lr,[r0,#0x4]
02163b10  ldr r3,[r1,#0x0]
02163b14  sub r12,r12,#0x1
02163b18  ldr r0,[0x2163b34]
02163b1c  str r12,[r2,#0x0]
02163b20  str r3,[r0,r12,lsl #0x2]
02163b24  str lr,[r1,#0x0]
02163b28  ldmia sp!,{r3,pc}
