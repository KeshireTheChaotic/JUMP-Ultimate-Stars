02044b84  stmdb sp!,{r3,r4,r5,lr}
02044b88  mov r5,r0
02044b8c  ldrb r2,[r5,#0x28]
02044b90  mov r4,r1
02044b94  mov r1,r2, lsl #0x1d
02044b98  mov r1,r1, lsr #0x1f
02044b9c  cmp r1,r4
02044ba0  cmpne r4,#0x0
02044ba4  ldmiaeq sp!,{r3,r4,r5,pc}
02044ba8  ldr r1,[r5,#0x20]
02044bac  cmp r1,#0x0
02044bb0  beq 0x02044c18
02044bb4  ldr r2,[r0,#0x0]
02044bb8  mov r1,#0x0
02044bbc  ldr r2,[r2,#0x34]
02044bc0  blx r2
02044bc4  ldr r0,[r5,#0x20]
02044bc8  ldr r1,[r0,#0x0]
02044bcc  ldr r1,[r1,#0x64]
02044bd0  blx r1
02044bd4  str r0,[r5,#0x30]
02044bd8  ldr r1,[r0,#0x0]
02044bdc  ldr r1,[r1,#0x8]
02044be0  blx r1
02044be4  ldr r0,[r5,#0x30]
02044be8  bl 0x02029e88
02044bec  ldr r0,[r5,#0x20]
02044bf0  ldr r1,[r0,#0x0]
02044bf4  ldr r1,[r1,#0xc]
02044bf8  blx r1
02044bfc  mov r0,#0x0
02044c00  str r0,[r5,#0x20]
02044c04  sub r1,r0,#0x1
02044c08  ldr r0,[0x2044c30]
02044c0c  str r1,[r5,#0x64]
02044c10  ldr r0,[r0,#0x2ec]
02044c14  bl 0x0203efb8
02044c18  ldrb r1,[r5,#0x28]
02044c1c  mov r0,r4, lsl #0x1f
02044c20  bic r1,r1,#0x4
02044c24  orr r0,r1,r0, lsr #0x1d
02044c28  strb r0,[r5,#0x28]
02044c2c  ldmia sp!,{r3,r4,r5,pc}
