
undefined8 FUN_02056394(int *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1] + -2;
  iVar4 = *param_1 + 2000;
  if (iVar3 < 1) {
    iVar4 = *param_1 + 1999;
  }
  if (iVar3 < 1) {
    iVar3 = param_1[1] + 10;
  }
  iVar2 = iVar4 / 100;
  iVar4 = iVar4 % 100;
  iVar4 = iVar2 * 5 +
          iVar4 + param_1[2] + (iVar3 * 0x1a + -2) / 10 +
          ((int)(iVar4 + ((uint)(iVar4 >> 1) >> 0x1e)) >> 2) +
          ((int)(iVar2 + ((uint)(iVar2 >> 1) >> 0x1e)) >> 2);
  lVar1 = (longlong)(iVar4 / 7) * 7;
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20),iVar4 - (int)lVar1);
}

