
undefined4 FUN_021644e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 5;
  iVar5 = -1;
  iVar6 = 0;
  do {
    iVar1 = FUN_02152d80(*(undefined4 *)(iVar6 * 0xc + param_1 + param_3 * 4 + 200));
    if (iVar1 == 0) {
      iVar1 = param_2 - iVar6;
      if (iVar1 < 0) {
        iVar2 = -iVar1;
      }
      else {
        iVar2 = iVar1;
      }
      if (iVar2 < iVar4) {
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        iVar4 = iVar1;
        iVar5 = iVar6;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  if (iVar5 != -1) {
    return *(undefined4 *)(iVar5 * 0xc + param_1 + param_3 * 4 + 200);
  }
  if (param_3 == 1) {
    uVar3 = *(undefined4 *)(param_1 + 0xc4);
  }
  else {
    uVar3 = *(undefined4 *)(param_2 * 0xc + param_1 + param_3 * 4 + 200);
  }
  return uVar3;
}

