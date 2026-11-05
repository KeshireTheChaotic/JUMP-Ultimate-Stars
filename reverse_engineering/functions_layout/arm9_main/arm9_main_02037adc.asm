02037adc  stmdb sp!,{r3,r4,r5,lr}
02037ae0  mov r5,r1
02037ae4  ldr r0,[r5,#0x64]
02037ae8  mov r4,r2
02037aec  ldr r0,[r0,#0x34]
02037af0  bl 0x020250c0
02037af4  mov r0,r5
02037af8  ldr r2,[r0,#0x0]
02037afc  ldrh r3,[r4,#0x0]
02037b00  ldrh r1,[r4,#0x2]
02037b04  ldr r2,[r2,#0x134]
02037b08  orr r1,r3,r1, lsl #0x10
02037b0c  blx r2
02037b10  bl 0x0202511c
02037b14  ldmia sp!,{r3,r4,r5,pc}
