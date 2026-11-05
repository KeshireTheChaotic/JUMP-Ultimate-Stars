037fa5e4  stmdb sp!,{r4,r5,r6,r7,r8,lr}
037fa5e8  ldr r2,[0x37fa814]
037fa5ec  ldr r1,[r2,#0x0]
037fa5f0  add r5,r1,#0x344
037fa5f4  ldr r0,[0x37fa818]
037fa5f8  add r4,r1,r0
037fa5fc  mov r1,#0x40
037fa600  ldr r0,[0x37fa81c]
037fa604  strh r1,[r0,#0x0]
037fa608  ldr r0,[r2,#0x0]
037fa60c  add r0,r0,#0x600
037fa610  ldrh r0,[r0,#0x90]
037fa614  ands r0,r0,#0x20
037fa618  beq 0x037fa80c
037fa61c  ldrh r1,[r4,#0xa4]
037fa620  ldr r0,[0x37fa820]
037fa624  cmp r1,r0
037fa628  bne 0x037fa80c
037fa62c  ldr r0,[0x37fa824]
037fa630  ldrh r0,[r0,#0x0]
037fa634  and r0,r0,#0x3
037fa638  cmp r0,#0x3
037fa63c  bne 0x037fa80c
037fa640  ldr r0,[0x37fa828]
037fa644  ldrh r2,[r0,#0x0]
037fa648  ldr r0,[0x37fa82c]
037fa64c  ldrh r1,[r0,#0x0]
037fa650  ldr r0,[0x37fa830]
037fa654  and r0,r0,r1, lsr #0x1
037fa658  cmp r2,r0
037fa65c  blt 0x037fa80c
037fa660  ldr r0,[0x37fa834]
037fa664  ldrh r6,[r0,#0x0]
037fa668  ldr r0,[0x37fa838]
037fa66c  add r0,r0,r6, lsl #0x1
037fa670  add r0,r0,#0x8
037fa674  bl 0x037fa998
037fa678  add r0,r0,#0x4
037fa67c  bl 0x037fa998
037fa680  ldrh r2,[r0,#0x0]
037fa684  ldr r1,[0x37fa83c]
037fa688  and r1,r2,r1
037fa68c  cmp r1,#0x228
037fa690  bne 0x037fa80c
037fa694  add r0,r0,#0x2
037fa698  bl 0x037fa998
037fa69c  ldr r2,[0x37fa840]
037fa6a0  ldrh r1,[r2,#0x0]
037fa6a4  sub r7,r1,#0x10000
037fa6a8  ldr r1,[0x37fa828]
037fa6ac  ldrh r3,[r1,#0x0]
037fa6b0  sub r3,r3,r6
037fa6b4  mov r3,r3, lsl #0x10
037fa6b8  mov r8,r3, lsr #0x10
037fa6bc  ands r3,r8,#0x8000
037fa6c0  ldrhne r3,[r5,#0x9a]
037fa6c4  addne r3,r8,r3, lsr #0x1
037fa6c8  movne r3,r3, lsl #0x10
037fa6cc  movne r8,r3, lsr #0x10
037fa6d0  cmp r8,#0xe
037fa6d4  bhi 0x037fa6f4
037fa6d8  ldrh r3,[r2,#0x0]
037fa6dc  sub r3,r3,r7
037fa6e0  mov r3,r3, lsl #0x10
037fa6e4  mov r3,r3, lsr #0x10
037fa6e8  cmp r3,#0x40
037fa6ec  bls 0x037fa6ac
037fa6f0  b 0x037fa80c
037fa6f4  add r0,r0,#0x8
037fa6f8  mov r8,#0x0
037fa6fc  b 0x037fa724
037fa700  bl 0x037fa998
037fa704  mov r1,r0
037fa708  add r0,r1,#0x2
037fa70c  ldrh r2,[r1,#0x0]
037fa710  add r1,r5,r8, lsl #0x1
037fa714  ldrh r1,[r1,#0x64]
037fa718  cmp r2,r1
037fa71c  bne 0x037fa80c
037fa720  add r8,r8,#0x1
037fa724  cmp r8,#0x3
037fa728  bcc 0x037fa700
037fa72c  add r0,r0,#0xa
037fa730  bl 0x037fa998
037fa734  ldr r3,[0x37fa840]
037fa738  ldr r1,[0x37fa828]
037fa73c  ldrh r2,[r1,#0x0]
037fa740  sub r2,r2,r6
037fa744  mov r2,r2, lsl #0x10
037fa748  mov r8,r2, lsr #0x10
037fa74c  ands r2,r8,#0x8000
037fa750  ldrhne r2,[r5,#0x9a]
037fa754  addne r2,r8,r2, lsr #0x1
037fa758  movne r2,r2, lsl #0x10
037fa75c  movne r8,r2, lsr #0x10
037fa760  cmp r8,#0x14
037fa764  bhi 0x037fa784
037fa768  ldrh r2,[r3,#0x0]
037fa76c  sub r2,r2,r7
037fa770  mov r2,r2, lsl #0x10
037fa774  mov r2,r2, lsr #0x10
037fa778  cmp r2,#0x70
037fa77c  bls 0x037fa73c
037fa780  b 0x037fa80c
037fa784  ldrh r2,[r0,#0x0]
037fa788  mov r1,#0x1
037fa78c  ldr r0,[0x37fa844]
037fa790  ldrh r0,[r0,#0x0]
037fa794  mov r0,r1, lsl r0
037fa798  ands r0,r2,r0
037fa79c  bne 0x037fa80c
037fa7a0  ldr r0,[0x37fa848]
037fa7a4  ldrh r0,[r0,#0x0]
037fa7a8  strh r0,[r4,#0xa4]
037fa7ac  mov r1,#0x40
037fa7b0  ldr r0,[0x37fa84c]
037fa7b4  strh r1,[r0,#0x0]
037fa7b8  ldrh r0,[r5,#0xbe]
037fa7bc  add r0,r0,#0x1
037fa7c0  strh r0,[r5,#0xbe]
037fa7c4  ldr r1,[0x37fa824]
037fa7c8  ldrh r0,[r1,#0x0]
037fa7cc  and r0,r0,#0x3
037fa7d0  cmp r0,#0x3
037fa7d4  beq 0x037fa7c8
037fa7d8  ldr r1,[0x37fa850]
037fa7dc  ldrh r0,[r1,#0x0]
037fa7e0  orr r0,r0,#0x40
037fa7e4  strh r0,[r1,#0x0]
037fa7e8  ldrh r0,[r1,#0x0]
037fa7ec  bic r0,r0,#0x40
037fa7f0  strh r0,[r1,#0x0]
037fa7f4  mov r0,#0x8
037fa7f8  ldr r1,[0x37fa854]
037fa7fc  strh r0,[r1,#0x0]
037fa800  mov r0,#0x0
037fa804  strh r0,[r1,#0x0]
037fa808  bl 0x027ebb98
037fa80c  ldmia sp!,{r4,r5,r6,r7,r8,lr}
037fa810  bx lr
