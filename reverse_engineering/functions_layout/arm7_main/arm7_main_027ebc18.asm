027ebc18  stmdb sp!,{r4,r5,r6,lr}
027ebc1c  mov r6,r0
027ebc20  mov r5,r1
027ebc24  ldr r0,[0x27ebce4]
027ebc28  ldr r2,[r0,#0x0]
027ebc2c  ldr r1,[r2,#0x31c]
027ebc30  mov r0,#0x1c
027ebc34  mul r0,r6,r0
027ebc38  add r4,r1,r0
027ebc3c  ldrh r0,[r1,r0]
027ebc40  cmp r0,#0x0
027ebc44  addeq r0,r2,#0x500
027ebc48  ldrheq r1,[r0,#0x2c]
027ebc4c  addeq r1,r1,#0x1
027ebc50  strheq r1,[r0,#0x2c]
027ebc54  mov r0,#0x0
027ebc58  mov r1,r4
027ebc5c  mov r2,#0x1a
027ebc60  bl 0x037fe648
027ebc64  ldr r0,[0x27ebce4]
027ebc68  ldr r0,[r0,#0x0]
027ebc6c  add r0,r0,#0x500
027ebc70  ldrh r2,[r0,#0x34]
027ebc74  mov r1,#0x1
027ebc78  mvn r1,r1, lsl r6
027ebc7c  and r1,r2,r1
027ebc80  strh r1,[r0,#0x34]
027ebc84  mov r0,r6, lsl #0x10
027ebc88  mov r0,r0, lsr #0x10
027ebc8c  mov r1,#0x0
027ebc90  bl 0x027ec4e4
027ebc94  mov r0,r6
027ebc98  bl 0x027ec480
027ebc9c  add r0,r4,#0x4
027ebca0  mov r1,r5
027ebca4  bl 0x027ea0c8
027ebca8  ldr r0,[0x27ebce8]
027ebcac  strh r0,[r4,#0x14]
027ebcb0  ldr r0,[0x27ebce4]
027ebcb4  ldr r0,[r0,#0x0]
027ebcb8  add r0,r0,#0x300
027ebcbc  ldrh r0,[r0,#0xa6]
027ebcc0  strh r0,[r4,#0x10]
027ebcc4  ldrh r0,[r4,#0x1a]
027ebcc8  strh r0,[r4,#0x18]
027ebccc  mov r0,r6, lsl #0x10
027ebcd0  mov r0,r0, lsr #0x10
027ebcd4  mov r1,#0x20
027ebcd8  bl 0x027ec560
027ebcdc  ldmia sp!,{r4,r5,r6,lr}
027ebce0  bx lr
