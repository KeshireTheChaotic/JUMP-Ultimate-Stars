0200bc6c  stmdb sp!,{r4,lr}
0200bc70  eors r12,r1,r3
0200bc74  eormi r3,r3,#0x80000000
0200bc78  bmi 0x0200b3b0
0200bc7c  subs r12,r0,r2
0200bc80  sbcs lr,r1,r3
0200bc84  bcs 0x0200bc9c
0200bc88  eor lr,lr,#0x80000000
0200bc8c  adds r2,r2,r12
0200bc90  adc r3,r3,lr
0200bc94  subs r0,r0,r12
0200bc98  sbc r1,r1,lr
0200bc9c  mov lr,#0x80000000
0200bca0  mov r12,r1, lsr #0x14
0200bca4  orr r1,lr,r1, lsl #0xb
0200bca8  orr r1,r1,r0, lsr #0x15
0200bcac  mov r0,r0, lsl #0xb
0200bcb0  movs r4,r12, lsl #0x15
0200bcb4  cmnne r4,#0x200000
0200bcb8  beq 0x0200be78
0200bcbc  mov r4,r3, lsr #0x14
0200bcc0  orr r3,lr,r3, lsl #0xb
0200bcc4  orr r3,r3,r2, lsr #0x15
0200bcc8  mov r2,r2, lsl #0xb
0200bccc  movs lr,r4, lsl #0x15
0200bcd0  beq 0x0200bf18
0200bcd4  subs r4,r12,r4
0200bcd8  beq 0x0200bd7c
0200bcdc  cmp r4,#0x20
0200bce0  ble 0x0200bd10
0200bce4  cmp r4,#0x38
0200bce8  movge r4,#0x3f
0200bcec  sub r4,r4,#0x20
0200bcf0  rsb lr,r4,#0x20
0200bcf4  orrs lr,r2,r3, lsl lr
0200bcf8  mov r2,r3, lsr r4
0200bcfc  orrne r2,r2,#0x1
0200bd00  subs r0,r0,r2
0200bd04  sbcs r1,r1,#0x0
0200bd08  bmi 0x0200bd38
0200bd0c  b 0x0200be1c
0200bd10  rsb lr,r4,#0x20
0200bd14  movs lr,r2, lsl lr
0200bd18  rsb lr,r4,#0x20
0200bd1c  mov r2,r2, lsr r4
0200bd20  orr r2,r2,r3, lsl lr
0200bd24  mov r3,r3, lsr r4
0200bd28  orrne r2,r2,#0x1
0200bd2c  subs r0,r0,r2
0200bd30  sbcs r1,r1,r3
0200bd34  bpl 0x0200be1c
0200bd38  movs r2,r0, lsl #0x15
0200bd3c  mov r0,r0, lsr #0xb
0200bd40  orr r0,r0,r1, lsl #0x15
0200bd44  add r1,r1,r1
0200bd48  mov r1,r1, lsr #0xc
0200bd4c  orr r1,r1,r12, lsl #0x14
0200bd50  tst r2,#0x80000000
0200bd54  ldmiaeq sp!,{r4,lr}
0200bd58  bxeq lr
0200bd5c  movs r2,r2, lsl #0x1
0200bd60  andeqs r2,r0,#0x1
0200bd64  ldmiaeq sp!,{r4,lr}
0200bd68  bxeq lr
0200bd6c  adds r0,r0,#0x1
0200bd70  adc r1,r1,#0x0
0200bd74  ldmia sp!,{r4,lr}
0200bd78  bx lr
0200bd7c  subs r0,r0,r2
0200bd80  sbc r1,r1,r3
0200bd84  orrs lr,r1,r0
0200bd88  beq 0x0200bfa0
0200bd8c  mov lr,r12, lsl #0x14
0200bd90  and lr,lr,#0x80000000
0200bd94  bic r12,r12,#0x800
0200bd98  cmp r1,#0x0
0200bd9c  bmi 0x0200bde8
0200bda0  bne 0x0200bdb4
0200bda4  sub r12,r12,#0x20
0200bda8  movs r1,r0
0200bdac  mov r0,#0x0
0200bdb0  bmi 0x0200bdd0
0200bdb4  clz r4,r1
0200bdb8  movs r1,r1, lsl r4
0200bdbc  rsb r4,r4,#0x20
0200bdc0  orr r1,r1,r0, lsr r4
0200bdc4  rsb r4,r4,#0x20
0200bdc8  mov r0,r0, lsl r4
0200bdcc  sub r12,r12,r4
0200bdd0  cmp r12,#0x0
0200bdd4  bgt 0x0200be00
0200bdd8  mov r1,#0x0
0200bddc  mov r0,#0x0
0200bde0  ldmia sp!,{r4,lr}
0200bde4  bx lr
0200bde8  cmp r1,#0x0
0200bdec  subges r12,r12,#0x1
0200bdf0  moveq r1,#0x0
0200bdf4  moveq r0,#0x0
0200bdf8  ldmiaeq sp!,{r4,lr}
0200bdfc  bxeq lr
0200be00  mov r0,r0, lsr #0xb
0200be04  orr r0,r0,r1, lsl #0x15
0200be08  add r1,r1,r1
0200be0c  orr r1,lr,r1, lsr #0xc
0200be10  orr r1,r1,r12, lsl #0x14
0200be14  ldmia sp!,{r4,lr}
0200be18  bx lr
0200be1c  mov lr,r12, lsl #0x14
0200be20  and lr,lr,#0x80000000
0200be24  bic r12,r12,#0x800
0200be28  cmp r1,#0x0
0200be2c  bne 0x0200be40
0200be30  sub r12,r12,#0x20
0200be34  movs r1,r0
0200be38  mov r0,#0x0
0200be3c  bmi 0x0200be5c
0200be40  clz r4,r1
0200be44  movs r1,r1, lsl r4
0200be48  rsb r4,r4,#0x20
0200be4c  orr r1,r1,r0, lsr r4
0200be50  rsb r4,r4,#0x20
0200be54  mov r0,r0, lsl r4
0200be58  sub r12,r12,r4
0200be5c  cmp r12,#0x0
0200be60  orrgt r12,r12,lr, lsr #0x14
0200be64  bgt 0x0200bd38
0200be68  mov r1,#0x0
0200be6c  mov r0,#0x0
0200be70  ldmia sp!,{r4,lr}
0200be74  bx lr
0200be78  cmp r12,#0x800
0200be7c  movge lr,#0x80000000
0200be80  movlt lr,#0x0
0200be84  bics r12,r12,#0x800
0200be88  beq 0x0200bef8
0200be8c  orrs r4,r0,r1, lsl #0x1
0200be90  bne 0x0200bf7c
0200be94  mov r4,r3, lsr #0x14
0200be98  mov r3,r3, lsl #0xb
0200be9c  orr r3,r3,r2, lsr #0x15
0200bea0  mov r2,r2, lsl #0xb
0200bea4  movs r4,r4, lsl #0x15
0200bea8  beq 0x0200bf68
0200beac  cmn r4,#0x200000
0200beb0  bne 0x0200bf68
0200beb4  orrs r4,r2,r3, lsl #0x1
0200beb8  beq 0x0200bf90
0200bebc  b 0x0200bf7c
0200bef8  mov r12,r3, lsr #0x14
0200befc  bics r12,r12,#0x800
0200bf00  moveq r3,#0x0
0200bf04  moveq r2,#0x0
0200bf08  mov r1,r3
0200bf0c  mov r0,r2
0200bf10  ldmia sp!,{r4,lr}
0200bf14  bx lr
0200bf18  mov r0,r0, lsr #0xb
0200bf1c  orr r0,r0,r1, lsl #0x15
0200bf20  add r1,r1,r1
0200bf24  orr r1,lr,r1, lsr #0xc
0200bf28  orr r1,r1,r12, lsl #0x14
0200bf2c  ldmia sp!,{r4,lr}
0200bf30  bx lr
0200bf68  ldr r1,[0x200bfb0]
0200bf6c  orr r1,lr,r1
0200bf70  mov r0,#0x0
0200bf74  ldmia sp!,{r4,lr}
0200bf78  bx lr
0200bf7c  mov r1,r3
0200bf80  mvn r0,#0x0
0200bf84  bic r1,r0,#0x80000000
0200bf88  ldmia sp!,{r4,lr}
0200bf8c  bx lr
0200bf90  mvn r0,#0x0
0200bf94  bic r1,r0,#0x80000000
0200bf98  ldmia sp!,{r4,lr}
0200bf9c  bx lr
0200bfa0  mov r1,#0x0
0200bfa4  mov r0,#0x0
0200bfa8  ldmia sp!,{r4,lr}
0200bfac  bx lr
