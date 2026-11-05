03803d80  ldr r3,[0x3803df8]
03803d84  ldr r2,[r3,#0x0]
03803d88  ands r2,r2,#0x80000000
03803d8c  bne 0x03803d84
03803d90  mov r3,#0xc0
03803d94  ldr r2,[0x3803dfc]
03803d98  strb r3,[r2,#0x0]
03803d9c  mov r3,r0, lsr #0x18
03803da0  ldr r2,[0x3803e00]
03803da4  strb r3,[r2,#0x0]
03803da8  mov r3,r0, lsr #0x10
03803dac  ldr r2,[0x3803e04]
03803db0  strb r3,[r2,#0x0]
03803db4  mov r3,r0, lsr #0x8
03803db8  ldr r2,[0x3803e08]
03803dbc  strb r3,[r2,#0x0]
03803dc0  ldr r2,[0x3803e0c]
03803dc4  strb r0,[r2,#0x0]
03803dc8  mov r2,r1, lsr #0x18
03803dcc  ldr r0,[0x3803e10]
03803dd0  strb r2,[r0,#0x0]
03803dd4  mov r2,r1, lsr #0x10
03803dd8  ldr r0,[0x3803e14]
03803ddc  strb r2,[r0,#0x0]
03803de0  mov r2,r1, lsr #0x8
03803de4  ldr r0,[0x3803e18]
03803de8  strb r2,[r0,#0x0]
03803dec  ldr r0,[0x3803e1c]
03803df0  strb r1,[r0,#0x0]
03803df4  bx lr
