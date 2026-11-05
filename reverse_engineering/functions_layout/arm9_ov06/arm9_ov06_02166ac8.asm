02166ac8  stmdb sp!,{r3,r4,r5,lr}
02166acc  mov r4,r0
02166ad0  mov r5,r1
02166ad4  bl 0x02165e70
02166ad8  cmp r0,#0x0
02166adc  beq 0x02166b08
02166ae0  ldrb r0,[r5,#0x22]
02166ae4  ldr r1,[r4,#0x10]
02166ae8  sub r0,r0,#0x34
02166aec  add r0,r0,r0, lsr #0x1f
02166af0  ldr r2,[r1,#0x158]
02166af4  mov r1,r0, asr #0x1
02166af8  add r1,r1,#0x3a
02166afc  and r0,r2,#0xf
02166b00  and r1,r1,#0xff
02166b04  bl 0x02166524
02166b08  mov r0,r4
02166b0c  bl 0x02083648
02166b10  ldmia sp!,{r3,r4,r5,pc}
