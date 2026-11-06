
/* JUS-CLASS ScreenInstance_Derived_02093d14_Part_0209b330::vfunc_33 [class-virtual] slot 33 of
   vtable 0209b330 (own slot, not inherited) */

void ScreenInstance_Derived_02093d14_Part_0209b330::vfunc_33
               (int param_1,int param_2,int param_3,int param_4)

{
  param_3 = param_3 * *(int *)(param_1 + 0x6c);
  param_2 = *(int *)(param_1 + 0x60) + param_2;
  *(byte *)(param_2 + param_3) =
       *(byte *)(param_2 + param_3) &
       ~(byte)((0xff >> (8 - *(byte *)(param_1 + 0x49) & 0xff)) << *(sbyte *)(param_1 + 0x48)) |
       (byte)(param_4 << *(sbyte *)(param_1 + 0x48));
  return;
}

