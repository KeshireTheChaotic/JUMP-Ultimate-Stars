
/* JUS-CLASS jus_Class_0209b4f0::vfunc_54 [class-virtual] slot 54 of vtable 0209b4f0 (own slot, not
   inherited) */

int jus_Class_0209b4f0::vfunc_54(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x34) + 0x948))();
  return (param_3 & 0x1f) * 0x40 + (param_2 & 0x1f) * 2 +
         ((param_4 >> 5) * ((param_3 & param_5 - 1U) >> 5) + ((param_2 & param_4 - 1) >> 5)) * 0x800
         + iVar1;
}

