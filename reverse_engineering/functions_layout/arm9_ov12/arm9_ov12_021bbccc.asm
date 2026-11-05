021bbccc  stmdb sp!,{r4,lr}
021bbcd0  mov r4,r0
021bbcd4  ldr r0,[r4,#0x4]
021bbcd8  ldr r1,[r0,#0x10]
021bbcdc  ldrb r0,[r1,#0xa5]
021bbce0  cmp r0,#0x0
021bbce4  beq 0x021bbd0c
021bbce8  ldrsb r0,[r1,#0x99]
021bbcec  ldrb r12,[r1,#0x9a]
021bbcf0  ldr r3,[0x21bbd1c]
021bbcf4  ldr r1,[0x21bbd20]
021bbcf8  mov r2,r0, lsl #0x1
021bbcfc  ldrb r0,[r3,r12,lsl #0x1]
021bbd00  ldrh r2,[r1,r2]
021bbd04  mov r1,#0x0
021bbd08  bl 0x02073f24
021bbd0c  ldr r0,[r4,#0x4]
021bbd10  ldr r1,[0x21bbd24]
021bbd14  bl 0x02028384
021bbd18  ldmia sp!,{r4,pc}
