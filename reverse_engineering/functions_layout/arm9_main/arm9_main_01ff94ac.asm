01ff94ac  stmdb sp!,{r11,r12,lr}
01ff94b0  bl 0x01ff940c
01ff94b4  mov r11,r6
01ff94b8  bl 0x01ff940c
01ff94bc  mov r12,r6
01ff94c0  adr r8,0x1ff948c
01ff94c4  ldr r8,[r8,r11,lsl #0x2]
01ff94c8  mov lr,pc
01ff94cc  mov pc,r8
01ff94d0  adr r8,0x1ff949c
01ff94d4  ldr r8,[r8,r12,lsl #0x2]
01ff94d8  mov lr,pc
01ff94dc  mov pc,r8
01ff94e0  ldmia sp!,{r11,r12,pc}
