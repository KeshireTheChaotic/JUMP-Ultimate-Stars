
/* JUS-CLASS jus_Class_020966d0::vfunc_06 [class-virtual] slot 6 of vtable 020966d0 (own slot, not
   inherited) */

void jus_Class_020966d0::vfunc_06(int param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x24) != (*(byte *)(param_1 + 0x24) & param_2)) {
    FUN_02019edc(param_1 + 0x54);
    FUN_02019edc(param_1 + 0x3c);
  }
  if ((param_2 & 2) != 0) {
    *(code **)(param_1 + 0x28) = FUN_0202b1cc;
    *(code **)(param_1 + 0x2c) = FUN_0202ab8c;
    return;
  }
  if ((param_2 & 4) != 0) {
    *(code **)(param_1 + 0x28) = FUN_0202b028;
    *(undefined1 **)(param_1 + 0x2c) = &LAB_0202ab68;
    return;
  }
  if ((param_2 & 1) == 0) {
    *(code **)(param_1 + 0x28) = FUN_0202ae88;
    *(undefined **)(param_1 + 0x2c) = &DAT_02029f90;
  }
  else {
    *(code **)(param_1 + 0x28) = FUN_0202aec8;
    *(undefined1 **)(param_1 + 0x2c) = &LAB_0202ab54;
  }
  return;
}

