0201bbb0  stmdb sp!,{r4,r5,r6,lr}
0201bbb4  mov r6,r0
0201bbb8  mov r5,r1
0201bbbc  mov r4,r2
0201bbc0  bl 0x020134b0
0201bbc4  ldr r0,[0x201bcf4]
0201bbc8  cmp r4,#0x0
0201bbcc  str r0,[r6,#0x0]
0201bbd0  ldrh r0,[r5,#0x2a]
0201bbd4  strh r0,[r6,#0x2a]
0201bbd8  ldrh r0,[r5,#0x2c]
0201bbdc  strh r0,[r6,#0x2c]
0201bbe0  ldrh r0,[r5,#0x2e]
0201bbe4  strh r0,[r6,#0x2e]
0201bbe8  ldrh r0,[r5,#0x30]
0201bbec  strh r0,[r6,#0x30]
0201bbf0  ldrb r0,[r6,#0x32]
0201bbf4  bic r1,r0,#0x1
0201bbf8  strb r1,[r6,#0x32]
0201bbfc  ldrb r0,[r5,#0x32]
0201bc00  and r1,r1,#0xff
0201bc04  bic r1,r1,#0x2
0201bc08  mov r0,r0, lsl #0x1e
0201bc0c  mov r0,r0, lsr #0x1f
0201bc10  mov r0,r0, lsl #0x1f
0201bc14  orr r1,r1,r0, lsr #0x1e
0201bc18  strb r1,[r6,#0x32]
0201bc1c  ldrb r0,[r5,#0x32]
0201bc20  and r1,r1,#0xff
0201bc24  bic r1,r1,#0x4
0201bc28  mov r0,r0, lsl #0x1d
0201bc2c  mov r0,r0, lsr #0x1f
0201bc30  mov r0,r0, lsl #0x1f
0201bc34  orr r2,r1,r0, lsr #0x1d
0201bc38  and r0,r2,#0xff
0201bc3c  orr r1,r0,#0x8
0201bc40  strb r1,[r6,#0x32]
0201bc44  ldrb r0,[r5,#0x32]
0201bc48  bic r1,r1,#0x10
0201bc4c  mov r0,r0, lsl #0x1b
0201bc50  mov r0,r0, lsr #0x1f
0201bc54  mov r0,r0, lsl #0x1f
0201bc58  orr r0,r1,r0, lsr #0x1b
0201bc5c  strb r0,[r6,#0x32]
0201bc60  ldr r0,[r5,#0x34]
0201bc64  str r0,[r6,#0x34]
0201bc68  ldr r0,[r5,#0x38]
0201bc6c  str r0,[r6,#0x38]
0201bc70  ldr r0,[r5,#0x3c]
0201bc74  str r0,[r6,#0x3c]
0201bc78  ldr r0,[r5,#0x44]
0201bc7c  str r0,[r6,#0x44]
0201bc80  beq 0x0201bcb8
0201bc84  add r0,r4,#0x1c
0201bc88  add r1,r6,#0x20
0201bc8c  bl 0x02037ed8
0201bc90  mov r0,r6
0201bc94  ldr r2,[r0,#0x0]
0201bc98  mov r1,r4
0201bc9c  ldr r2,[r2,#0x64]
0201bca0  blx r2
0201bca4  mov r0,r4
0201bca8  ldr r2,[r0,#0x0]
0201bcac  mov r1,r6
0201bcb0  ldr r2,[r2,#0x80]
0201bcb4  blx r2
0201bcb8  mov r0,r5
0201bcbc  ldr r1,[r0,#0x0]
0201bcc0  ldr r1,[r1,#0x68]
0201bcc4  blx r1
0201bcc8  cmp r0,#0x0
0201bccc  moveq r0,#0x1
0201bcd0  movne r0,#0x0
0201bcd4  cmp r0,#0x0
0201bcd8  bne 0x0201bcec
0201bcdc  mov r0,r6
0201bce0  ldr r1,[r0,#0x0]
0201bce4  ldr r1,[r1,#0x70]
0201bce8  blx r1
0201bcec  mov r0,r6
0201bcf0  ldmia sp!,{r4,r5,r6,pc}
