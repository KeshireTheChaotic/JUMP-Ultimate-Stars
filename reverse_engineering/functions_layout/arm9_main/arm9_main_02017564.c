
/* JUS-CLASS jus_TagPAL8::vfunc_10 [class-virtual] slot 10 of vtable 02096e80 (own slot, not
   inherited) */

void jus_TagPAL8::vfunc_10(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_0201731c(param_1,param_4,param_3,param_4,param_4);
  *(undefined1 *)(iVar2 + param_3 * (uint)*(ushort *)(param_1 + 8) + param_2) = uVar1;
  return;
}

