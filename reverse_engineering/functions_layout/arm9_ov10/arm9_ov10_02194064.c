
undefined4 FUN_02194064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if ((*(char *)(param_1 + 8) == '\x04') || (iVar1 = FUN_0218f260(), iVar1 == 0)) {
    *(undefined1 *)(iVar3 + 0x455) = 0;
    *(undefined4 *)(iVar3 + 0x1d4) = 0;
    *(undefined1 *)(iVar3 + 0x454) = 0;
    FUN_02196a88(iVar3 + 0x2ec);
    FUN_02196500(iVar3 + 0x3a4);
    uVar2 = FUN_021940c4(param_1);
    return uVar2;
  }
  return 1;
}

