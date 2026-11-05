
undefined4
FUN_02192c50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar1 = FUN_0219346c();
  if (iVar1 != 0) {
    return 0xffffffe4;
  }
  bVar4 = false;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x70) & 1) != 0)) {
    bVar4 = true;
  }
  if (!bVar4) {
    return 0xffffffd9;
  }
  bVar4 = true;
  if ((*(char *)(param_1 + 0x73) != '\0') && (*(char *)(param_1 + 0x73) != '\x04')) {
    bVar4 = false;
  }
  if ((bVar4) &&
     (((*(ushort *)(param_1 + 0x70) & 4) == 0 || ((*(ushort *)(param_1 + 0x70) & 8) != 0)))) {
    return 0xffffffc8;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (((param_6 & 4) == 0) && (*(char *)(param_1 + 0x72) != '\0')) {
    FUN_02053ed0(iVar1 + 0xe0);
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_02053da4(iVar1 + 0xe0);
    if (iVar2 == 0) {
      return 0xfffffffa;
    }
    uVar3 = 0;
  }
  uVar3 = FUN_02192b80(param_1,param_2,param_3,param_4,param_5,uVar3);
  FUN_02053e60(iVar1 + 0xe0);
  return uVar3;
}

