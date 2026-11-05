02153fcc  stmdb sp!,{r4,r5,r6,lr}
02153fd0  mov r1,#0xa
02153fd4  mov r2,#0x5
02153fd8  mov r6,r0
02153fdc  bl 0x02153ea0
02153fe0  mov r5,#0x0
02153fe4  mov r4,#0x1
02153fe8  add r0,r6,r5, lsl #0x2
02153fec  ldr r0,[r0,#0x250]
02153ff0  mov r1,r4
02153ff4  ldr r0,[r0,#0x4]
02153ff8  ldr r2,[r0,#0x0]
02153ffc  ldr r2,[r2,#0xd8]
02154000  blx r2
02154004  add r5,r5,#0x1
02154008  cmp r5,#0xa
0215400c  blt 0x02153fe8
02154010  ldmia sp!,{r4,r5,r6,pc}
