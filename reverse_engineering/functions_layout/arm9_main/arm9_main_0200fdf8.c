
/* JUS-CLASS jus_Class_02095ea0::vfunc_22 [class-virtual] slot 22 of vtable 02095ea0 (own slot, not
   inherited) */

void jus_Class_02095ea0::vfunc_22(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    FUN_02010728();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 0x58);
  (*pcVar1)(*(int **)(param_1 + 0x2c),param_2 - *(uint *)(param_1 + 0x28),pcVar1,param_4,param_4);
  return;
}

