0204f944  stmdb sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0204f948  sub sp,sp,#0x4
0204f94c  add r3,r0,#0x18
0204f950  ldr r5,[r0,#0x0]
0204f954  ldr r4,[r0,#0x4]
0204f958  ldr lr,[r0,#0x8]
0204f95c  ldr r12,[r0,#0xc]
0204f960  ldr r2,[0x204fd24]
0204f964  mov r8,r3
0204f968  mov r7,#0x0
0204f96c  mvn r1,r4
0204f970  and r6,r4,lr
0204f974  and r1,r1,r12
0204f978  orr r1,r6,r1
0204f97c  ldr r6,[r8,#0x0]
0204f980  add r1,r5,r1
0204f984  ldr r5,[r2,#0x0]
0204f988  add r1,r6,r1
0204f98c  add r5,r5,r1
0204f990  mov r1,r5, lsl #0x7
0204f994  orr r1,r1,r5, lsr #0x19
0204f998  add r5,r4,r1
0204f99c  mvn r1,r5
0204f9a0  and r6,r5,r4
0204f9a4  and r1,r1,lr
0204f9a8  orr r1,r6,r1
0204f9ac  ldr r6,[r8,#0x4]
0204f9b0  add r1,r12,r1
0204f9b4  ldr r9,[r2,#0x4]
0204f9b8  add r1,r6,r1
0204f9bc  add r6,r9,r1
0204f9c0  mov r1,r6, lsl #0xc
0204f9c4  orr r1,r1,r6, lsr #0x14
0204f9c8  add r12,r5,r1
0204f9cc  mvn r1,r12
0204f9d0  and r6,r12,r5
0204f9d4  and r1,r1,r4
0204f9d8  orr r6,r6,r1
0204f9dc  add r1,r8,#0xc
0204f9e0  ldr r9,[r8,#0x8]
0204f9e4  add r6,lr,r6
0204f9e8  add r6,r9,r6
0204f9ec  ldr r9,[r2,#0x8]
0204f9f0  ldr r1,[r1,#0x0]
0204f9f4  add r10,r9,r6
0204f9f8  add r6,r2,#0xc
0204f9fc  ldr r6,[r6,#0x0]
0204fa00  mov r9,r10, lsl #0x11
0204fa04  orr r9,r9,r10, lsr #0xf
0204fa08  add lr,r12,r9
0204fa0c  add r2,r2,#0x10
0204fa10  add r8,r8,#0x10
0204fa14  and r10,lr,r12
0204fa18  mvn r9,lr
0204fa1c  and r9,r9,r5
0204fa20  orr r9,r10,r9
0204fa24  add r4,r4,r9
0204fa28  add r1,r1,r4
0204fa2c  add r4,r6,r1
0204fa30  mov r1,r4, lsl #0x16
0204fa34  orr r1,r1,r4, lsr #0xa
0204fa38  add r4,lr,r1
0204fa3c  add r7,r7,#0x1
0204fa40  cmp r7,#0x4
0204fa44  blt 0x0204f96c
0204fa48  ldr r6,[0x204fd28]
0204fa4c  mov r1,#0x0
0204fa50  mvn r7,r12
0204fa54  ldr r9,[r6,#0x0]
0204fa58  and r8,r4,r12
0204fa5c  and r7,lr,r7
0204fa60  orr r7,r8,r7
0204fa64  ldr r8,[r3,r9,lsl #0x2]
0204fa68  add r5,r5,r7
0204fa6c  ldr r7,[r2,#0x0]
0204fa70  add r5,r8,r5
0204fa74  add r7,r7,r5
0204fa78  mov r5,r7, lsl #0x5
0204fa7c  orr r5,r5,r7, lsr #0x1b
0204fa80  add r5,r4,r5
0204fa84  mvn r8,lr
0204fa88  ldr r7,[r6,#0x4]
0204fa8c  and r9,r5,lr
0204fa90  and r8,r4,r8
0204fa94  orr r10,r9,r8
0204fa98  mvn r8,r4
0204fa9c  ldr r9,[r6,#0x8]
0204faa0  ldr r11,[r3,r7,lsl #0x2]
0204faa4  add r7,r12,r10
0204faa8  add r10,r11,r7
0204faac  add r7,r6,#0xc
0204fab0  ldr r9,[r3,r9,lsl #0x2]
0204fab4  and r8,r5,r8
0204fab8  ldr r7,[r7,#0x0]
0204fabc  ldr r11,[r2,#0x4]
0204fac0  ldr r7,[r3,r7,lsl #0x2]
0204fac4  add r11,r11,r10
0204fac8  mov r10,r11, lsl #0x9
0204facc  orr r10,r10,r11, lsr #0x17
0204fad0  add r12,r5,r10
0204fad4  ldr r10,[r2,#0x8]
0204fad8  and r11,r12,r4
0204fadc  orr r8,r11,r8
0204fae0  add r8,lr,r8
0204fae4  add r8,r9,r8
0204fae8  add r10,r10,r8
0204faec  add r8,r2,#0xc
0204faf0  ldr r8,[r8,#0x0]
0204faf4  mov r9,r10, lsl #0xe
0204faf8  orr r9,r9,r10, lsr #0x12
0204fafc  add lr,r12,r9
0204fb00  add r2,r2,#0x10
0204fb04  add r6,r6,#0x10
0204fb08  and r10,lr,r5
0204fb0c  mvn r9,r5
0204fb10  and r9,r12,r9
0204fb14  orr r9,r10,r9
0204fb18  add r4,r4,r9
0204fb1c  add r4,r7,r4
0204fb20  add r7,r8,r4
0204fb24  mov r4,r7, lsl #0x14
0204fb28  orr r4,r4,r7, lsr #0xc
0204fb2c  add r4,lr,r4
0204fb30  add r1,r1,#0x1
0204fb34  cmp r1,#0x4
0204fb38  blt 0x0204fa50
0204fb3c  mov r7,#0x0
0204fb40  ldr r8,[r6,#0x0]
0204fb44  eor r1,r4,lr
0204fb48  eor r1,r12,r1
0204fb4c  add r1,r5,r1
0204fb50  ldr r8,[r3,r8,lsl #0x2]
0204fb54  ldr r5,[r2,#0x0]
0204fb58  add r1,r8,r1
0204fb5c  add r5,r5,r1
0204fb60  mov r1,r5, lsl #0x4
0204fb64  orr r1,r1,r5, lsr #0x1c
0204fb68  add r5,r4,r1
0204fb6c  ldr r8,[r6,#0x4]
0204fb70  eor r1,r5,r4
0204fb74  eor r1,lr,r1
0204fb78  ldr r8,[r3,r8,lsl #0x2]
0204fb7c  add r1,r12,r1
0204fb80  ldr r9,[r6,#0x8]
0204fb84  ldr r10,[r2,#0x4]
0204fb88  add r1,r8,r1
0204fb8c  add r8,r10,r1
0204fb90  mov r1,r8, lsl #0xb
0204fb94  orr r1,r1,r8, lsr #0x15
0204fb98  add r12,r5,r1
0204fb9c  eor r8,r12,r5
0204fba0  eor r8,r4,r8
0204fba4  ldr r9,[r3,r9,lsl #0x2]
0204fba8  add r8,lr,r8
0204fbac  add r9,r9,r8
0204fbb0  ldr r10,[r2,#0x8]
0204fbb4  add r1,r2,#0xc
0204fbb8  ldr r8,[r6,#0xc]
0204fbbc  add r10,r10,r9
0204fbc0  ldr r9,[r3,r8,lsl #0x2]
0204fbc4  mov r8,r10, lsl #0x10
0204fbc8  orr r8,r8,r10, lsr #0x10
0204fbcc  add lr,r12,r8
0204fbd0  eor r8,lr,r12
0204fbd4  eor r8,r5,r8
0204fbd8  add r4,r4,r8
0204fbdc  add r7,r7,#0x1
0204fbe0  ldr r1,[r1,#0x0]
0204fbe4  add r4,r9,r4
0204fbe8  add r4,r1,r4
0204fbec  mov r1,r4, lsl #0x17
0204fbf0  orr r1,r1,r4, lsr #0x9
0204fbf4  add r2,r2,#0x10
0204fbf8  add r6,r6,#0x10
0204fbfc  add r4,lr,r1
0204fc00  cmp r7,#0x4
0204fc04  blt 0x0204fb40
0204fc08  mov r10,#0x0
0204fc0c  mvn r1,r12
0204fc10  ldr r7,[r6,#0x0]
0204fc14  orr r1,r4,r1
0204fc18  eor r1,lr,r1
0204fc1c  ldr r7,[r3,r7,lsl #0x2]
0204fc20  add r1,r5,r1
0204fc24  ldr r5,[r2,#0x0]
0204fc28  add r1,r7,r1
0204fc2c  add r5,r5,r1
0204fc30  mov r1,r5, lsl #0x6
0204fc34  orr r1,r1,r5, lsr #0x1a
0204fc38  add r5,r4,r1
0204fc3c  mvn r1,lr
0204fc40  ldr r7,[r6,#0x4]
0204fc44  orr r1,r5,r1
0204fc48  eor r1,r4,r1
0204fc4c  ldr r8,[r6,#0x8]
0204fc50  ldr r7,[r3,r7,lsl #0x2]
0204fc54  add r1,r12,r1
0204fc58  ldr r9,[r2,#0x4]
0204fc5c  add r1,r7,r1
0204fc60  add r9,r9,r1
0204fc64  mov r7,r9, lsl #0xa
0204fc68  add r1,r6,#0xc
0204fc6c  orr r9,r7,r9, lsr #0x16
0204fc70  ldr r1,[r1,#0x0]
0204fc74  add r7,r2,#0xc
0204fc78  add r12,r5,r9
0204fc7c  ldr r8,[r3,r8,lsl #0x2]
0204fc80  ldr r7,[r7,#0x0]
0204fc84  ldr r1,[r3,r1,lsl #0x2]
0204fc88  ldr r9,[r2,#0x8]
0204fc8c  mvn r11,r4
0204fc90  orr r11,r12,r11
0204fc94  eor r11,r5,r11
0204fc98  add r11,lr,r11
0204fc9c  add r8,r8,r11
0204fca0  add r9,r9,r8
0204fca4  mov r8,r9, lsl #0xf
0204fca8  orr r8,r8,r9, lsr #0x11
0204fcac  add lr,r12,r8
0204fcb0  add r2,r2,#0x10
0204fcb4  add r6,r6,#0x10
0204fcb8  mvn r8,r5
0204fcbc  orr r8,lr,r8
0204fcc0  eor r8,r12,r8
0204fcc4  add r4,r4,r8
0204fcc8  add r1,r1,r4
0204fccc  add r4,r7,r1
0204fcd0  mov r1,r4, lsl #0x15
0204fcd4  orr r1,r1,r4, lsr #0xb
0204fcd8  add r4,lr,r1
0204fcdc  add r10,r10,#0x1
0204fce0  cmp r10,#0x4
0204fce4  blt 0x0204fc0c
0204fce8  ldr r1,[r0,#0x0]
0204fcec  add r1,r1,r5
0204fcf0  str r1,[r0,#0x0]
0204fcf4  ldr r1,[r0,#0x4]
0204fcf8  add r1,r1,r4
0204fcfc  str r1,[r0,#0x4]
0204fd00  ldr r1,[r0,#0x8]
0204fd04  add r1,r1,lr
0204fd08  str r1,[r0,#0x8]
0204fd0c  ldr r1,[r0,#0xc]
0204fd10  add r1,r1,r12
0204fd14  str r1,[r0,#0xc]
0204fd18  add sp,sp,#0x4
0204fd1c  ldmia sp!,{r4,r5,r6,r7,r8,r9,r10,r11,lr}
0204fd20  bx lr
