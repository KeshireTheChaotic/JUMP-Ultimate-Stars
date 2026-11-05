02162a80  stmdb sp!,{r3,lr}
02162a84  mov r2,r2, asr #0xc
02162a88  mov r2,r2, lsl #0x6
02162a8c  add lr,r2,r1, asr #0xc
02162a90  mvn r1,#0x0
02162a94  b 0x02162ac4
02162a98  ldr r12,[r0,#0x14]
02162a9c  mov r2,lr, lsl #0x3
02162aa0  ldrsh r3,[r12,r2]
02162aa4  cmp r3,r1
02162aa8  beq 0x02162ac0
02162aac  add r2,r12,r2
02162ab0  ldrb r2,[r2,#0x3]
02162ab4  cmp r2,#0x0
02162ab8  moveq r0,r3
02162abc  ldmiaeq sp!,{r3,pc}
02162ac0  add lr,lr,#0x40
02162ac4  cmp lr,#0x1000
02162ac8  blt 0x02162a98
02162acc  mvn r0,#0x0
02162ad0  ldmia sp!,{r3,pc}
