027e9e08  ldr r0,[0x27ea000]
027e9e0c  ldr r1,[r0,#0x0]
027e9e10  ldr r0,[0x27ea004]
027e9e14  add r1,r1,r0
027e9e18  ldr r0,[0x27ea008]
027e9e1c  ldrh r2,[r0,#0x0]
027e9e20  ldr r3,[r1,#0x50]
027e9e24  and r2,r2,#0xff
027e9e28  add r2,r3,r2
027e9e2c  str r2,[r1,#0x50]
027e9e30  ldrh r12,[r0,#0x2]
027e9e34  ldr r2,[r1,#0x4c]
027e9e38  add r2,r2,r12, asr #0x8
027e9e3c  str r2,[r1,#0x4c]
027e9e40  ldr r3,[r1,#0x5c]
027e9e44  and r2,r12,#0xff
027e9e48  add r2,r3,r2
027e9e4c  str r2,[r1,#0x5c]
027e9e50  ldrh r12,[r0,#0x4]
027e9e54  ldr r2,[r1,#0x58]
027e9e58  add r2,r2,r12, asr #0x8
027e9e5c  str r2,[r1,#0x58]
027e9e60  ldr r3,[r1,#0x54]
027e9e64  and r2,r12,#0xff
027e9e68  add r2,r3,r2
027e9e6c  str r2,[r1,#0x54]
027e9e70  ldrh r12,[r0,#0x6]
027e9e74  ldr r2,[r1,#0x60]
027e9e78  add r2,r2,r12, asr #0x8
027e9e7c  str r2,[r1,#0x60]
027e9e80  ldr r3,[r1,#0x38]
027e9e84  and r2,r12,#0xff
027e9e88  add r2,r3,r2
027e9e8c  str r2,[r1,#0x38]
027e9e90  ldrh r2,[r0,#0x8]
027e9e94  ldr r3,[r1,#0x48]
027e9e98  and r2,r2,#0xff
027e9e9c  add r2,r3,r2
027e9ea0  str r2,[r1,#0x48]
027e9ea4  ldrh r2,[r0,#0xa]
027e9ea8  ldr r3,[r1,#0x20]
027e9eac  and r2,r2,#0xff
027e9eb0  add r2,r3,r2
027e9eb4  str r2,[r1,#0x20]
027e9eb8  ldrh r12,[r0,#0xc]
027e9ebc  ldr r2,[r1,#0x30]
027e9ec0  add r2,r2,r12, asr #0x8
027e9ec4  str r2,[r1,#0x30]
027e9ec8  ldr r3,[r1,#0x44]
027e9ecc  and r2,r12,#0xff
027e9ed0  add r2,r3,r2
027e9ed4  str r2,[r1,#0x44]
027e9ed8  ldrh r12,[r0,#0xe]
027e9edc  ldr r3,[r1,#0x3c]
027e9ee0  and r2,r12,#0xff
027e9ee4  add r2,r3,r2
027e9ee8  str r2,[r1,#0x3c]
027e9eec  ldr r2,[r1,#0x40]
027e9ef0  add r2,r2,r12, asr #0x8
027e9ef4  str r2,[r1,#0x40]
027e9ef8  ldrh r2,[r0,#0x10]
027e9efc  ldr r3,[r1,#0xc]
027e9f00  and r2,r2,#0xff
027e9f04  add r2,r3,r2
027e9f08  str r2,[r1,#0xc]
027e9f0c  ldrh r3,[r0,#0x20]
027e9f10  ldr r2,[r1,#0x78]
027e9f14  add r2,r2,r3, asr #0x8
027e9f18  str r2,[r1,#0x78]
027e9f1c  ldrh r12,[r0,#0x22]
027e9f20  ldr r3,[r1,#0x7c]
027e9f24  and r2,r12,#0xff
027e9f28  add r2,r3,r2
027e9f2c  str r2,[r1,#0x7c]
027e9f30  ldr r2,[r1,#0x80]
027e9f34  add r2,r2,r12, asr #0x8
027e9f38  str r2,[r1,#0x80]
027e9f3c  ldrh r12,[r0,#0x24]
027e9f40  ldr r3,[r1,#0x84]
027e9f44  and r2,r12,#0xff
027e9f48  add r2,r3,r2
027e9f4c  str r2,[r1,#0x84]
027e9f50  ldr r2,[r1,#0x88]
027e9f54  add r2,r2,r12, asr #0x8
027e9f58  str r2,[r1,#0x88]
027e9f5c  ldrh r12,[r0,#0x26]
027e9f60  ldr r3,[r1,#0x8c]
027e9f64  and r2,r12,#0xff
027e9f68  add r2,r3,r2
027e9f6c  str r2,[r1,#0x8c]
027e9f70  ldr r2,[r1,#0x90]
027e9f74  add r2,r2,r12, asr #0x8
027e9f78  str r2,[r1,#0x90]
027e9f7c  ldrh r12,[r0,#0x28]
027e9f80  ldr r3,[r1,#0x94]
027e9f84  and r2,r12,#0xff
027e9f88  add r2,r3,r2
027e9f8c  str r2,[r1,#0x94]
027e9f90  ldr r2,[r1,#0x98]
027e9f94  add r2,r2,r12, asr #0x8
027e9f98  str r2,[r1,#0x98]
027e9f9c  ldrh r12,[r0,#0x2a]
027e9fa0  ldr r3,[r1,#0x9c]
027e9fa4  and r2,r12,#0xff
027e9fa8  add r2,r3,r2
027e9fac  str r2,[r1,#0x9c]
027e9fb0  ldr r2,[r1,#0xa0]
027e9fb4  add r2,r2,r12, asr #0x8
027e9fb8  str r2,[r1,#0xa0]
027e9fbc  ldrh r12,[r0,#0x2c]
027e9fc0  ldr r3,[r1,#0xa4]
027e9fc4  and r2,r12,#0xff
027e9fc8  add r2,r3,r2
027e9fcc  str r2,[r1,#0xa4]
027e9fd0  ldr r2,[r1,#0xa8]
027e9fd4  add r2,r2,r12, asr #0x8
027e9fd8  str r2,[r1,#0xa8]
027e9fdc  ldrh r3,[r0,#0x2e]
027e9fe0  ldr r2,[r1,#0xac]
027e9fe4  and r0,r3,#0xff
027e9fe8  add r0,r2,r0
027e9fec  str r0,[r1,#0xac]
027e9ff0  ldr r0,[r1,#0xb0]
027e9ff4  add r0,r0,r3, asr #0x8
027e9ff8  str r0,[r1,#0xb0]
027e9ffc  bx lr
