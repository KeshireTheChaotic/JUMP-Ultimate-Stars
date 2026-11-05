
/* JUS-CLASS jus_Class_02095e30::vfunc_18 [class-virtual] slot 18 of vtable 02095e30 (own slot, not
   inherited) */

undefined4 jus_Class_02095e30::vfunc_18(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0200ff9c();
  iVar3 = 0;
  while( true ) {
    iVar2 = FUN_0200fe80(param_1);
    if ((int)(uint)*(ushort *)(iVar2 + 6) <= iVar3) {
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x12 + iVar3 * 2))) break;
    iVar3 = iVar3 + 1;
  }
  return 1;
}

