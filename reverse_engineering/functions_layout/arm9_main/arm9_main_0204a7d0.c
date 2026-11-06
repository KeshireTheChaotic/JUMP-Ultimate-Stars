
/* JUS-CLASS ScreenInstance_Derived_02093d14_Part_0209b250::vfunc_30 [class-virtual] slot 30 of
   vtable 0209b250 (own slot, not inherited) */

bool ScreenInstance_Derived_02093d14_Part_0209b250::vfunc_30(int param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)FUN_0204a7f8();
  return ((int)(uint)*puVar1 >> *(sbyte *)(param_1 + 0x4d) & 1U) != 0;
}

