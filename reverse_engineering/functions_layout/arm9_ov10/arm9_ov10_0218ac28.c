
undefined4 FUN_0218ac28(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 < 2) || (iVar1 = FUN_020024cc(param_2,&DAT_021a66a8,2), iVar1 != 0)) {
    iVar1 = FUN_0218a6b8(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  iVar3 = param_3 + 2;
  iVar1 = FUN_02189ee0(param_1 + 0x50);
  if (iVar1 < iVar3) {
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x58);
  FUN_02189e18(param_1 + 0x50,&DAT_021a66a8,2);
  FUN_02189e18(param_1 + 0x50,param_2,param_3);
  iVar1 = FUN_0218a6b8(param_1,iVar2 + iVar1,iVar3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_02189db8(param_1 + 0x50,0xffffffff,iVar3);
  return 1;
}

