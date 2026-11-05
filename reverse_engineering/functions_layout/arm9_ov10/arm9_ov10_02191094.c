
undefined4 FUN_02191094(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    sVar1 = *param_1;
    param_1 = param_1 + 1;
    sVar2 = *param_2;
    param_2 = param_2 + 1;
    if (sVar1 != sVar2) {
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return 0;
}

