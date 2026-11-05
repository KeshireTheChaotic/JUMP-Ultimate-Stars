02024d90  stmdb sp!,{r4,lr}
02024d94  sub sp,sp,#0x8
02024d98  add r0,sp,#0x4
02024d9c  mov r4,r1
02024da0  bl 0x02024d44
02024da4  add r0,sp,#0x4
02024da8  ldr r3,[r0,#0x0]
02024dac  ldr r2,[0x2024df4]
02024db0  mov r1,r3, asr #0xb
02024db4  add r1,r3,r1, lsr #0x14
02024db8  mov r3,r1, asr #0xc
02024dbc  add r0,sp,#0x0
02024dc0  mov r1,r4
02024dc4  strh r3,[r2,#0xfc]
02024dc8  bl 0x02024d54
02024dcc  add r0,sp,#0x0
02024dd0  ldr r3,[r0,#0x0]
02024dd4  ldr r2,[0x2024df4]
02024dd8  mov r1,r3, asr #0xb
02024ddc  add r1,r3,r1, lsr #0x14
02024de0  mov r1,r1, asr #0xc
02024de4  ldr r0,[0x2024df8]
02024de8  strh r1,[r2,#0xfe]
02024dec  add sp,sp,#0x8
02024df0  ldmia sp!,{r4,pc}
