
undefined4 FUN_0218bbfc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x60));
  if (iVar1 == 0) {
    return 1;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_020012d8(*(undefined4 *)(param_1 + 0x60),iVar4);
      iVar2 = FUN_0218bd24(*(undefined2 *)(iVar2 + 8),param_2);
      if (-1 < iVar2) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  if (iVar4 == 0) {
    return 1;
  }
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    FUN_02001150(*(undefined4 *)(param_1 + 0x60),iVar4);
  }
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x60));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    return 1;
  }
  piVar3 = (int *)FUN_020012d8(*(undefined4 *)(param_1 + 0x60),0);
  iVar2 = *piVar3;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar3 = (int *)FUN_020012d8(*(undefined4 *)(param_1 + 0x60),iVar4);
      *piVar3 = *piVar3 - iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_02189db8(param_1 + 0x50,0,iVar2);
  return 1;
}

