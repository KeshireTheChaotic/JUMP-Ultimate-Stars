01ffcdcc  stmdb sp!,{lr}
01ffcdd0  ldr r4,[r0,#-0x8]
01ffcdd4  ldr r9,[r0,#0x0]
01ffcdd8  add r4,r4,r9
01ffcddc  ldrb r9,[r4,#-0xfd]
01ffcde0  ldrb r10,[r4,#0xeff]
01ffcde4  add r9,r9,r10
01ffcde8  add r9,r9,#0x1
01ffcdec  mov r5,r9, lsr #0x1
01ffcdf0  bl 0x01ff9450
01ffcdf4  add r6,r5,r6, lsl #0x1
01ffcdf8  strb r6,[r4,#0xf03]
01ffcdfc  bl 0x01ffcd74
01ffce00  ldr r4,[r0,#-0x4]
01ffce04  ldr r9,[r0,#0x4]
01ffce08  add r4,r4,r9
01ffce0c  bl 0x01ffcd48
01ffce10  add r4,r4,#0x1
01ffce14  bl 0x01ffcd48
01ffce18  ldmia sp!,{pc}
