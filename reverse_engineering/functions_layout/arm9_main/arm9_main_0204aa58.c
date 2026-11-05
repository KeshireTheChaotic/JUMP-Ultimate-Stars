
/* JUS-CLASS jus_Class_0209b330::vfunc_27 [class-virtual] slot 27 of vtable 0209b330 (own slot, not
   inherited) */

uint jus_Class_0209b330::vfunc_27(int param_1,int param_2,int param_3)

{
  return (int)(uint)*(byte *)(param_3 * *(int *)(param_1 + 0x6c) +
                             *(int *)(param_1 + 0x60) + param_2) >> *(sbyte *)(param_1 + 0x48) &
         0xff >> (8 - *(byte *)(param_1 + 0x49) & 0xff);
}

