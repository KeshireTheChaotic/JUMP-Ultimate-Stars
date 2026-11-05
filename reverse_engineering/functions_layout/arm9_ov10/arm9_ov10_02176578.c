
undefined4 FUN_02176578(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_021a7410 == 0) {
    return 0;
  }
  iVar3 = 0;
  piVar2 = &DAT_021a7418;
  while ((*piVar2 == 0 || (iVar1 = FUN_0218a804(), param_1 != *(byte *)(iVar1 + 1)))) {
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    if (0x1f < iVar3) {
      return 0;
    }
  }
  return (&DAT_021a7418)[iVar3];
}

