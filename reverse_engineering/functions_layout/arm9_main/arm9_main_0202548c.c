
/* JUS-CLASS jus_Prop_ZTestEnable::vfunc_08 [class-virtual] slot 8 of vtable 0209a1ac (own slot, not
   inherited) */

void jus_Prop_ZTestEnable::vfunc_08(undefined4 param_1,int param_2,undefined4 param_3)

{
  *(bool *)param_3 = (*(uint *)(*(int *)(param_2 + 100) + 0x1c) & 0xffff) >> 0xf != 0;
  return;
}

