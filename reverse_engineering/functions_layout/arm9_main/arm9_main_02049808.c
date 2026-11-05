
/* JUS-CLASS jus_Class_0209b4f0::vfunc_33 [class-virtual] slot 33 of vtable 0209b4f0 (own slot, not
   inherited) */

void jus_Class_0209b4f0::vfunc_33(int param_1,int param_2,int param_3,ushort param_4)

{
  int iVar1;
  
  iVar1 = (param_3 * *(int *)(param_1 + 0x6c) + param_2) * 2;
  *(ushort *)(*(int *)(param_1 + 0xac) + iVar1) =
       *(ushort *)(*(int *)(param_1 + 0xac) + iVar1) & 0xfc00 | param_4;
  FUN_020474b0();
  return;
}

