01ffdf28  stmdb sp!,{lr}
01ffdf2c  ldr r4,[r0,#-0x8]
01ffdf30  ldr r9,[r0,#0x0]
01ffdf34  add r4,r4,r9
01ffdf38  ldrb r9,[r4,#-0xff]
01ffdf3c  ldrb r10,[r4,#0x6ff]
01ffdf40  add r9,r9,r10
01ffdf44  add r9,r9,#0x1
01ffdf48  mov r5,r9, lsr #0x1
01ffdf4c  bl 0x01ff9450
01ffdf50  add r6,r5,r6, lsl #0x1
01ffdf54  strb r6,[r4,#0x701]
01ffdf58  bl 0x01ffde00
01ffdf5c  ldr r4,[r0,#-0x4]
01ffdf60  ldr r9,[r0,#0x4]
01ffdf64  add r4,r4,r9
01ffdf68  bl 0x01ffdda4
01ffdf6c  add r4,r4,#0x1
01ffdf70  bl 0x01ffdda4
01ffdf74  ldmia sp!,{pc}
