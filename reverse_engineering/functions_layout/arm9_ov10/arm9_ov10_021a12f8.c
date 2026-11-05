
int FUN_021a12f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = FUN_021a1bf8(param_1 + 0x8f0,*(undefined4 *)(param_1 + 0x18),param_3,param_4,param_4);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    uVar2 = *(int *)(param_1 + 0xafc) + 1U & 0x7fff;
    if (iVar3 < (int)uVar2) {
      iVar3 = uVar2 - iVar3;
    }
    else {
      iVar3 = (0x7fff - iVar3) + uVar2;
    }
  }
  return iVar3;
}

