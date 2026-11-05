027e87fc  stmdb sp!,{lr}
027e8800  sub sp,sp,#0x204
027e8804  mov r1,r0
027e8808  add r0,sp,#0x0
027e880c  ldr r1,[r1,#0x4]
027e8810  mov r1,r1, lsl #0x10
027e8814  mov r1,r1, lsr #0x10
027e8818  bl 0x027e22f0
027e881c  ldrh r1,[r0,#0x4]
027e8820  cmp r1,#0x0
027e8824  beq 0x027e8834
027e8828  ldr r0,[0x27e8858]
027e882c  bl 0x027e87c0
027e8830  b 0x027e884c
027e8834  bl 0x03808074
027e8838  mov r1,#0x24
027e883c  strh r1,[r0,#0x0]
027e8840  mov r1,#0x0
027e8844  strh r1,[r0,#0x2]
027e8848  bl 0x038080d0
027e884c  add sp,sp,#0x204
027e8850  ldmia sp!,{lr}
027e8854  bx lr
