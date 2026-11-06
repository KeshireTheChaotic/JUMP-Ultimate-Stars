
/* JUS-CLASS ScreenInstance_Derived_02093d14_Part_0209b330::vfunc_29 [class-virtual] slot 29 of
   vtable 0209b330 (own slot, not inherited) */

bool ScreenInstance_Derived_02093d14_Part_0209b330::vfunc_29(int param_1,int param_2,int param_3)

{
  return ((int)(uint)*(byte *)(param_3 * *(int *)(param_1 + 0x6c) +
                              *(int *)(param_1 + 0x60) + param_2) >> *(sbyte *)(param_1 + 0x4c) & 1U
         ) != 0;
}

