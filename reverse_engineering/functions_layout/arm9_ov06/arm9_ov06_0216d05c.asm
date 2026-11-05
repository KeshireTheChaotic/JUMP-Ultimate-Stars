0216d05c  stmdb sp!,{r3,r4,r5,lr}
0216d060  mov r5,r0
0216d064  bl 0x0216d1cc
0216d068  ldrh r2,[r5,#0x20]
0216d06c  ldr r1,[r5,#0x34]
0216d070  mov r4,r0
0216d074  muls r1,r2,r1
0216d078  ldrsh r0,[r5,#0x58]
0216d07c  rsbmi r1,r1,#0x0
0216d080  mov r1,r1, asr #0x8
0216d084  mov r0,r0, lsl #0x8
0216d088  bl 0x0200d12c
0216d08c  add r0,r0,#0x1
0216d090  strh r0,[r5,#0x62]
0216d094  ldr r0,[r5,#0x38]
0216d098  ldrh r1,[r5,#0x62]
0216d09c  mov r0,r0, lsl #0x1
0216d0a0  bl 0x0200d12c
0216d0a4  rsb r0,r0,#0x0
0216d0a8  strh r0,[r5,#0x5c]
0216d0ac  mov r1,#0x0
0216d0b0  strh r1,[r5,#0x5a]
0216d0b4  mov r0,#0x100
0216d0b8  strh r0,[r5,#0x48]
0216d0bc  mov r0,r4
0216d0c0  strh r1,[r5,#0x4a]
0216d0c4  ldmia sp!,{r3,r4,r5,pc}
