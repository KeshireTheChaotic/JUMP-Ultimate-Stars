
/* JUS-CLASS ALFont_021d4ed0::vfunc_04 [class-virtual] slot 4 of vtable 021d4ed0 (own slot, not
   inherited) */

int ALFont_021d4ed0::vfunc_04(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0xc) <= uVar3) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = (uint)*(ushort *)(iVar2 + uVar3 * 6);
    if ((uVar1 <= (param_2 & 0xffff)) &&
       ((param_2 & 0xffff) <= (uint)*(ushort *)(iVar2 + uVar3 * 6 + 2))) break;
    uVar3 = uVar3 + 1;
  }
  return (param_2 + *(ushort *)(iVar2 + (uVar3 * 3 + 2) * 2)) - uVar1;
}

