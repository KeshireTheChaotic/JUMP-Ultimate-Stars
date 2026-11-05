0215cf58  stmdb sp!,{r4,r5,r6,lr}
0215cf5c  mov r4,r1
0215cf60  mov r5,r0
0215cf64  cmp r4,#0x3
0215cf68  addls pc,pc,r4, lsl #0x2
0215cf6c  b 0x0215d018
0215cf70  b 0x0215cf80
0215cf74  b 0x0215cf80
0215cf78  b 0x0215cfcc
0215cf7c  b 0x0215cfcc
0215cf80  add r0,r5,r4, lsl #0x3
0215cf84  ldr r0,[r0,#0x8c]
0215cf88  cmp r0,#0x0
0215cf8c  beq 0x0215cfa4
0215cf90  ldr r0,[r0,#0x4]
0215cf94  mov r1,#0x1
0215cf98  ldr r2,[r0,#0x0]
0215cf9c  ldr r2,[r2,#0xd8]
0215cfa0  blx r2
0215cfa4  add r0,r5,r4, lsl #0x3
0215cfa8  ldr r0,[r0,#0x90]
0215cfac  cmp r0,#0x0
0215cfb0  beq 0x0215d018
0215cfb4  ldr r0,[r0,#0x4]
0215cfb8  mov r1,#0x1
0215cfbc  ldr r2,[r0,#0x0]
0215cfc0  ldr r2,[r2,#0xd8]
0215cfc4  blx r2
0215cfc8  b 0x0215d018
0215cfcc  sub r6,r4,#0x2
0215cfd0  add r0,r5,r6, lsl #0x3
0215cfd4  ldr r0,[r0,#0x9c]
0215cfd8  cmp r0,#0x0
0215cfdc  beq 0x0215cff4
0215cfe0  ldr r0,[r0,#0x4]
0215cfe4  mov r1,#0x1
0215cfe8  ldr r2,[r0,#0x0]
0215cfec  ldr r2,[r2,#0xd8]
0215cff0  blx r2
0215cff4  add r0,r5,r6, lsl #0x3
0215cff8  ldr r0,[r0,#0xa0]
0215cffc  cmp r0,#0x0
0215d000  beq 0x0215d018
0215d004  ldr r0,[r0,#0x4]
0215d008  mov r1,#0x1
0215d00c  ldr r2,[r0,#0x0]
0215d010  ldr r2,[r2,#0xd8]
0215d014  blx r2
0215d018  add r0,r5,r4, lsl #0x2
0215d01c  ldr r0,[r0,#0x28]
0215d020  mov r1,#0x1
0215d024  ldr r0,[r0,#0x4]
0215d028  ldr r2,[r0,#0x0]
0215d02c  ldr r2,[r2,#0xd8]
0215d030  blx r2
0215d034  ldmia sp!,{r4,r5,r6,pc}
