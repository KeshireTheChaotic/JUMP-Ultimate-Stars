
/* JUS-CLASS jus_Class_02095e30::vfunc_12 [class-virtual] slot 12 of vtable 02095e30 (own slot, not
   inherited) */

undefined2 jus_Class_02095e30::vfunc_12(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0200ff9c();
  uVar2 = (uint)*(ushort *)(iVar1 + param_2 * 2 + 0x12);
  if ((*(uint *)(iVar1 + uVar2 + 0xc) & 0x80000000) == 0) {
    return 0;
  }
  return *(undefined2 *)(iVar1 + uVar2 + 0x10);
}

