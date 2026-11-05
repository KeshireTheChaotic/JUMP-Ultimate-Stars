02050db0  smull r2,r1,r0,r1
02050db4  mov r0,#0x800
02050db8  adds r0,r2,r0
02050dbc  adc r1,r1,#0x0
02050dc0  mov r0,r0, lsr #0xc
02050dc4  orr r0,r0,r1, lsl #0x14
02050dc8  bx lr
