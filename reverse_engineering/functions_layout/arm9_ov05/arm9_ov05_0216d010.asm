0216d010  stmdb sp!,{r3,r4,r5,lr}
0216d014  sub sp,sp,#0x8
0216d018  mov r4,r0
0216d01c  ldr r1,[r4,#0x80]
0216d020  ldr r2,[0x216d074]
0216d024  mov r0,#0x24
0216d028  mla r5,r1,r0,r2
0216d02c  ldr r0,[r4,#0x74]
0216d030  ldr r1,[r5,#0x4]
0216d034  ldr r0,[r0,#0x4]
0216d038  add r1,r1,#0x810000
0216d03c  mov r2,#0x0
0216d040  bl 0x02023894
0216d044  ldrsh r2,[r5,#0x12]
0216d048  ldrsh r0,[r5,#0x10]
0216d04c  add r1,sp,#0x4
0216d050  mov r2,r2, lsl #0xc
0216d054  mov r0,r0, lsl #0xc
0216d058  str r2,[sp,#0x0]
0216d05c  str r0,[sp,#0x4]
0216d060  ldr r0,[r4,#0x74]
0216d064  add r2,sp,#0x0
0216d068  bl 0x0214ce68
0216d06c  add sp,sp,#0x8
0216d070  ldmia sp!,{r3,r4,r5,pc}
