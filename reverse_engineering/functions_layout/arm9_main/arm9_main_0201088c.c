
undefined4 FUN_0201088c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  while( true ) {
    if (DAT_020a1544 <= uVar2) {
      return 0;
    }
    iVar1 = *(int *)(DAT_020a153c + uVar2 * DAT_020a1540);
    bVar3 = iVar1 == param_1;
    if (bVar3) {
      iVar1 = *(int *)(DAT_020a153c + uVar2 * DAT_020a1540 + 8);
    }
    if (bVar3 && iVar1 == param_2) break;
    uVar2 = uVar2 + 1;
  }
  return 1;
}

