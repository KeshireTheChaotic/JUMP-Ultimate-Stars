02154814  stmdb sp!,{r4,r5,lr}
02154818  sub sp,sp,#0xc
0215481c  mov r3,#0x30
02154820  mul r3,r1,r3
02154824  mov r1,r3, asr #0x2
02154828  add r1,r3,r1, lsr #0x1d
0215482c  cmp r2,#0x0
02154830  mov r2,r1, asr #0x3
02154834  add r1,r2,#0x6
02154838  mov r5,r0
0215483c  movne r4,#0xc
02154840  str r1,[sp,#0x0]
02154844  add r0,sp,#0x4
02154848  mov r1,#0x0
0215484c  mov r3,#0x20
02154850  moveq r4,#0xb
02154854  bl 0x0214e6e4
02154858  ldr r0,[r5,#0x10]
0215485c  add r1,sp,#0x4
02154860  mov r2,r4
02154864  bl 0x0214e958
02154868  add sp,sp,#0xc
0215486c  ldmia sp!,{r4,r5,pc}
