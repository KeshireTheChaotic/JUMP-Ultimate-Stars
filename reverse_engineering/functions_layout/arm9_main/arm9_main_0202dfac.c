
/* JUS-CLASS jus_Class_020979e8::vfunc_07 [class-virtual] slot 7 of vtable 020979e8 (own slot, not
   inherited) */

int jus_Class_020979e8::vfunc_07(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((DAT_020a0d98 & 1) == 0) {
    DAT_020a0d98 = DAT_020a0d98 | 1;
  }
  uVar1 = DAT_020a0ecc + 1;
  DAT_020a0ecc = uVar1 & 3;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,(uVar1 & 3) * 8 + 0x20a1964);
  return DAT_020a0ecc * 8 + 0x20a1964;
}

