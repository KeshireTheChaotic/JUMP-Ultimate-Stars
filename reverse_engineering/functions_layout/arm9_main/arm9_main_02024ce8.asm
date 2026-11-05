02024ce8  stmdb sp!,{r3,r4,r5,lr}
02024cec  sub sp,sp,#0x8
02024cf0  add r0,sp,#0x4
02024cf4  mov r5,r1
02024cf8  mov r4,r2
02024cfc  bl 0x02024d44
02024d00  add r1,sp,#0x4
02024d04  ldr r3,[r1,#0x0]
02024d08  add r0,sp,#0x0
02024d0c  mov r2,r3, asr #0xb
02024d10  add r2,r3,r2, lsr #0x14
02024d14  mov r2,r2, asr #0xc
02024d18  mov r1,r5
02024d1c  strh r2,[r4,#0x0]
02024d20  bl 0x02024d54
02024d24  add r0,sp,#0x0
02024d28  ldr r1,[r0,#0x0]
02024d2c  mov r0,r1, asr #0xb
02024d30  add r0,r1,r0, lsr #0x14
02024d34  mov r0,r0, asr #0xc
02024d38  strh r0,[r4,#0x2]
02024d3c  add sp,sp,#0x8
02024d40  ldmia sp!,{r3,r4,r5,pc}
