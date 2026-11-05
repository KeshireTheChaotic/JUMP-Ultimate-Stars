
undefined4 FUN_02177b88(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = FUN_02177f7c(iVar2);
      if ((iVar1 != 0) && (iVar1 == param_3)) {
        iVar1 = FUN_02069c1c(param_1 + param_2 * 0xc);
        if ((iVar1 == 0) || (iVar1 = FUN_02069c1c(param_1 + iVar2 * 0xc), iVar1 != 0)) {
          FUN_02177bf8(param_1,param_2,iVar2);
        }
        else {
          FUN_02177bf8(param_1,iVar2,param_2);
        }
        *(undefined1 *)(DAT_021a75a4 + 0x1d) = 1;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

