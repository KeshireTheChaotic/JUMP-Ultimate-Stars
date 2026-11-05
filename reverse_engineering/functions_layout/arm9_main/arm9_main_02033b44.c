
/* JUS-CLASS jus_TagDUMY::vfunc_13 [class-virtual] slot 13 of vtable 02094b0c (own slot, not
   inherited) */

void jus_TagDUMY::vfunc_13(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if ((iVar4 != 0) && (iVar1 = FUN_0201a9ec(iVar4), iVar1 == 0)) {
    FUN_0201a958(iVar4,1);
  }
  iVar4 = FUN_02004b04(param_2);
  uVar2 = FUN_0201a228(iVar4 + 1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_02004b18(uVar2,param_2);
  iVar4 = *(int *)(param_1 + 0x20);
  uVar3 = extraout_r1;
  if (iVar4 != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1b);
  }
  if (iVar4 != 0 && uVar3 != 0) {
    FUN_0201ac08(iVar4,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

