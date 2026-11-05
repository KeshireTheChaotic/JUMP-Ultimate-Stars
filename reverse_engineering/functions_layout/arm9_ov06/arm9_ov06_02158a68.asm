02158a68  stmdb sp!,{r4,r5,r6,lr}
02158a6c  mov r5,r0
02158a70  ldrh r6,[r5,#0x88]
02158a74  ldrsh r4,[r5,#0xb8]
02158a78  cmp r6,#0x8
02158a7c  moveq r0,#0x1
02158a80  movne r0,#0x0
02158a84  cmp r0,#0x0
02158a88  beq 0x02158aac
02158a8c  mov r0,#0x19
02158a90  smulbb r0,r4,r0
02158a94  mov r1,#0x64
02158a98  bl 0x0200d12c
02158a9c  mov r0,r0, lsl #0x10
02158aa0  add r0,r4,r0, asr #0x10
02158aa4  mov r0,r0, lsl #0x10
02158aa8  mov r4,r0, asr #0x10
02158aac  cmp r6,#0x24
02158ab0  moveq r0,#0x1
02158ab4  movne r0,#0x0
02158ab8  cmp r0,#0x0
02158abc  beq 0x02158ae0
02158ac0  mov r0,#0x19
02158ac4  smulbb r0,r4,r0
02158ac8  mov r1,#0x64
02158acc  bl 0x0200d12c
02158ad0  mov r0,r0, lsl #0x10
02158ad4  add r0,r4,r0, asr #0x10
02158ad8  mov r0,r0, lsl #0x10
02158adc  mov r4,r0, asr #0x10
02158ae0  ldrh r0,[r5,#0xa0]
02158ae4  cmp r0,#0x16
02158ae8  moveq r0,#0x1
02158aec  movne r0,#0x0
02158af0  cmp r0,#0x0
02158af4  beq 0x02158b18
02158af8  mov r0,#0x46
02158afc  smulbb r0,r4,r0
02158b00  mov r1,#0x64
02158b04  bl 0x0200d12c
02158b08  mov r0,r0, lsl #0x10
02158b0c  sub r0,r4,r0, asr #0x10
02158b10  mov r0,r0, lsl #0x10
02158b14  mov r4,r0, asr #0x10
02158b18  mov r0,r4
02158b1c  ldmia sp!,{r4,r5,r6,pc}
