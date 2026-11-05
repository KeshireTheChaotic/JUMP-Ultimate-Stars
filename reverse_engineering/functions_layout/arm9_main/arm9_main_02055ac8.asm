02055ac8  stmdb sp!,{r4,r5,lr}
02055acc  sub sp,sp,#0x4
02055ad0  cmp r2,#0x0
02055ad4  beq 0x02055b38
02055ad8  ldr r0,[0x2056038]
02055adc  ldr r2,[0x2056038]
02055ae0  ldr r1,[r0,#0x18]
02055ae4  ldr r4,[r2,#0x4]
02055ae8  cmp r1,#0x0
02055aec  movne r1,#0x0
02055af0  strne r1,[r0,#0x18]
02055af4  ldr r0,[0x2056038]
02055af8  ldr r1,[r0,#0x0]
02055afc  cmp r1,#0x0
02055b00  movne r1,#0x0
02055b04  strne r1,[r0,#0x0]
02055b08  cmp r4,#0x0
02055b0c  addeq sp,sp,#0x4
02055b10  ldmiaeq sp!,{r4,r5,lr}
02055b14  bxeq lr
02055b18  ldr r1,[r2,#0x10]
02055b1c  mov r3,#0x0
02055b20  mov r0,#0x6
02055b24  str r3,[r2,#0x4]
02055b28  blx r4
02055b2c  add sp,sp,#0x4
02055b30  ldmia sp!,{r4,r5,lr}
02055b34  bx lr
02055b38  and r0,r1,#0x7f00
02055b3c  mov r0,r0, lsr #0x8
02055b40  and r0,r0,#0xff
02055b44  cmp r0,#0x30
02055b48  and r2,r1,#0xff
02055b4c  bne 0x02055b78
02055b50  ldr r0,[0x2056038]
02055b54  ldr r0,[r0,#0x1c]
02055b58  cmp r0,#0x0
02055b5c  addeq sp,sp,#0x4
02055b60  ldmiaeq sp!,{r4,r5,lr}
02055b64  bxeq lr
02055b68  blx r0
02055b6c  add sp,sp,#0x4
02055b70  ldmia sp!,{r4,r5,lr}
02055b74  bx lr
02055b78  cmp r2,#0x0
02055b7c  bne 0x02055f90
02055b80  ldr r0,[0x2056038]
02055b84  mov r5,#0x0
02055b88  ldr r1,[r0,#0x14]
02055b8c  cmp r1,#0xf
02055b90  addls pc,pc,r1, lsl #0x2
02055b94  b 0x02055f7c
02055b98  b 0x02055bd8
02055b9c  b 0x02055c2c
02055ba0  b 0x02055c7c
02055ba4  b 0x02055fd8
02055ba8  b 0x02055fd8
02055bac  b 0x02055fd8
02055bb0  b 0x02055d24
02055bb4  b 0x02055d54
02055bb8  b 0x02055d78
02055bbc  b 0x02055e1c
02055bc0  b 0x02055ed0
02055bc4  b 0x02055fd8
02055bc8  b 0x02055fd8
02055bcc  b 0x02055fd8
02055bd0  b 0x02055fd8
02055bd4  b 0x02055fd8
02055bd8  ldr r1,[0x205603c]
02055bdc  ldr r4,[r0,#0x8]
02055be0  ldrb r0,[r1,#0x0]
02055be4  bl 0x02055a44
02055be8  ldr r1,[0x205603c]
02055bec  str r0,[r4,#0x0]
02055bf0  ldr r0,[r1,#0x0]
02055bf4  mov r0,r0, lsl #0x13
02055bf8  mov r0,r0, lsr #0x1b
02055bfc  bl 0x02055a44
02055c00  ldr r1,[0x205603c]
02055c04  str r0,[r4,#0x4]
02055c08  ldr r0,[r1,#0x0]
02055c0c  mov r0,r0, lsl #0xa
02055c10  mov r0,r0, lsr #0x1a
02055c14  bl 0x02055a44
02055c18  str r0,[r4,#0x8]
02055c1c  mov r0,r4
02055c20  bl 0x02056394
02055c24  str r0,[r4,#0xc]
02055c28  b 0x02055fd8
02055c2c  ldr r1,[0x2056040]
02055c30  ldr r4,[r0,#0x8]
02055c34  ldr r0,[r1,#0x0]
02055c38  mov r0,r0, lsl #0x1a
02055c3c  mov r0,r0, lsr #0x1a
02055c40  bl 0x02055a44
02055c44  ldr r1,[0x2056040]
02055c48  str r0,[r4,#0x0]
02055c4c  ldr r0,[r1,#0x0]
02055c50  mov r0,r0, lsl #0x11
02055c54  mov r0,r0, lsr #0x19
02055c58  bl 0x02055a44
02055c5c  ldr r1,[0x2056040]
02055c60  str r0,[r4,#0x4]
02055c64  ldr r0,[r1,#0x0]
02055c68  mov r0,r0, lsl #0x9
02055c6c  mov r0,r0, lsr #0x19
02055c70  bl 0x02055a44
02055c74  str r0,[r4,#0x8]
02055c78  b 0x02055fd8
02055c7c  ldr r1,[0x205603c]
02055c80  ldr r4,[r0,#0x8]
02055c84  ldr r0,[r1,#0x0]
02055c88  and r0,r0,#0xff
02055c8c  bl 0x02055a44
02055c90  ldr r1,[0x205603c]
02055c94  str r0,[r4,#0x0]
02055c98  ldr r0,[r1,#0x0]
02055c9c  mov r0,r0, lsl #0x13
02055ca0  mov r0,r0, lsr #0x1b
02055ca4  bl 0x02055a44
02055ca8  ldr r1,[0x205603c]
02055cac  str r0,[r4,#0x4]
02055cb0  ldr r0,[r1,#0x0]
02055cb4  mov r0,r0, lsl #0xa
02055cb8  mov r0,r0, lsr #0x1a
02055cbc  bl 0x02055a44
02055cc0  str r0,[r4,#0x8]
02055cc4  mov r0,r4
02055cc8  bl 0x02056394
02055ccc  ldr r1,[0x2056040]
02055cd0  str r0,[r4,#0xc]
02055cd4  ldr r0,[r1,#0x0]
02055cd8  ldr r1,[0x2056038]
02055cdc  mov r0,r0, lsl #0x1a
02055ce0  mov r0,r0, lsr #0x1a
02055ce4  ldr r4,[r1,#0xc]
02055ce8  bl 0x02055a44
02055cec  ldr r1,[0x2056040]
02055cf0  str r0,[r4,#0x0]
02055cf4  ldr r0,[r1,#0x0]
02055cf8  mov r0,r0, lsl #0x11
02055cfc  mov r0,r0, lsr #0x19
02055d00  bl 0x02055a44
02055d04  ldr r1,[0x2056040]
02055d08  str r0,[r4,#0x4]
02055d0c  ldr r0,[r1,#0x0]
02055d10  mov r0,r0, lsl #0x9
02055d14  mov r0,r0, lsr #0x19
02055d18  bl 0x02055a44
02055d1c  str r0,[r4,#0x8]
02055d20  b 0x02055fd8
02055d24  ldr r1,[0x2056044]
02055d28  ldr r2,[r0,#0x8]
02055d2c  ldrh r0,[r1,#0x0]
02055d30  mov r0,r0, lsl #0x1c
02055d34  mov r0,r0, lsr #0x1c
02055d38  cmp r0,#0x4
02055d3c  bne 0x02055d4c
02055d40  mov r0,#0x1
02055d44  str r0,[r2,#0x0]
02055d48  b 0x02055fd8
02055d4c  str r5,[r2,#0x0]
02055d50  b 0x02055fd8
02055d54  ldr r1,[0x2056044]
02055d58  ldr r2,[r0,#0x8]
02055d5c  ldrh r0,[r1,#0x0]
02055d60  mov r0,r0, lsl #0x19
02055d64  movs r0,r0, lsr #0x1f
02055d68  movne r0,#0x1
02055d6c  strne r0,[r2,#0x0]
02055d70  streq r5,[r2,#0x0]
02055d74  b 0x02055fd8
02055d78  ldr r1,[0x2056040]
02055d7c  ldr r4,[r0,#0x8]
02055d80  ldr r0,[r1,#0x0]
02055d84  mov r0,r0, lsl #0x1d
02055d88  mov r0,r0, lsr #0x1d
02055d8c  str r0,[r4,#0x0]
02055d90  ldr r0,[r1,#0x0]
02055d94  mov r0,r0, lsl #0x12
02055d98  mov r0,r0, lsr #0x1a
02055d9c  bl 0x02055a44
02055da0  ldr r1,[0x2056040]
02055da4  str r0,[r4,#0x4]
02055da8  ldr r0,[r1,#0x0]
02055dac  mov r0,r0, lsl #0x9
02055db0  mov r0,r0, lsr #0x19
02055db4  bl 0x02055a44
02055db8  str r0,[r4,#0x8]
02055dbc  mov r1,r5
02055dc0  ldr r0,[0x2056040]
02055dc4  str r1,[r4,#0xc]
02055dc8  ldr r0,[r0,#0x0]
02055dcc  mov r0,r0, lsl #0x18
02055dd0  movs r0,r0, lsr #0x1f
02055dd4  ldrne r0,[r4,#0xc]
02055dd8  addne r0,r0,#0x1
02055ddc  strne r0,[r4,#0xc]
02055de0  ldr r0,[0x2056040]
02055de4  ldr r0,[r0,#0x0]
02055de8  mov r0,r0, lsl #0x10
02055dec  movs r0,r0, lsr #0x1f
02055df0  ldrne r0,[r4,#0xc]
02055df4  addne r0,r0,#0x2
02055df8  strne r0,[r4,#0xc]
02055dfc  ldr r0,[0x2056040]
02055e00  ldr r0,[r0,#0x0]
02055e04  mov r0,r0, lsl #0x8
02055e08  movs r0,r0, lsr #0x1f
02055e0c  ldrne r0,[r4,#0xc]
02055e10  addne r0,r0,#0x4
02055e14  strne r0,[r4,#0xc]
02055e18  b 0x02055fd8
02055e1c  ldr r3,[r0,#0x18]
02055e20  cmp r3,#0x0
02055e24  bne 0x02055ec8
02055e28  ldr r1,[r0,#0x8]
02055e2c  ldr r1,[r1,#0x0]
02055e30  cmp r1,#0x1
02055e34  bne 0x02055e84
02055e38  ldr r2,[0x2056044]
02055e3c  ldrh r1,[r2,#0x0]
02055e40  mov r1,r1, lsl #0x1c
02055e44  mov r1,r1, lsr #0x1c
02055e48  cmp r1,#0x4
02055e4c  beq 0x02055fd8
02055e50  add r1,r3,#0x1
02055e54  str r1,[r0,#0x18]
02055e58  ldrh r0,[r2,#0x0]
02055e5c  bic r0,r0,#0xf
02055e60  orr r0,r0,#0x4
02055e64  strh r0,[r2,#0x0]
02055e68  bl 0x02056354
02055e6c  cmp r0,#0x0
02055e70  moveq r1,r5
02055e74  ldreq r0,[0x2056038]
02055e78  moveq r5,#0x3
02055e7c  streq r1,[r0,#0x18]
02055e80  b 0x02055fd8
02055e84  ldr r2,[0x2056044]
02055e88  ldrh r1,[r2,#0x0]
02055e8c  mov r1,r1, lsl #0x1c
02055e90  movs r1,r1, lsr #0x1c
02055e94  beq 0x02055fd8
02055e98  add r1,r3,#0x1
02055e9c  str r1,[r0,#0x18]
02055ea0  ldrh r0,[r2,#0x0]
02055ea4  bic r0,r0,#0xf
02055ea8  strh r0,[r2,#0x0]
02055eac  bl 0x02056354
02055eb0  cmp r0,#0x0
02055eb4  moveq r1,r5
02055eb8  ldreq r0,[0x2056038]
02055ebc  moveq r5,#0x3
02055ec0  streq r1,[r0,#0x18]
02055ec4  b 0x02055fd8
02055ec8  str r5,[r0,#0x18]
02055ecc  b 0x02055fd8
02055ed0  ldr r3,[r0,#0x18]
02055ed4  cmp r3,#0x0
02055ed8  bne 0x02055f74
02055edc  ldr r1,[r0,#0x8]
02055ee0  ldr r1,[r1,#0x0]
02055ee4  cmp r1,#0x1
02055ee8  bne 0x02055f30
02055eec  ldr r2,[0x2056044]
02055ef0  ldrh r1,[r2,#0x0]
02055ef4  mov r1,r1, lsl #0x19
02055ef8  movs r1,r1, lsr #0x1f
02055efc  bne 0x02055fd8
02055f00  add r1,r3,#0x1
02055f04  str r1,[r0,#0x18]
02055f08  ldrh r0,[r2,#0x0]
02055f0c  orr r0,r0,#0x40
02055f10  strh r0,[r2,#0x0]
02055f14  bl 0x02056354
02055f18  cmp r0,#0x0
02055f1c  moveq r1,r5
02055f20  ldreq r0,[0x2056038]
02055f24  moveq r5,#0x3
02055f28  streq r1,[r0,#0x18]
02055f2c  b 0x02055fd8
02055f30  ldr r2,[0x2056044]
02055f34  ldrh r1,[r2,#0x0]
02055f38  mov r1,r1, lsl #0x19
02055f3c  movs r1,r1, lsr #0x1f
02055f40  beq 0x02055fd8
02055f44  add r1,r3,#0x1
02055f48  str r1,[r0,#0x18]
02055f4c  ldrh r0,[r2,#0x0]
02055f50  bic r0,r0,#0x40
02055f54  strh r0,[r2,#0x0]
02055f58  bl 0x02056354
02055f5c  cmp r0,#0x0
02055f60  moveq r1,r5
02055f64  ldreq r0,[0x2056038]
02055f68  moveq r5,#0x3
02055f6c  streq r1,[r0,#0x18]
02055f70  b 0x02055fd8
02055f74  str r5,[r0,#0x18]
02055f78  b 0x02055fd8
02055f7c  ldr r0,[0x2056038]
02055f80  mov r1,#0x0
02055f84  str r1,[r0,#0x18]
02055f88  mov r5,#0x4
02055f8c  b 0x02055fd8
02055f90  ldr r0,[0x2056038]
02055f94  mov r1,#0x0
02055f98  str r1,[r0,#0x18]
02055f9c  cmp r2,#0x4
02055fa0  addls pc,pc,r2, lsl #0x2
02055fa4  b 0x02055fd4
02055fac  b 0x02055fbc
02055fb0  b 0x02055fc4
02055fb4  b 0x02055fcc
02055fb8  b 0x02055fd4
02055fbc  mov r5,#0x4
02055fc0  b 0x02055fd8
02055fc4  mov r5,#0x5
02055fc8  b 0x02055fd8
02055fcc  mov r5,#0x1
02055fd0  b 0x02055fd8
02055fd4  mov r5,#0x6
02055fd8  ldr r0,[0x2056038]
02055fdc  ldr r1,[r0,#0x18]
02055fe0  cmp r1,#0x0
02055fe4  addne sp,sp,#0x4
02055fe8  ldmiane sp!,{r4,r5,lr}
02055fec  bxne lr
02055ff0  ldr r2,[0x2056038]
02055ff4  ldr r1,[r0,#0x0]
02055ff8  ldr r4,[r2,#0x4]
02055ffc  cmp r1,#0x0
02056000  movne r1,#0x0
02056004  strne r1,[r0,#0x0]
02056008  cmp r4,#0x0
0205600c  addeq sp,sp,#0x4
02056010  ldmiaeq sp!,{r4,r5,lr}
02056014  bxeq lr
02056018  ldr r1,[r2,#0x10]
0205601c  mov r3,#0x0
02056020  mov r0,r5
02056024  str r3,[r2,#0x4]
02056028  blx r4
0205602c  add sp,sp,#0x4
02056030  ldmia sp!,{r4,r5,lr}
02056034  bx lr
