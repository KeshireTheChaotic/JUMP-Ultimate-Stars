
/* JUS-CLASS jus_Class_02096c70::vfunc_23 [class-virtual] slot 23 of vtable 02096c70 (own slot, not
   inherited) */

uint jus_Class_02096c70::vfunc_23(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return (uint)*(ushort *)(param_1 + 2) * (uint)*(ushort *)((int)param_1 + 10) * iVar1 >> 3;
}

