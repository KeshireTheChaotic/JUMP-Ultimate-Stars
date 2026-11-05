02019844  stmdb sp!,{r3,r4,r5,lr}
02019848  mov r4,r1
0201984c  mov r5,r0
02019850  mov r0,r4
02019854  bl 0x02019874
02019858  strh r0,[r5,#0x10]
0201985c  ldr r1,[r4,#0x0]
02019860  mov r0,r1, asr #0xb
02019864  add r0,r1,r0, lsr #0x14
02019868  mov r0,r0, asr #0xc
0201986c  strh r0,[r5,#0x12]
02019870  ldmia sp!,{r3,r4,r5,pc}
