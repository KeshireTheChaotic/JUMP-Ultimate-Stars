
undefined4 FUN_02173e14(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_02004b04(param_2);
  iVar2 = *(int *)(param_1 + 0x19f8);
  iVar3 = *(int *)(param_1 + 0x19fc) - iVar2;
  if (iVar3 < iVar1) {
    iVar2 = FUN_02173d18(param_1,param_1 + 0x19f4,(iVar1 - iVar3) + 1);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x19f8);
    iVar3 = *(int *)(param_1 + 0x19fc) - iVar2;
  }
  iVar2 = FUN_02052c44(iVar2,iVar3,&DAT_021a3aac,param_2);
  if (iVar2 == iVar1) {
    *(int *)(param_1 + 0x19f8) = *(int *)(param_1 + 0x19f8) + iVar2;
    return 0;
  }
  return 1;
}

