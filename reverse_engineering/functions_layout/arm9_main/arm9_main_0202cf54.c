
/* JUS-CLASS jus_Prop_EffectFlags_Derived_02099640::vfunc_09 [class-virtual] slot 9 of vtable
   02099640 (own slot, not inherited) */

void jus_Prop_EffectFlags_Derived_02099640::vfunc_09(int param_1,int param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  
  *(undefined2 *)(param_2 + *(int *)(param_1 + 0x24)) = *param_3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  uVar1 = FUN_02011ac8(param_2);
  (**(code **)(param_1 + 0x1c))(uVar1,*(undefined4 *)(param_1 + 0x20));
  return;
}

