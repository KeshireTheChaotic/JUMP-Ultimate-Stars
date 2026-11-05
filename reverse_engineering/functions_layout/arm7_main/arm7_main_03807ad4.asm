03807ad4  cmp r0,r1
03807ad8  movcc r1,r0
03807adc  movcc r0,#0x0
03807ae0  bxcc lr
03807ae4  mov r2,#0x1c
03807ae8  mov r3,r0, lsr #0x4
03807aec  cmp r1,r3, lsr #0xc
03807af0  suble r2,r2,#0x10
03807af4  movle r3,r3, lsr #0x10
03807af8  cmp r1,r3, lsr #0x4
03807afc  suble r2,r2,#0x8
03807b00  movle r3,r3, lsr #0x8
03807b04  cmp r1,r3
03807b08  suble r2,r2,#0x4
03807b0c  movle r3,r3, lsr #0x4
03807b10  mov r0,r0, lsl r2
03807b14  rsb r1,r1,#0x0
03807b18  adds r0,r0,r0
03807b1c  add r2,r2,r2, lsl #0x1
03807b20  add pc,pc,r2, lsl #0x2
