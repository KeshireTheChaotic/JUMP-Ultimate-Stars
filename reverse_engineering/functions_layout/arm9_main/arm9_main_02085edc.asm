02085edc  stmdb sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
02085ee0  sub sp,sp,#0x8
02085ee4  ldr r2,[0x2086054]
02085ee8  mov r10,r0
02085eec  ldrb r0,[r2,#0x2c]
02085ef0  ldr r3,[r10,#0xc]
02085ef4  ldr r2,[r10,#0x10]
02085ef8  cmp r0,#0x0
02085efc  moveq r0,#0x0
02085f00  mov r9,r1
02085f04  str r3,[sp,#0x0]
02085f08  str r2,[sp,#0x4]
02085f0c  strbeq r0,[r10,#0x17]
02085f10  beq 0x0208604c
02085f14  ldrb r0,[r10,#0x17]
02085f18  ldr r1,[0x2086058]
02085f1c  ldr r2,[0x208605c]
02085f20  mov r0,r0, lsl #0x4
02085f24  mov r3,#0x288
02085f28  bl 0x0201a21c
02085f2c  str r0,[r10,#0x4]
02085f30  mov r6,#0x0
02085f34  ldr r11,[0x2086060]
02085f38  b 0x02086040
02085f3c  ldrb r1,[r9,r6,lsl #0x3]
02085f40  ldr r2,[r10,#0x4]
02085f44  add r0,r9,r6, lsl #0x3
02085f48  cmp r1,#0x0
02085f4c  add r5,r2,r6, lsl #0x4
02085f50  beq 0x02085f60
02085f54  cmp r1,#0x1
02085f58  beq 0x02086008
02085f5c  b 0x0208602c
02085f60  ldrsh r3,[r0,#0x4]
02085f64  ldr r1,[sp,#0x4]
02085f68  ldr r2,[sp,#0x0]
02085f6c  mov r3,r3, lsl #0x8
02085f70  str r3,[r5,#0x0]
02085f74  ldrsh r0,[r0,#0x6]
02085f78  mov r3,r0, lsl #0x8
02085f7c  rsb r0,r1,r0, lsl #0x8
02085f80  mov r8,r0, asr #0x8
02085f84  str r3,[r5,#0x4]
02085f88  ldr r1,[r5,#0x0]
02085f8c  mul r0,r8,r8
02085f90  sub r1,r1,r2
02085f94  mov r7,r1, asr #0x8
02085f98  mla r0,r7,r7,r0
02085f9c  bl 0x0200c954
02085fa0  bl 0x0200cb80
02085fa4  mov r1,r0
02085fa8  ldr r0,[0x2086064]
02085fac  bl 0x0200c9e4
02085fb0  mov r4,r0
02085fb4  ldrb r0,[r10,#0x19]
02085fb8  mov r0,r0, lsl #0x1
02085fbc  ldrsh r0,[r11,r0]
02085fc0  bl 0x0200c954
02085fc4  mov r1,r0
02085fc8  mov r0,r4
02085fcc  bl 0x0200c5ac
02085fd0  bl 0x0200c914
02085fd4  strh r0,[r5,#0xc]
02085fd8  ldrh r1,[r5,#0xc]
02085fdc  mov r0,r7, lsl #0x8
02085fe0  bl 0x0200d12c
02085fe4  strh r0,[r5,#0x8]
02085fe8  ldrh r1,[r5,#0xc]
02085fec  mov r0,r8, lsl #0x8
02085ff0  bl 0x0200d12c
02085ff4  strh r0,[r5,#0xa]
02085ff8  ldrh r0,[r5,#0xc]
02085ffc  sub r0,r0,#0x1
02086000  strh r0,[r5,#0xc]
02086004  b 0x0208602c
02086008  mov r1,#0x0
0208600c  strh r1,[r5,#0x8]
02086010  strh r1,[r5,#0xa]
02086014  ldr r2,[sp,#0x0]
02086018  ldr r1,[sp,#0x4]
0208601c  str r2,[r5,#0x0]
02086020  str r1,[r5,#0x4]
02086024  ldr r0,[r0,#0x4]
02086028  strh r0,[r5,#0xc]
0208602c  ldr r1,[r5,#0x0]
02086030  ldr r0,[r5,#0x4]
02086034  str r1,[sp,#0x0]
02086038  str r0,[sp,#0x4]
0208603c  add r6,r6,#0x1
02086040  ldrb r0,[r10,#0x17]
02086044  cmp r6,r0
02086048  bcc 0x02085f3c
0208604c  add sp,sp,#0x8
02086050  ldmia sp!,{r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
