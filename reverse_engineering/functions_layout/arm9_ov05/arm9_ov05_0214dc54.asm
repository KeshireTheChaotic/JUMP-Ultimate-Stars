0214dc54  mov r5,r5, asr #0x4
0214dc58  and r6,r5,#0xf
0214dc5c  cmp r6,#0x3
0214dc60  ldrhne r5,[r8,#0x0]
0214dc64  addne r5,r5,r6, lsl #0xa
0214dc68  strne r5,[r0,#0x4]
0214dc6c  bne 0x0214dce0
