
undefined4 FUN_02176404(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *local_10 [2];
  
  iVar1 = FUN_0217cbd8(local_10);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (param_1 == *local_10[0]) break;
      local_10[0] = local_10[0] + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (iVar2 == iVar1) {
    return 0;
  }
  uVar3 = FUN_0217cc80();
  return uVar3;
}

