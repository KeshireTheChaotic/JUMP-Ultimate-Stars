01ff9508  stmdb sp!,{r11,r12,lr}
01ff950c  adr r11,0x1ff94e4
01ff9510  add r12,r0,#0x3a
01ff9514  ldr r8,[r0,#0x0]
01ff9518  mov r7,r5, lsr #0x2
01ff951c  mov r6,r4, lsr #0x2
01ff9520  ldrb r10,[r12,#-0x5]
01ff9524  ldrb r9,[r12,#-0x1]
01ff9528  cmp r10,r9
01ff952c  movgt r10,r9
01ff9530  cmp r10,#0x9
01ff9534  moveq r10,#0x2
01ff9538  adds r3,r3,r3
01ff953c  bcc 0x01ff9554
01ff9540  sub r2,r2,#0x1
01ff9544  strb r10,[r12],#0x1
01ff9548  ldr r9,[r11,r10,lsl #0x2]
01ff954c  adr lr,0x1ff9578
01ff9550  mov pc,r9
01ff9554  mov r9,r3, lsr #0x1d
01ff9558  mov r3,r3, lsl #0x3
01ff955c  sub r2,r2,#0x4
01ff9560  cmp r9,r10
01ff9564  addge r9,r9,#0x1
01ff9568  strb r9,[r12],#0x1
01ff956c  ldr r9,[r11,r9,lsl #0x2]
01ff9570  mov lr,pc
01ff9574  mov pc,r9
01ff9578  cmn r2,#0xc
01ff957c  bllt 0x01ff943c
01ff9580  add r8,r8,#0x4
01ff9584  subs r6,r6,#0x1
01ff9588  bne 0x01ff9520
01ff958c  sub r12,r12,r4, lsr #0x2
01ff9590  add r12,r12,#0x5
01ff9594  sub r8,r8,r4
01ff9598  add r8,r8,#0x400
01ff959c  subs r7,r7,#0x1
01ff95a0  bne 0x01ff951c
01ff95a4  cmp r2,#0x0
01ff95a8  bllt 0x01ff943c
01ff95ac  bl 0x01ff940c
01ff95b0  adr r8,0x1ff949c
01ff95b4  ldr r8,[r8,r6,lsl #0x2]
01ff95b8  mov lr,pc
01ff95bc  mov pc,r8
01ff95c0  ldmia sp!,{r11,r12,pc}
01ff9acc  ldr r9,[r0,#-0x8]
01ff9ad0  add r9,r9,r8
01ff9ad4  ldr r10,[r9,#-0x100]
01ff9ad8  str r10,[r9,#0x0]
01ff9adc  str r10,[r9,#0x100]
01ff9ae0  str r10,[r9,#0x200]
01ff9ae4  str r10,[r9,#0x300]
01ff9ae8  mov pc,lr
01ff9aec  ldr r9,[r0,#-0x8]
01ff9af0  add r9,r9,r8
01ff9af4  ldrb r10,[r9,#-0x1]
01ff9af8  orr r10,r10,r10, lsl #0x8
01ff9afc  orr r10,r10,r10, lsl #0x10
01ff9b00  str r10,[r9,#0x0]
01ff9b04  ldrb r10,[r9,#0xff]
01ff9b08  orr r10,r10,r10, lsl #0x8
01ff9b0c  orr r10,r10,r10, lsl #0x10
01ff9b10  str r10,[r9,#0x100]
01ff9b14  ldrb r10,[r9,#0x1ff]
01ff9b18  orr r10,r10,r10, lsl #0x8
01ff9b1c  orr r10,r10,r10, lsl #0x10
01ff9b20  str r10,[r9,#0x200]
01ff9b24  ldrb r10,[r9,#0x2ff]
01ff9b28  orr r10,r10,r10, lsl #0x8
01ff9b2c  orr r10,r10,r10, lsl #0x10
01ff9b30  str r10,[r9,#0x300]
01ff9b34  mov pc,lr
01ff9be0  stmdb sp!,{r6,r7}
01ff9be4  ldr r9,[r0,#-0x8]
01ff9be8  add r9,r9,r8
01ff9bec  ldrb r6,[r9,#-0x100]
01ff9bf0  ldrb r7,[r9,#-0xff]
01ff9bf4  ldrb r10,[r9,#-0xfe]
01ff9bf8  add r6,r6,r10
01ff9bfc  add r6,r6,r7, lsl #0x1
01ff9c00  add r6,r6,#0x2
01ff9c04  mov r6,r6, lsr #0x2
01ff9c08  strb r6,[r9,#0x0]
01ff9c0c  ldrb r6,[r9,#-0xfd]
01ff9c10  add r7,r7,#0x2
01ff9c14  add r7,r7,r10, lsl #0x1
01ff9c18  add r7,r7,r6
01ff9c1c  mov r7,r7, lsr #0x2
01ff9c20  strb r7,[r9,#0x1]
01ff9c24  strb r7,[r9,#0x100]
01ff9c28  ldrb r7,[r9,#-0xfc]
01ff9c2c  add r10,r10,#0x2
01ff9c30  add r10,r10,r6, lsl #0x1
01ff9c34  add r10,r10,r7
01ff9c38  mov r10,r10, lsr #0x2
01ff9c3c  strb r10,[r9,#0x2]
01ff9c40  strb r10,[r9,#0x101]
01ff9c44  strb r10,[r9,#0x200]
01ff9c48  ldrb r10,[r9,#-0xfb]
01ff9c4c  add r6,r6,#0x2
01ff9c50  add r6,r6,r7, lsl #0x1
01ff9c54  add r6,r6,r10
01ff9c58  mov r6,r6, lsr #0x2
01ff9c5c  strb r6,[r9,#0x3]
01ff9c60  strb r6,[r9,#0x102]
01ff9c64  strb r6,[r9,#0x201]
01ff9c68  strb r6,[r9,#0x300]
01ff9c6c  ldrb r6,[r9,#-0xfa]
01ff9c70  add r7,r7,#0x2
01ff9c74  add r7,r7,r10, lsl #0x1
01ff9c78  add r7,r7,r6
01ff9c7c  mov r7,r7, lsr #0x2
01ff9c80  strb r7,[r9,#0x103]
01ff9c84  strb r7,[r9,#0x202]
01ff9c88  strb r7,[r9,#0x301]
01ff9c8c  ldrb r7,[r9,#-0xf9]
01ff9c90  add r10,r10,#0x2
01ff9c94  add r10,r10,r6, lsl #0x1
01ff9c98  add r10,r10,r7
01ff9c9c  mov r10,r10, lsr #0x2
01ff9ca0  strb r10,[r9,#0x203]
01ff9ca4  strb r10,[r9,#0x302]
01ff9ca8  add r6,r6,r7
01ff9cac  add r6,r6,r7, lsl #0x1
01ff9cb0  add r6,r6,#0x2
01ff9cb4  mov r6,r6, lsr #0x2
01ff9cb8  strb r6,[r9,#0x303]
01ff9cbc  ldmia sp!,{r6,r7}
01ff9cc0  mov pc,lr
01ff9cc4  stmdb sp!,{r6,r7}
01ff9cc8  ldr r9,[r0,#-0x8]
01ff9ccc  add r9,r9,r8
01ff9cd0  ldrb r6,[r9,#0x2ff]
01ff9cd4  ldrb r7,[r9,#0x1ff]
01ff9cd8  ldrb r10,[r9,#0xff]
01ff9cdc  add r6,r6,#0x2
01ff9ce0  add r6,r6,r7, lsl #0x1
01ff9ce4  add r6,r6,r10
01ff9ce8  mov r6,r6, lsr #0x2
01ff9cec  strb r6,[r9,#0x300]
01ff9cf0  ldrb r6,[r9,#-0x1]
01ff9cf4  add r7,r7,#0x2
01ff9cf8  add r7,r7,r10, lsl #0x1
01ff9cfc  add r7,r7,r6
01ff9d00  mov r7,r7, lsr #0x2
01ff9d04  strb r7,[r9,#0x200]
01ff9d08  strb r7,[r9,#0x301]
01ff9d0c  ldrb r7,[r9,#-0x101]
01ff9d10  add r10,r10,#0x2
01ff9d14  add r10,r10,r6, lsl #0x1
01ff9d18  add r10,r10,r7
01ff9d1c  mov r10,r10, lsr #0x2
01ff9d20  strb r10,[r9,#0x100]
01ff9d24  strb r10,[r9,#0x201]
01ff9d28  strb r10,[r9,#0x302]
01ff9d2c  ldrb r10,[r9,#-0x100]
01ff9d30  add r6,r6,#0x2
01ff9d34  add r6,r6,r7, lsl #0x1
01ff9d38  add r6,r6,r10
01ff9d3c  mov r6,r6, lsr #0x2
01ff9d40  strb r6,[r9,#0x0]
01ff9d44  strb r6,[r9,#0x101]
01ff9d48  strb r6,[r9,#0x202]
01ff9d4c  strb r6,[r9,#0x303]
01ff9d50  ldrb r6,[r9,#-0xff]
01ff9d54  add r7,r7,#0x2
01ff9d58  add r7,r7,r10, lsl #0x1
01ff9d5c  add r7,r7,r6
01ff9d60  mov r7,r7, lsr #0x2
01ff9d64  strb r7,[r9,#0x1]
01ff9d68  strb r7,[r9,#0x102]
01ff9d6c  strb r7,[r9,#0x203]
01ff9d70  ldrb r7,[r9,#-0xfe]
01ff9d74  add r10,r10,#0x2
01ff9d78  add r10,r10,r6, lsl #0x1
01ff9d7c  add r10,r10,r7
01ff9d80  mov r10,r10, lsr #0x2
01ff9d84  strb r10,[r9,#0x2]
01ff9d88  strb r10,[r9,#0x103]
01ff9d8c  ldrb r10,[r9,#-0xfd]
01ff9d90  add r6,r6,#0x2
01ff9d94  add r6,r6,r7, lsl #0x1
01ff9d98  add r6,r6,r10
01ff9d9c  mov r6,r6, lsr #0x2
01ff9da0  strb r6,[r9,#0x3]
01ff9da4  ldmia sp!,{r6,r7}
01ff9da8  mov pc,lr
01ff9dac  stmdb sp!,{r6,r7}
01ff9db0  ldr r9,[r0,#-0x8]
01ff9db4  add r9,r9,r8
01ff9db8  ldrb r6,[r9,#0x1ff]
01ff9dbc  ldrb r7,[r9,#0xff]
01ff9dc0  ldrb r10,[r9,#-0x1]
01ff9dc4  add r6,r6,#0x2
01ff9dc8  add r6,r6,r7, lsl #0x1
01ff9dcc  add r6,r6,r10
01ff9dd0  mov r6,r6, lsr #0x2
01ff9dd4  strb r6,[r9,#0x300]
01ff9dd8  ldrb r6,[r9,#-0x101]
01ff9ddc  add r7,r7,#0x2
01ff9de0  add r7,r7,r10, lsl #0x1
01ff9de4  add r7,r7,r6
01ff9de8  mov r7,r7, lsr #0x2
01ff9dec  strb r7,[r9,#0x200]
01ff9df0  ldrb r7,[r9,#-0x100]
01ff9df4  add r10,r10,#0x2
01ff9df8  add r10,r10,r6, lsl #0x1
01ff9dfc  add r10,r10,r7
01ff9e00  mov r10,r10, lsr #0x2
01ff9e04  strb r10,[r9,#0x100]
01ff9e08  strb r10,[r9,#0x301]
01ff9e0c  add r10,r6,r7
01ff9e10  add r10,r10,#0x1
01ff9e14  mov r10,r10, lsr #0x1
01ff9e18  strb r10,[r9,#0x0]
01ff9e1c  strb r10,[r9,#0x201]
01ff9e20  ldrb r10,[r9,#-0xff]
01ff9e24  add r6,r6,#0x2
01ff9e28  add r6,r6,r7, lsl #0x1
01ff9e2c  add r6,r6,r10
01ff9e30  mov r6,r6, lsr #0x2
01ff9e34  strb r6,[r9,#0x101]
01ff9e38  strb r6,[r9,#0x302]
01ff9e3c  add r6,r7,r10
01ff9e40  add r6,r6,#0x1
01ff9e44  mov r6,r6, lsr #0x1
01ff9e48  strb r6,[r9,#0x1]
01ff9e4c  strb r6,[r9,#0x202]
01ff9e50  ldrb r6,[r9,#-0xfe]
01ff9e54  add r7,r7,#0x2
01ff9e58  add r7,r7,r10, lsl #0x1
01ff9e5c  add r7,r7,r6
01ff9e60  mov r7,r7, lsr #0x2
01ff9e64  strb r7,[r9,#0x102]
01ff9e68  strb r7,[r9,#0x303]
01ff9e6c  add r7,r6,r10
01ff9e70  add r7,r7,#0x1
01ff9e74  mov r7,r7, lsr #0x1
01ff9e78  strb r7,[r9,#0x2]
01ff9e7c  strb r7,[r9,#0x203]
01ff9e80  ldrb r7,[r9,#-0xfd]
01ff9e84  add r10,r10,#0x2
01ff9e88  add r10,r10,r6, lsl #0x1
01ff9e8c  add r10,r10,r7
01ff9e90  mov r10,r10, lsr #0x2
01ff9e94  strb r10,[r9,#0x103]
01ff9e98  add r10,r6,r7
01ff9e9c  add r10,r10,#0x1
01ff9ea0  mov r10,r10, lsr #0x1
01ff9ea4  strb r10,[r9,#0x3]
01ff9ea8  ldmia sp!,{r6,r7}
01ff9eac  mov pc,lr
01ff9eb0  stmdb sp!,{r6,r7}
01ff9eb4  ldr r9,[r0,#-0x8]
01ff9eb8  add r9,r9,r8
01ff9ebc  ldrb r6,[r9,#0x2ff]
01ff9ec0  ldrb r7,[r9,#0x1ff]
01ff9ec4  add r10,r6,r7
01ff9ec8  add r10,r10,#0x1
01ff9ecc  mov r10,r10, lsr #0x1
01ff9ed0  strb r10,[r9,#0x300]
01ff9ed4  ldrb r10,[r9,#0xff]
01ff9ed8  add r6,r6,#0x2
01ff9edc  add r6,r6,r7, lsl #0x1
01ff9ee0  add r6,r6,r10
01ff9ee4  mov r6,r6, lsr #0x2
01ff9ee8  strb r6,[r9,#0x301]
01ff9eec  add r6,r7,r10
01ff9ef0  add r6,r6,#0x1
01ff9ef4  mov r6,r6, lsr #0x1
01ff9ef8  strb r6,[r9,#0x200]
01ff9efc  strb r6,[r9,#0x302]
01ff9f00  ldrb r6,[r9,#-0x1]
01ff9f04  add r7,r7,#0x2
01ff9f08  add r7,r7,r10, lsl #0x1
01ff9f0c  add r7,r7,r6
01ff9f10  mov r7,r7, lsr #0x2
01ff9f14  strb r7,[r9,#0x201]
01ff9f18  strb r7,[r9,#0x303]
01ff9f1c  add r7,r6,r10
01ff9f20  add r7,r7,#0x1
01ff9f24  mov r7,r7, lsr #0x1
01ff9f28  strb r7,[r9,#0x100]
01ff9f2c  strb r7,[r9,#0x202]
01ff9f30  ldrb r7,[r9,#-0x101]
01ff9f34  add r10,r10,#0x2
01ff9f38  add r10,r10,r6, lsl #0x1
01ff9f3c  add r10,r10,r7
01ff9f40  mov r10,r10, lsr #0x2
01ff9f44  strb r10,[r9,#0x101]
01ff9f48  strb r10,[r9,#0x203]
01ff9f4c  add r10,r6,r7
01ff9f50  add r10,r10,#0x1
01ff9f54  mov r10,r10, lsr #0x1
01ff9f58  strb r10,[r9,#0x0]
01ff9f5c  strb r10,[r9,#0x102]
01ff9f60  ldrb r10,[r9,#-0x100]
01ff9f64  add r6,r6,#0x2
01ff9f68  add r6,r6,r7, lsl #0x1
01ff9f6c  add r6,r6,r10
01ff9f70  mov r6,r6, lsr #0x2
01ff9f74  strb r6,[r9,#0x1]
01ff9f78  strb r6,[r9,#0x103]
01ff9f7c  ldrb r6,[r9,#-0xff]
01ff9f80  add r7,r7,#0x2
01ff9f84  add r7,r7,r10, lsl #0x1
01ff9f88  add r7,r7,r6
01ff9f8c  mov r7,r7, lsr #0x2
01ff9f90  strb r7,[r9,#0x2]
01ff9f94  ldrb r7,[r9,#-0xfe]
01ff9f98  add r10,r10,#0x2
01ff9f9c  add r10,r10,r6, lsl #0x1
01ff9fa0  add r10,r10,r7
01ff9fa4  mov r10,r10, lsr #0x2
01ff9fa8  strb r10,[r9,#0x3]
01ff9fac  ldmia sp!,{r6,r7}
01ff9fb0  mov pc,lr
01ff9fb4  stmdb sp!,{r6,r7}
01ff9fb8  ldr r9,[r0,#-0x8]
01ff9fbc  add r9,r9,r8
01ff9fc0  ldrb r6,[r9,#-0xfa]
01ff9fc4  ldrb r7,[r9,#-0xfb]
01ff9fc8  ldrb r10,[r9,#-0xfc]
01ff9fcc  add r6,r6,#0x2
01ff9fd0  add r6,r6,r7, lsl #0x1
01ff9fd4  add r6,r6,r10
01ff9fd8  mov r6,r6, lsr #0x2
01ff9fdc  strb r6,[r9,#0x303]
01ff9fe0  add r6,r7,r10
01ff9fe4  add r6,r6,#0x1
01ff9fe8  mov r6,r6, lsr #0x1
01ff9fec  strb r6,[r9,#0x203]
01ff9ff0  ldrb r6,[r9,#-0xfd]
01ff9ff4  add r7,r7,#0x2
01ff9ff8  add r7,r7,r10, lsl #0x1
01ff9ffc  add r7,r7,r6
01ffa000  mov r7,r7, lsr #0x2
01ffa004  strb r7,[r9,#0x103]
01ffa008  strb r7,[r9,#0x302]
01ffa00c  add r7,r6,r10
01ffa010  add r7,r7,#0x1
01ffa014  mov r7,r7, lsr #0x1
01ffa018  strb r7,[r9,#0x3]
01ffa01c  strb r7,[r9,#0x202]
01ffa020  ldrb r7,[r9,#-0xfe]
01ffa024  add r10,r10,#0x2
01ffa028  add r10,r10,r6, lsl #0x1
01ffa02c  add r10,r10,r7
01ffa030  mov r10,r10, lsr #0x2
01ffa034  strb r10,[r9,#0x102]
01ffa038  strb r10,[r9,#0x301]
01ffa03c  add r10,r6,r7
01ffa040  add r10,r10,#0x1
01ffa044  mov r10,r10, lsr #0x1
01ffa048  strb r10,[r9,#0x2]
01ffa04c  strb r10,[r9,#0x201]
01ffa050  ldrb r10,[r9,#-0xff]
01ffa054  add r6,r6,#0x2
01ffa058  add r6,r6,r7, lsl #0x1
01ffa05c  add r6,r6,r10
01ffa060  mov r6,r6, lsr #0x2
01ffa064  strb r6,[r9,#0x101]
01ffa068  strb r6,[r9,#0x300]
01ffa06c  add r6,r7,r10
01ffa070  add r6,r6,#0x1
01ffa074  mov r6,r6, lsr #0x1
01ffa078  strb r6,[r9,#0x1]
01ffa07c  strb r6,[r9,#0x200]
01ffa080  ldrb r6,[r9,#-0x100]
01ffa084  add r7,r7,#0x2
01ffa088  add r7,r7,r10, lsl #0x1
01ffa08c  add r7,r7,r6
01ffa090  mov r7,r7, lsr #0x2
01ffa094  strb r7,[r9,#0x100]
01ffa098  add r7,r6,r10
01ffa09c  add r7,r7,#0x1
01ffa0a0  mov r7,r7, lsr #0x1
01ffa0a4  strb r7,[r9,#0x0]
01ffa0a8  ldmia sp!,{r6,r7}
01ffa0ac  mov pc,lr
01ffa0b0  stmdb sp!,{r6,r7}
01ffa0b4  ldr r9,[r0,#-0x8]
01ffa0b8  add r9,r9,r8
01ffa0bc  ldrb r6,[r9,#-0x1]
01ffa0c0  ldrb r7,[r9,#0xff]
01ffa0c4  add r10,r6,r7
01ffa0c8  add r10,r10,#0x1
01ffa0cc  mov r10,r10, lsr #0x1
01ffa0d0  strb r10,[r9,#0x0]
01ffa0d4  ldrb r10,[r9,#0x1ff]
01ffa0d8  add r6,r6,#0x2
01ffa0dc  add r6,r6,r7, lsl #0x1
01ffa0e0  add r6,r6,r10
01ffa0e4  mov r6,r6, lsr #0x2
01ffa0e8  strb r6,[r9,#0x1]
01ffa0ec  add r6,r7,r10
01ffa0f0  add r6,r6,#0x1
01ffa0f4  mov r6,r6, lsr #0x1
01ffa0f8  strb r6,[r9,#0x2]
01ffa0fc  strb r6,[r9,#0x100]
01ffa100  ldrb r6,[r9,#0x2ff]
01ffa104  add r7,r7,#0x2
01ffa108  add r7,r7,r10, lsl #0x1
01ffa10c  add r7,r7,r6
01ffa110  mov r7,r7, lsr #0x2
01ffa114  strb r7,[r9,#0x3]
01ffa118  strb r7,[r9,#0x101]
01ffa11c  add r7,r6,r10
01ffa120  add r7,r7,#0x1
01ffa124  mov r7,r7, lsr #0x1
01ffa128  strb r7,[r9,#0x102]
01ffa12c  strb r7,[r9,#0x200]
01ffa130  add r7,r6,r10
01ffa134  add r7,r7,r6, lsl #0x1
01ffa138  add r7,r7,#0x2
01ffa13c  mov r7,r7, lsr #0x2
01ffa140  strb r7,[r9,#0x103]
01ffa144  strb r7,[r9,#0x201]
01ffa148  strb r6,[r9,#0x300]
01ffa14c  strb r6,[r9,#0x202]
01ffa150  strb r6,[r9,#0x203]
01ffa154  strb r6,[r9,#0x301]
01ffa158  strb r6,[r9,#0x302]
01ffa15c  strb r6,[r9,#0x303]
01ffa160  ldmia sp!,{r6,r7}
01ffa164  mov pc,lr
