02049ad4  stmdb sp!,{r3,r4,r5,lr}
02049ad8  ldr r12,[r0,#0x6c]
02049adc  ldr r4,[sp,#0x10]
02049ae0  mla lr,r2,r12,r1
02049ae4  ldr r12,[0x2049b18]
02049ae8  ldrb r5,[sp,#0x14]
02049aec  and r12,r3,r12
02049af0  mov r3,r4, lsl #0x1c
02049af4  orr r3,r12,r3, lsr #0x10
02049af8  ldrb r4,[sp,#0x18]
02049afc  orr r3,r3,r5, lsl #0xa
02049b00  ldr r12,[r0,#0xac]
02049b04  orr r4,r3,r4, lsl #0xb
02049b08  mov r3,lr, lsl #0x1
02049b0c  strh r4,[r12,r3]
02049b10  bl 0x020474b0
02049b14  ldmia sp!,{r3,r4,r5,pc}
