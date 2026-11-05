03807f48  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
03807f4c  sub sp,sp,#0x4
03807f50  ldr r1,[0x3808070]
03807f54  and r0,r0,r1
03807f58  mov r0,r0, lsl #0x10
03807f5c  movs r6,r0, lsr #0x10
03807f60  moveq r0,#0x0
03807f64  beq 0x03808064
03807f68  mov r9,#0x0
03807f6c  mov r0,#0x1
03807f70  b 0x03807f84
03807f74  mov r1,r0, lsl r9
03807f78  ands r1,r6,r1
03807f7c  bne 0x03807f8c
03807f80  add r9,r9,#0x1
03807f84  cmp r9,#0x10
03807f88  blt 0x03807f74
03807f8c  mov r10,#0xf
03807f90  mov r0,#0x1
03807f94  b 0x03807fa8
03807f98  mov r1,r0, lsl r10
03807f9c  ands r1,r6,r1
03807fa0  bne 0x03807fb0
03807fa4  sub r10,r10,#0x1
03807fa8  cmp r10,#0x0
03807fac  bne 0x03807f98
03807fb0  sub r5,r10,r9
03807fb4  cmp r5,#0x5
03807fb8  movlt r0,#0x1
03807fbc  movlt r0,r0, lsl r9
03807fc0  movlt r0,r0, lsl #0x10
03807fc4  movlt r0,r0, lsr #0x10
03807fc8  blt 0x03808064
03807fcc  add r0,r10,r9
03807fd0  mov r1,#0x2
03807fd4  bl 0x038078c0
03807fd8  mov r8,r0
03807fdc  mov r7,#0x0
03807fe0  mov r11,#0x2
03807fe4  mov r4,#0x1
03807fe8  b 0x03808014
03807fec  mov r0,r7
03807ff0  mov r1,r11
03807ff4  bl 0x038078c0
03807ff8  mov r0,r1, lsl #0x1
03807ffc  sub r0,r0,#0x1
03808000  mla r8,r7,r0,r8
03808004  mov r0,r4, lsl r8
03808008  ands r0,r6,r0
0380800c  bne 0x0380801c
03808010  add r7,r7,#0x1
03808014  cmp r7,r5
03808018  blt 0x03807fec
0380801c  sub r0,r10,r8
03808020  cmp r0,#0x5
03808024  blt 0x03808034
03808028  sub r0,r8,r9
0380802c  cmp r0,#0x5
03808030  bge 0x0380804c
03808034  mov r0,#0x1
03808038  mov r1,r0, lsl r9
0380803c  orr r0,r1,r0, lsl r10
03808040  mov r0,r0, lsl #0x10
03808044  mov r0,r0, lsr #0x10
03808048  b 0x03808064
0380804c  mov r1,#0x1
03808050  mov r0,r1, lsl r10
03808054  orr r0,r0,r1, lsl r8
03808058  orr r0,r0,r1, lsl r9
0380805c  mov r0,r0, lsl #0x10
03808060  mov r0,r0, lsr #0x10
03808064  add sp,sp,#0x4
03808068  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0380806c  bx lr
