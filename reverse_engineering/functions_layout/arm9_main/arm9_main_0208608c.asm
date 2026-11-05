0208608c  stmdb sp!,{r3,r4,r5,lr}
02086090  mov r5,r0
02086094  ldr r4,[r5,#0x30]
02086098  bl 0x020856e8
0208609c  cmp r0,#0x0
020860a0  ldmiane sp!,{r3,r4,r5,pc}
020860a4  ldrb r2,[r4,#0x34]
020860a8  ldr r1,[0x20860bc]
020860ac  mov r0,r5
020860b0  ldr r1,[r1,r2,lsl #0x2]
020860b4  blx r1
020860b8  ldmia sp!,{r3,r4,r5,pc}
