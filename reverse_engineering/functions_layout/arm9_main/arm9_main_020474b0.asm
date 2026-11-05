020474b0  ldrb r3,[r0,#0x90]
020474b4  mov r1,r1, lsl #0x10
020474b8  mov r2,r2, lsl #0x10
020474bc  cmp r3,#0x0
020474c0  mov r1,r1, asr #0x10
020474c4  mov r2,r2, asr #0x10
020474c8  beq 0x02047528
020474cc  ldrsh r3,[r0,#0x88]
020474d0  cmp r3,r1
020474d4  movge r3,r1
020474d8  strh r3,[r0,#0x88]
020474dc  ldrsh r3,[r0,#0x8a]
020474e0  add r1,r1,#0x1
020474e4  mov r1,r1, lsl #0x10
020474e8  cmp r3,r2
020474ec  movge r3,r2
020474f0  strh r3,[r0,#0x8a]
020474f4  ldrsh r3,[r0,#0x8c]
020474f8  cmp r3,r1, asr #0x10
020474fc  mov r1,r1, asr #0x10
02047500  movle r3,r1
02047504  strh r3,[r0,#0x8c]
02047508  add r1,r2,#0x1
0204750c  ldrsh r3,[r0,#0x8e]
02047510  mov r1,r1, lsl #0x10
02047514  cmp r3,r1, asr #0x10
02047518  mov r1,r1, asr #0x10
0204751c  movle r3,r1
02047520  strh r3,[r0,#0x8e]
02047524  bx lr
02047528  strh r1,[r0,#0x88]
0204752c  strh r2,[r0,#0x8a]
02047530  add r1,r1,#0x1
02047534  strh r1,[r0,#0x8c]
02047538  add r1,r2,#0x1
0204753c  strh r1,[r0,#0x8e]
02047540  mov r1,#0x1
02047544  strb r1,[r0,#0x90]
02047548  bx lr
