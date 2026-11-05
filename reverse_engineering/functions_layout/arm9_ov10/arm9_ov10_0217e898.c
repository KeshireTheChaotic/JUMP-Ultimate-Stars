
void FUN_0217e898(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_02176568();
  uVar2 = FUN_0217e948();
  switch(uVar2) {
  case 0:
    uVar3 = FUN_0217ebb8(param_2);
    if ((1 < uVar3) && (uVar3 < 5)) {
      FUN_0217e7b0(iVar1,param_2,param_3);
      return;
    }
    break;
  case 1:
    FUN_0217e7b0(iVar1,param_2,param_3);
    return;
  case 2:
    FUN_0217e718(iVar1,param_2,param_3);
    return;
  case 3:
    FUN_0217e6ec(iVar1,param_2,param_3);
    return;
  case 4:
    iVar1 = iVar1 * 0x30;
    *(undefined1 *)(DAT_021a7d10 + iVar1 + 0x1d) = 1;
    *(undefined4 *)(DAT_021a7d10 + iVar1 + 0x10) = 0;
    *(undefined4 *)(DAT_021a7d10 + iVar1 + 0x18) = 0;
    return;
  default:
    FUN_02175744(6,0xfffe82b6);
  }
  return;
}

