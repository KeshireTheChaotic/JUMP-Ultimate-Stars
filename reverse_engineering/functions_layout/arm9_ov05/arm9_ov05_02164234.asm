02164234  stmdb sp!,{r3,lr}
02164238  ldrb r1,[r0,#0x2]
0216423c  cmp r1,#0xb
02164240  addls pc,pc,r1, lsl #0x2
02164244  b 0x021643e4
02164248  b 0x021643dc
0216424c  b 0x02164278
02164250  b 0x02164284
02164254  b 0x02164290
02164258  b 0x021642b4
0216425c  b 0x021642d8
02164260  b 0x02164300
02164264  b 0x02164324
02164268  b 0x0216434c
0216426c  b 0x02164370
02164270  b 0x02164394
02164274  b 0x021643b8
02164278  ldrh r0,[r0,#0x4]
0216427c  bl 0x02164410
02164280  ldmia sp!,{r3,pc}
02164284  ldrh r0,[r0,#0x4]
02164288  bl 0x02164434
0216428c  ldmia sp!,{r3,pc}
02164290  ldrh r3,[r0,#0x4]
02164294  ldr r1,[0x21643ec]
02164298  mov r0,#0x1
0216429c  mov r2,r3, lsr #0x5
021642a0  ldr r1,[r1,r2,lsl #0x2]
021642a4  and r2,r3,#0x1f
021642a8  tst r1,r0, lsl r2
021642ac  moveq r0,#0x0
021642b0  ldmia sp!,{r3,pc}
021642b4  ldrh r3,[r0,#0x4]
021642b8  ldr r1,[0x21643f0]
021642bc  mov r0,#0x1
021642c0  mov r2,r3, lsr #0x5
021642c4  ldr r1,[r1,r2,lsl #0x2]
021642c8  and r2,r3,#0x1f
021642cc  tst r1,r0, lsl r2
021642d0  moveq r0,#0x0
021642d4  ldmia sp!,{r3,pc}
021642d8  ldrh r2,[r0,#0x4]
021642dc  ldr r1,[0x21643f4]
021642e0  mov r0,#0x1
021642e4  add r3,r2,#0x1
021642e8  mov r2,r3, lsr #0x5
021642ec  ldr r1,[r1,r2,lsl #0x2]
021642f0  and r2,r3,#0x1f
021642f4  tst r1,r0, lsl r2
021642f8  moveq r0,#0x0
021642fc  ldmia sp!,{r3,pc}
02164300  ldrh r3,[r0,#0x4]
02164304  ldr r1,[0x21643f8]
02164308  mov r0,#0x1
0216430c  mov r2,r3, lsr #0x5
02164310  ldr r1,[r1,r2,lsl #0x2]
02164314  and r2,r3,#0x1f
02164318  tst r1,r0, lsl r2
0216431c  moveq r0,#0x0
02164320  ldmia sp!,{r3,pc}
02164324  ldrh r2,[r0,#0x4]
02164328  ldr r1,[0x21643fc]
0216432c  mov r0,#0x1
02164330  add r3,r2,#0x1
02164334  mov r2,r3, lsr #0x5
02164338  ldr r1,[r1,r2,lsl #0x2]
0216433c  and r2,r3,#0x1f
02164340  tst r1,r0, lsl r2
02164344  moveq r0,#0x0
02164348  ldmia sp!,{r3,pc}
0216434c  ldrh r3,[r0,#0x4]
02164350  ldr r1,[0x2164400]
02164354  mov r0,#0x1
02164358  mov r2,r3, lsr #0x5
0216435c  ldr r1,[r1,r2,lsl #0x2]
02164360  and r2,r3,#0x1f
02164364  tst r1,r0, lsl r2
02164368  moveq r0,#0x0
0216436c  ldmia sp!,{r3,pc}
02164370  ldrh r3,[r0,#0x4]
02164374  ldr r1,[0x2164404]
02164378  mov r0,#0x1
0216437c  mov r2,r3, lsr #0x5
02164380  ldr r1,[r1,r2,lsl #0x2]
02164384  and r2,r3,#0x1f
02164388  tst r1,r0, lsl r2
0216438c  moveq r0,#0x0
02164390  ldmia sp!,{r3,pc}
02164394  ldrh r3,[r0,#0x4]
02164398  ldr r1,[0x2164408]
0216439c  mov r0,#0x1
021643a0  mov r2,r3, lsr #0x5
021643b8  ldrh r3,[r0,#0x4]
021643bc  ldr r1,[0x216440c]
021643c0  mov r0,#0x1
021643c4  mov r2,r3, lsr #0x5
021643c8  ldr r1,[r1,r2,lsl #0x2]
021643cc  and r2,r3,#0x1f
021643d0  tst r1,r0, lsl r2
021643d4  moveq r0,#0x0
021643d8  ldmia sp!,{r3,pc}
021643dc  mov r0,#0x0
021643e0  ldmia sp!,{r3,pc}
021643e4  mov r0,#0x0
021643e8  ldmia sp!,{r3,pc}
