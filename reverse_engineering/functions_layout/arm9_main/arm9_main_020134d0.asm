020134d0  stmdb sp!,{r4,r5,r6,lr}
020134d4  mov r5,r0
020134d8  mov r4,r1
020134dc  bl 0x0201347c
020134e0  ldr r1,[0x2013574]
020134e4  mov r0,#0x0
020134e8  str r1,[r5,#0x0]
020134ec  ldr r1,[r4,#0x38]
020134f0  str r1,[r5,#0x38]
020134f4  ldr r1,[r4,#0x3c]
020134f8  str r1,[r5,#0x3c]
020134fc  ldr r1,[r4,#0x40]
02013500  str r1,[r5,#0x40]
02013504  ldrb r1,[r4,#0x44]
02013508  strb r1,[r5,#0x44]
0201350c  strb r0,[r5,#0x45]
02013510  ldr r0,[r4,#0x48]
02013514  str r0,[r5,#0x48]
02013518  ldr r0,[r5,#0x2c]
0201351c  ldr r1,[r5,#0x30]
02013520  ldr r2,[r0,#0x0]
02013524  ldr r2,[r2,#0x68]
02013528  blx r2
0201352c  ldr r1,[r5,#0x48]
02013530  add r0,r0,#0x1
02013534  mov r0,r0, lsr #0x1
02013538  ldrh r1,[r1,#0x4]
0201353c  add r0,r0,#0x1
02013540  add r0,r0,r1, lsr #0x1
02013544  mov r0,r0, lsl #0x1
02013548  add r0,r0,#0x1
0201354c  mov r6,r0, lsl #0x1
02013550  mov r0,r6
02013554  bl 0x0201a228
02013558  str r0,[r5,#0x34]
0201355c  ldr r0,[r4,#0x34]
02013560  ldr r1,[r5,#0x34]
02013564  mov r2,r6
02013568  bl 0x02051730
0201356c  mov r0,r5
02013570  ldmia sp!,{r4,r5,r6,pc}
