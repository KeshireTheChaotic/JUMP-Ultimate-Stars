
/* JUS-CLASS jus_Class_021d4f18::vfunc_04 [class-virtual] slot 4 of vtable 021d4f18 (own slot, not
   inherited) */

int jus_Class_021d4f18::vfunc_04(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x20) {
    return -1;
  }
  if (param_2 < 0x80) {
    return param_2 - 0x20;
  }
  if (param_2 < 0xa0) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - 0x40;
  }
  return iVar1;
}

