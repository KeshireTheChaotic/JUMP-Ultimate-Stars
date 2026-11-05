021a11c0  stmdb sp!,{r3,r4,r5,r6,r7,lr}
021a11c4  sub sp,sp,#0x8
021a11c8  mov r2,#0x1
021a11cc  mov r7,r0
021a11d0  strb r2,[r7,#0x3]
021a11d4  ldr r1,[r7,#0xafc]
021a11d8  rsb r0,r2,#0x8000
021a11dc  add r1,r1,#0x1
021a11e0  and r0,r1,r0
021a11e4  str r0,[r7,#0xafc]
021a11e8  ldrsb r0,[r7,#0x2]
021a11ec  cmp r0,#0x0
021a11f0  bne 0x021a12cc
021a11f4  ldr r0,[r7,#0x3c]
021a11f8  ldr r1,[r7,#0x14]
021a11fc  bl 0x021a1bf8
021a1200  cmp r0,#0x0
021a1204  bne 0x021a12cc
021a1208  ldr r2,[r7,#0x14]
021a120c  ldr r1,[0x21a12dc]
021a1210  mov r0,#0x0
021a1214  and r1,r2,r1
021a1218  strh r1,[sp,#0x0]
021a121c  bl 0x02028920
021a1220  mov r4,r0
021a1224  mov r0,#0x0
021a1228  bl 0x020208ec
021a122c  ldr r0,[r0,#0x4]
021a1230  ldr r1,[r0,#0x50]
021a1234  ldr r3,[r0,#0x0]
021a1238  ldr r5,[r1,#0x10]
021a123c  ldr r6,[r1,#0xc]
021a1240  mov r2,r5, asr #0xb
021a1244  mov r1,r6, asr #0xb
021a1248  ldr r3,[r3,#0x128]
021a124c  add r1,r6,r1, lsr #0x14
021a1250  add r2,r5,r2, lsr #0x14
021a1254  mov r5,r1, asr #0xc
021a1258  mov r6,r2, asr #0xc
021a125c  blx r3
021a1260  ldr r1,[r4,#0x0]
021a1264  mov r2,r0, lsl #0xc
021a1268  ldr r0,[r1,#0x70]
021a126c  mov r3,r5, lsl #0x18
021a1270  add r0,r1,r0, lsl #0x2
021a1274  ldr r0,[r0,#0x18]
021a1278  add r1,sp,#0x0
021a127c  mov r0,r0, lsl #0x10
021a1280  orr r0,r2,r0, lsr #0x10
021a1284  orr r0,r0,r3, lsr #0x8
021a1288  orr r0,r0,r6, lsl #0x18
021a128c  str r0,[sp,#0x4]
021a1290  ldr r0,[r7,#0x3c]
021a1294  bl 0x021a1b3c
021a1298  ldr r1,[sp,#0x4]
021a129c  mov r0,#0x0
021a12a0  str r1,[r7,#0xb04]
021a12a4  strb r0,[r7,#0x3]
021a12a8  ldr r2,[r7,#0x14]
021a12ac  ldr r0,[0x21a12dc]
021a12b0  add r1,sp,#0x0
021a12b4  and r0,r2,r0
021a12b8  strh r0,[sp,#0x0]
021a12bc  ldr r2,[r7,#0xafc]
021a12c0  add r0,r7,#0x8f0
021a12c4  str r2,[sp,#0x4]
021a12c8  bl 0x021a1b3c
021a12cc  mov r0,r7
021a12d0  bl 0x021a0c08
021a12d4  add sp,sp,#0x8
021a12d8  ldmia sp!,{r3,r4,r5,r6,r7,pc}
