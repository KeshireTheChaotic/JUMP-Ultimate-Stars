
/* JUS-CLASS ALTextDS_021d4ef4::vfunc_04 [class-virtual] slot 4 of vtable 021d4ef4 (own slot, not
   inherited) */

int ALTextDS_021d4ef4::vfunc_04(undefined4 param_1,uint param_2)

{
  if (param_2 < 0x20) {
    return 0x60;
  }
  if (param_2 < 0x80) {
    return param_2 - 0x20;
  }
  if (param_2 < 0xa0) {
    return param_2 - 0x40;
  }
  if (param_2 < 0x100) {
    return 0x60;
  }
  if (param_2 < 0x8140) {
    return 0x101;
  }
  if (param_2 < 0x84c0) {
    return (param_2 - 0x80a0) + (param_2 - 0x8100 >> 8) * -0x40;
  }
  if (param_2 < 0x8740) {
    return 0x101;
  }
  if (param_2 < 0x87a0) {
    return (param_2 - 0x83e0) + (param_2 - 0x8700 >> 8) * -0x40;
  }
  if (param_2 < 0x8880) {
    return 0x101;
  }
  if (param_2 < 0x9880) {
    return (param_2 - 0x84c0) + (param_2 - 0x8840 >> 8) * -0x40;
  }
  return 0x101;
}

