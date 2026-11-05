
/* JUS-CLASS jus_Class_02095e30::vfunc_19 [class-virtual] slot 19 of vtable 02095e30 (own slot, not
   inherited) */

undefined4 jus_Class_02095e30::vfunc_19(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0200ff9c();
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_0200fe80(param_1);
    if ((int)(uint)*(ushort *)(iVar3 + 6) <= iVar4) {
      return 0;
    }
    uVar2 = (uint)*(ushort *)(iVar1 + 0x12 + iVar4 * 2);
    if (((*(uint *)(iVar1 + uVar2 + 0xc) & 0x80000000) != 0) &&
       (iVar3 = FUN_02004c2c(iVar1 + uVar2 + 0x12,param_2), iVar3 == 0)) break;
    iVar4 = iVar4 + 1;
  }
  return 1;
}

